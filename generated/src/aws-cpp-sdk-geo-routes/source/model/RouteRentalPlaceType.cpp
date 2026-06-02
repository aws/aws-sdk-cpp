/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteRentalPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteRentalPlaceTypeMapper {

static const int AccessPoint_HASH = HashingUtils::HashString("AccessPoint");
static const int DockingStation_HASH = HashingUtils::HashString("DockingStation");
static const int ParkingLot_HASH = HashingUtils::HashString("ParkingLot");
static const int Station_HASH = HashingUtils::HashString("Station");

RouteRentalPlaceType GetRouteRentalPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccessPoint_HASH) {
    return RouteRentalPlaceType::AccessPoint;
  } else if (hashCode == DockingStation_HASH) {
    return RouteRentalPlaceType::DockingStation;
  } else if (hashCode == ParkingLot_HASH) {
    return RouteRentalPlaceType::ParkingLot;
  } else if (hashCode == Station_HASH) {
    return RouteRentalPlaceType::Station;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteRentalPlaceType>(hashCode);
  }

  return RouteRentalPlaceType::NOT_SET;
}

Aws::String GetNameForRouteRentalPlaceType(RouteRentalPlaceType enumValue) {
  switch (enumValue) {
    case RouteRentalPlaceType::NOT_SET:
      return {};
    case RouteRentalPlaceType::AccessPoint:
      return "AccessPoint";
    case RouteRentalPlaceType::DockingStation:
      return "DockingStation";
    case RouteRentalPlaceType::ParkingLot:
      return "ParkingLot";
    case RouteRentalPlaceType::Station:
      return "Station";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteRentalPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
