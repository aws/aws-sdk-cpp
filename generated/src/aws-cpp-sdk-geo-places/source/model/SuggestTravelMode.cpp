/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/SuggestTravelMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace SuggestTravelModeMapper {

static const int Car_HASH = HashingUtils::HashString("Car");
static const int Scooter_HASH = HashingUtils::HashString("Scooter");
static const int Truck_HASH = HashingUtils::HashString("Truck");

SuggestTravelMode GetSuggestTravelModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Car_HASH) {
    return SuggestTravelMode::Car;
  } else if (hashCode == Scooter_HASH) {
    return SuggestTravelMode::Scooter;
  } else if (hashCode == Truck_HASH) {
    return SuggestTravelMode::Truck;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SuggestTravelMode>(hashCode);
  }

  return SuggestTravelMode::NOT_SET;
}

Aws::String GetNameForSuggestTravelMode(SuggestTravelMode enumValue) {
  switch (enumValue) {
    case SuggestTravelMode::NOT_SET:
      return {};
    case SuggestTravelMode::Car:
      return "Car";
    case SuggestTravelMode::Scooter:
      return "Scooter";
    case SuggestTravelMode::Truck:
      return "Truck";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SuggestTravelModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
