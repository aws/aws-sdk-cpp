/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/imagebuilder/model/ImageScanningType.h>

using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {
namespace ImageScanningTypeMapper {

static const int TEST_INSTANCE_CVE_HASH = HashingUtils::HashString("TEST_INSTANCE_CVE");
static const int ON_DEMAND_AMI_CVE_HASH = HashingUtils::HashString("ON_DEMAND_AMI_CVE");

ImageScanningType GetImageScanningTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEST_INSTANCE_CVE_HASH) {
    return ImageScanningType::TEST_INSTANCE_CVE;
  } else if (hashCode == ON_DEMAND_AMI_CVE_HASH) {
    return ImageScanningType::ON_DEMAND_AMI_CVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageScanningType>(hashCode);
  }

  return ImageScanningType::NOT_SET;
}

Aws::String GetNameForImageScanningType(ImageScanningType enumValue) {
  switch (enumValue) {
    case ImageScanningType::NOT_SET:
      return {};
    case ImageScanningType::TEST_INSTANCE_CVE:
      return "TEST_INSTANCE_CVE";
    case ImageScanningType::ON_DEMAND_AMI_CVE:
      return "ON_DEMAND_AMI_CVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageScanningTypeMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
