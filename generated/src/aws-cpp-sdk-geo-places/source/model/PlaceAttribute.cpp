/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/PlaceAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace PlaceAttributeMapper {

static const int DriveThrough_HASH = HashingUtils::HashString("DriveThrough");

PlaceAttribute GetPlaceAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DriveThrough_HASH) {
    return PlaceAttribute::DriveThrough;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PlaceAttribute>(hashCode);
  }

  return PlaceAttribute::NOT_SET;
}

Aws::String GetNameForPlaceAttribute(PlaceAttribute enumValue) {
  switch (enumValue) {
    case PlaceAttribute::NOT_SET:
      return {};
    case PlaceAttribute::DriveThrough:
      return "DriveThrough";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlaceAttributeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
