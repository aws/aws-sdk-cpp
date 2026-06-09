/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteLegTravelMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteLegTravelModeMapper {

static const int Car_HASH = HashingUtils::HashString("Car");
static const int Ferry_HASH = HashingUtils::HashString("Ferry");
static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
static const int Scooter_HASH = HashingUtils::HashString("Scooter");
static const int Truck_HASH = HashingUtils::HashString("Truck");
static const int CarShuttleTrain_HASH = HashingUtils::HashString("CarShuttleTrain");
static const int AerialTramway_HASH = HashingUtils::HashString("AerialTramway");
static const int Airplane_HASH = HashingUtils::HashString("Airplane");
static const int Bus_HASH = HashingUtils::HashString("Bus");
static const int BusRapidTransit_HASH = HashingUtils::HashString("BusRapidTransit");
static const int CityTrain_HASH = HashingUtils::HashString("CityTrain");
static const int FunicularRailway_HASH = HashingUtils::HashString("FunicularRailway");
static const int HighSpeedTrain_HASH = HashingUtils::HashString("HighSpeedTrain");
static const int IntercityTrain_HASH = HashingUtils::HashString("IntercityTrain");
static const int InterregionalTrain_HASH = HashingUtils::HashString("InterregionalTrain");
static const int LightRail_HASH = HashingUtils::HashString("LightRail");
static const int Monorail_HASH = HashingUtils::HashString("Monorail");
static const int PrivateBus_HASH = HashingUtils::HashString("PrivateBus");
static const int RegionalTrain_HASH = HashingUtils::HashString("RegionalTrain");
static const int Subway_HASH = HashingUtils::HashString("Subway");

RouteLegTravelMode GetRouteLegTravelModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Car_HASH) {
    return RouteLegTravelMode::Car;
  } else if (hashCode == Ferry_HASH) {
    return RouteLegTravelMode::Ferry;
  } else if (hashCode == Pedestrian_HASH) {
    return RouteLegTravelMode::Pedestrian;
  } else if (hashCode == Scooter_HASH) {
    return RouteLegTravelMode::Scooter;
  } else if (hashCode == Truck_HASH) {
    return RouteLegTravelMode::Truck;
  } else if (hashCode == CarShuttleTrain_HASH) {
    return RouteLegTravelMode::CarShuttleTrain;
  } else if (hashCode == AerialTramway_HASH) {
    return RouteLegTravelMode::AerialTramway;
  } else if (hashCode == Airplane_HASH) {
    return RouteLegTravelMode::Airplane;
  } else if (hashCode == Bus_HASH) {
    return RouteLegTravelMode::Bus;
  } else if (hashCode == BusRapidTransit_HASH) {
    return RouteLegTravelMode::BusRapidTransit;
  } else if (hashCode == CityTrain_HASH) {
    return RouteLegTravelMode::CityTrain;
  } else if (hashCode == FunicularRailway_HASH) {
    return RouteLegTravelMode::FunicularRailway;
  } else if (hashCode == HighSpeedTrain_HASH) {
    return RouteLegTravelMode::HighSpeedTrain;
  } else if (hashCode == IntercityTrain_HASH) {
    return RouteLegTravelMode::IntercityTrain;
  } else if (hashCode == InterregionalTrain_HASH) {
    return RouteLegTravelMode::InterregionalTrain;
  } else if (hashCode == LightRail_HASH) {
    return RouteLegTravelMode::LightRail;
  } else if (hashCode == Monorail_HASH) {
    return RouteLegTravelMode::Monorail;
  } else if (hashCode == PrivateBus_HASH) {
    return RouteLegTravelMode::PrivateBus;
  } else if (hashCode == RegionalTrain_HASH) {
    return RouteLegTravelMode::RegionalTrain;
  } else if (hashCode == Subway_HASH) {
    return RouteLegTravelMode::Subway;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteLegTravelMode>(hashCode);
  }

  return RouteLegTravelMode::NOT_SET;
}

Aws::String GetNameForRouteLegTravelMode(RouteLegTravelMode enumValue) {
  switch (enumValue) {
    case RouteLegTravelMode::NOT_SET:
      return {};
    case RouteLegTravelMode::Car:
      return "Car";
    case RouteLegTravelMode::Ferry:
      return "Ferry";
    case RouteLegTravelMode::Pedestrian:
      return "Pedestrian";
    case RouteLegTravelMode::Scooter:
      return "Scooter";
    case RouteLegTravelMode::Truck:
      return "Truck";
    case RouteLegTravelMode::CarShuttleTrain:
      return "CarShuttleTrain";
    case RouteLegTravelMode::AerialTramway:
      return "AerialTramway";
    case RouteLegTravelMode::Airplane:
      return "Airplane";
    case RouteLegTravelMode::Bus:
      return "Bus";
    case RouteLegTravelMode::BusRapidTransit:
      return "BusRapidTransit";
    case RouteLegTravelMode::CityTrain:
      return "CityTrain";
    case RouteLegTravelMode::FunicularRailway:
      return "FunicularRailway";
    case RouteLegTravelMode::HighSpeedTrain:
      return "HighSpeedTrain";
    case RouteLegTravelMode::IntercityTrain:
      return "IntercityTrain";
    case RouteLegTravelMode::InterregionalTrain:
      return "InterregionalTrain";
    case RouteLegTravelMode::LightRail:
      return "LightRail";
    case RouteLegTravelMode::Monorail:
      return "Monorail";
    case RouteLegTravelMode::PrivateBus:
      return "PrivateBus";
    case RouteLegTravelMode::RegionalTrain:
      return "RegionalTrain";
    case RouteLegTravelMode::Subway:
      return "Subway";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteLegTravelModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
