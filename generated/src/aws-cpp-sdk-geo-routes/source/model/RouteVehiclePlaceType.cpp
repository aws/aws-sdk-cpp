/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteVehiclePlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteVehiclePlaceTypeMapper {

static const int AccessPoint_HASH = HashingUtils::HashString("AccessPoint");
static const int DockingStation_HASH = HashingUtils::HashString("DockingStation");
static const int ParkingLot_HASH = HashingUtils::HashString("ParkingLot");
static const int Station_HASH = HashingUtils::HashString("Station");

RouteVehiclePlaceType GetRouteVehiclePlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccessPoint_HASH) {
    return RouteVehiclePlaceType::AccessPoint;
  } else if (hashCode == DockingStation_HASH) {
    return RouteVehiclePlaceType::DockingStation;
  } else if (hashCode == ParkingLot_HASH) {
    return RouteVehiclePlaceType::ParkingLot;
  } else if (hashCode == Station_HASH) {
    return RouteVehiclePlaceType::Station;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteVehiclePlaceType>(hashCode);
  }

  return RouteVehiclePlaceType::NOT_SET;
}

Aws::String GetNameForRouteVehiclePlaceType(RouteVehiclePlaceType enumValue) {
  switch (enumValue) {
    case RouteVehiclePlaceType::NOT_SET:
      return {};
    case RouteVehiclePlaceType::AccessPoint:
      return "AccessPoint";
    case RouteVehiclePlaceType::DockingStation:
      return "DockingStation";
    case RouteVehiclePlaceType::ParkingLot:
      return "ParkingLot";
    case RouteVehiclePlaceType::Station:
      return "Station";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteVehiclePlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
