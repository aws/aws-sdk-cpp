/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MediaTypeMapper {

static const int IMAGE_LOGO_LIGHT_FAVICON_HASH = HashingUtils::HashString("IMAGE_LOGO_LIGHT_FAVICON");
static const int IMAGE_LOGO_DARK_FAVICON_HASH = HashingUtils::HashString("IMAGE_LOGO_DARK_FAVICON");
static const int IMAGE_LOGO_LIGHT_HORIZONTAL_HASH = HashingUtils::HashString("IMAGE_LOGO_LIGHT_HORIZONTAL");
static const int IMAGE_LOGO_DARK_HORIZONTAL_HASH = HashingUtils::HashString("IMAGE_LOGO_DARK_HORIZONTAL");

MediaType GetMediaTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IMAGE_LOGO_LIGHT_FAVICON_HASH) {
    return MediaType::IMAGE_LOGO_LIGHT_FAVICON;
  } else if (hashCode == IMAGE_LOGO_DARK_FAVICON_HASH) {
    return MediaType::IMAGE_LOGO_DARK_FAVICON;
  } else if (hashCode == IMAGE_LOGO_LIGHT_HORIZONTAL_HASH) {
    return MediaType::IMAGE_LOGO_LIGHT_HORIZONTAL;
  } else if (hashCode == IMAGE_LOGO_DARK_HORIZONTAL_HASH) {
    return MediaType::IMAGE_LOGO_DARK_HORIZONTAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaType>(hashCode);
  }

  return MediaType::NOT_SET;
}

Aws::String GetNameForMediaType(MediaType enumValue) {
  switch (enumValue) {
    case MediaType::NOT_SET:
      return {};
    case MediaType::IMAGE_LOGO_LIGHT_FAVICON:
      return "IMAGE_LOGO_LIGHT_FAVICON";
    case MediaType::IMAGE_LOGO_DARK_FAVICON:
      return "IMAGE_LOGO_DARK_FAVICON";
    case MediaType::IMAGE_LOGO_LIGHT_HORIZONTAL:
      return "IMAGE_LOGO_LIGHT_HORIZONTAL";
    case MediaType::IMAGE_LOGO_DARK_HORIZONTAL:
      return "IMAGE_LOGO_DARK_HORIZONTAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
