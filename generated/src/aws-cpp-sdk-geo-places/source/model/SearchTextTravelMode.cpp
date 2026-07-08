/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/SearchTextTravelMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace SearchTextTravelModeMapper {

static const int Car_HASH = HashingUtils::HashString("Car");
static const int Scooter_HASH = HashingUtils::HashString("Scooter");
static const int Truck_HASH = HashingUtils::HashString("Truck");

SearchTextTravelMode GetSearchTextTravelModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Car_HASH) {
    return SearchTextTravelMode::Car;
  } else if (hashCode == Scooter_HASH) {
    return SearchTextTravelMode::Scooter;
  } else if (hashCode == Truck_HASH) {
    return SearchTextTravelMode::Truck;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchTextTravelMode>(hashCode);
  }

  return SearchTextTravelMode::NOT_SET;
}

Aws::String GetNameForSearchTextTravelMode(SearchTextTravelMode enumValue) {
  switch (enumValue) {
    case SearchTextTravelMode::NOT_SET:
      return {};
    case SearchTextTravelMode::Car:
      return "Car";
    case SearchTextTravelMode::Scooter:
      return "Scooter";
    case SearchTextTravelMode::Truck:
      return "Truck";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchTextTravelModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
