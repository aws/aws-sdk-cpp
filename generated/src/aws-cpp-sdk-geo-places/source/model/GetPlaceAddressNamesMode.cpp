/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/GetPlaceAddressNamesMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace GetPlaceAddressNamesModeMapper {

static const int Administrative_HASH = HashingUtils::HashString("Administrative");

GetPlaceAddressNamesMode GetGetPlaceAddressNamesModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Administrative_HASH) {
    return GetPlaceAddressNamesMode::Administrative;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GetPlaceAddressNamesMode>(hashCode);
  }

  return GetPlaceAddressNamesMode::NOT_SET;
}

Aws::String GetNameForGetPlaceAddressNamesMode(GetPlaceAddressNamesMode enumValue) {
  switch (enumValue) {
    case GetPlaceAddressNamesMode::NOT_SET:
      return {};
    case GetPlaceAddressNamesMode::Administrative:
      return "Administrative";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GetPlaceAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
