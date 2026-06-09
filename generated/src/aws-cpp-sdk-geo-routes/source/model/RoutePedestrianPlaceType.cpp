/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RoutePedestrianPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RoutePedestrianPlaceTypeMapper {

static const int AccessPoint_HASH = HashingUtils::HashString("AccessPoint");
static const int DockingStation_HASH = HashingUtils::HashString("DockingStation");
static const int ParkingLot_HASH = HashingUtils::HashString("ParkingLot");
static const int Station_HASH = HashingUtils::HashString("Station");

RoutePedestrianPlaceType GetRoutePedestrianPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccessPoint_HASH) {
    return RoutePedestrianPlaceType::AccessPoint;
  } else if (hashCode == DockingStation_HASH) {
    return RoutePedestrianPlaceType::DockingStation;
  } else if (hashCode == ParkingLot_HASH) {
    return RoutePedestrianPlaceType::ParkingLot;
  } else if (hashCode == Station_HASH) {
    return RoutePedestrianPlaceType::Station;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RoutePedestrianPlaceType>(hashCode);
  }

  return RoutePedestrianPlaceType::NOT_SET;
}

Aws::String GetNameForRoutePedestrianPlaceType(RoutePedestrianPlaceType enumValue) {
  switch (enumValue) {
    case RoutePedestrianPlaceType::NOT_SET:
      return {};
    case RoutePedestrianPlaceType::AccessPoint:
      return "AccessPoint";
    case RoutePedestrianPlaceType::DockingStation:
      return "DockingStation";
    case RoutePedestrianPlaceType::ParkingLot:
      return "ParkingLot";
    case RoutePedestrianPlaceType::Station:
      return "Station";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RoutePedestrianPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
