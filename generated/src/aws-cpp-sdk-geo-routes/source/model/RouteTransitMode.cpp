/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitModeMapper {

static const int AerialTramway_HASH = HashingUtils::HashString("AerialTramway");
static const int Airplane_HASH = HashingUtils::HashString("Airplane");
static const int All_HASH = HashingUtils::HashString("All");
static const int Bus_HASH = HashingUtils::HashString("Bus");
static const int BusRapidTransit_HASH = HashingUtils::HashString("BusRapidTransit");
static const int CityTrain_HASH = HashingUtils::HashString("CityTrain");
static const int Ferry_HASH = HashingUtils::HashString("Ferry");
static const int FunicularRailway_HASH = HashingUtils::HashString("FunicularRailway");
static const int HighSpeedTrain_HASH = HashingUtils::HashString("HighSpeedTrain");
static const int IntercityTrain_HASH = HashingUtils::HashString("IntercityTrain");
static const int InterregionalTrain_HASH = HashingUtils::HashString("InterregionalTrain");
static const int LightRail_HASH = HashingUtils::HashString("LightRail");
static const int Monorail_HASH = HashingUtils::HashString("Monorail");
static const int PrivateBus_HASH = HashingUtils::HashString("PrivateBus");
static const int RegionalTrain_HASH = HashingUtils::HashString("RegionalTrain");
static const int Subway_HASH = HashingUtils::HashString("Subway");

RouteTransitMode GetRouteTransitModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AerialTramway_HASH) {
    return RouteTransitMode::AerialTramway;
  } else if (hashCode == Airplane_HASH) {
    return RouteTransitMode::Airplane;
  } else if (hashCode == All_HASH) {
    return RouteTransitMode::All;
  } else if (hashCode == Bus_HASH) {
    return RouteTransitMode::Bus;
  } else if (hashCode == BusRapidTransit_HASH) {
    return RouteTransitMode::BusRapidTransit;
  } else if (hashCode == CityTrain_HASH) {
    return RouteTransitMode::CityTrain;
  } else if (hashCode == Ferry_HASH) {
    return RouteTransitMode::Ferry;
  } else if (hashCode == FunicularRailway_HASH) {
    return RouteTransitMode::FunicularRailway;
  } else if (hashCode == HighSpeedTrain_HASH) {
    return RouteTransitMode::HighSpeedTrain;
  } else if (hashCode == IntercityTrain_HASH) {
    return RouteTransitMode::IntercityTrain;
  } else if (hashCode == InterregionalTrain_HASH) {
    return RouteTransitMode::InterregionalTrain;
  } else if (hashCode == LightRail_HASH) {
    return RouteTransitMode::LightRail;
  } else if (hashCode == Monorail_HASH) {
    return RouteTransitMode::Monorail;
  } else if (hashCode == PrivateBus_HASH) {
    return RouteTransitMode::PrivateBus;
  } else if (hashCode == RegionalTrain_HASH) {
    return RouteTransitMode::RegionalTrain;
  } else if (hashCode == Subway_HASH) {
    return RouteTransitMode::Subway;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitMode>(hashCode);
  }

  return RouteTransitMode::NOT_SET;
}

Aws::String GetNameForRouteTransitMode(RouteTransitMode enumValue) {
  switch (enumValue) {
    case RouteTransitMode::NOT_SET:
      return {};
    case RouteTransitMode::AerialTramway:
      return "AerialTramway";
    case RouteTransitMode::Airplane:
      return "Airplane";
    case RouteTransitMode::All:
      return "All";
    case RouteTransitMode::Bus:
      return "Bus";
    case RouteTransitMode::BusRapidTransit:
      return "BusRapidTransit";
    case RouteTransitMode::CityTrain:
      return "CityTrain";
    case RouteTransitMode::Ferry:
      return "Ferry";
    case RouteTransitMode::FunicularRailway:
      return "FunicularRailway";
    case RouteTransitMode::HighSpeedTrain:
      return "HighSpeedTrain";
    case RouteTransitMode::IntercityTrain:
      return "IntercityTrain";
    case RouteTransitMode::InterregionalTrain:
      return "InterregionalTrain";
    case RouteTransitMode::LightRail:
      return "LightRail";
    case RouteTransitMode::Monorail:
      return "Monorail";
    case RouteTransitMode::PrivateBus:
      return "PrivateBus";
    case RouteTransitMode::RegionalTrain:
      return "RegionalTrain";
    case RouteTransitMode::Subway:
      return "Subway";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
