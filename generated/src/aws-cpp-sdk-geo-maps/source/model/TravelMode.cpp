/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/TravelMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace TravelModeMapper {

static const int Transit_HASH = HashingUtils::HashString("Transit");
static const int Truck_HASH = HashingUtils::HashString("Truck");

TravelMode GetTravelModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Transit_HASH) {
    return TravelMode::Transit;
  } else if (hashCode == Truck_HASH) {
    return TravelMode::Truck;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TravelMode>(hashCode);
  }

  return TravelMode::NOT_SET;
}

Aws::String GetNameForTravelMode(TravelMode enumValue) {
  switch (enumValue) {
    case TravelMode::NOT_SET:
      return {};
    case TravelMode::Transit:
      return "Transit";
    case TravelMode::Truck:
      return "Truck";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TravelModeMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
