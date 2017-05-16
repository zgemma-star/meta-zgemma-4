IMAGE_CLASSES += "zgemma-emmc_image_multi"
IMAGE_FSTYPES += "zgemma-emmc"
IMAGE_ROOTFS_SIZE ?= "294912"

TARGET_ARCH = "arm"
DEFAULTTUNE = "armv7ahf-neon"

require conf/machine/include/arch-armv7a.inc
require conf/machine/include/zgemma.inc