/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ImageTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int NATIVE_HASH = HashingUtils::HashString("NATIVE");
static const int BYOL_HASH = HashingUtils::HashString("BYOL");

ImageType GetImageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return ImageType::CUSTOM;
  } else if (hashCode == NATIVE_HASH) {
    return ImageType::NATIVE;
  } else if (hashCode == BYOL_HASH) {
    return ImageType::BYOL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageType>(hashCode);
  }

  return ImageType::NOT_SET;
}

Aws::String GetNameForImageType(ImageType enumValue) {
  switch (enumValue) {
    case ImageType::NOT_SET:
      return {};
    case ImageType::CUSTOM:
      return "CUSTOM";
    case ImageType::NATIVE:
      return "NATIVE";
    case ImageType::BYOL:
      return "BYOL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageTypeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
