/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteLegAdditionalFeature.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteLegAdditionalFeatureMapper {

static const int Elevation_HASH = HashingUtils::HashString("Elevation");
static const int Incidents_HASH = HashingUtils::HashString("Incidents");
static const int PassThroughWaypoints_HASH = HashingUtils::HashString("PassThroughWaypoints");
static const int Summary_HASH = HashingUtils::HashString("Summary");
static const int Tolls_HASH = HashingUtils::HashString("Tolls");
static const int TravelStepInstructions_HASH = HashingUtils::HashString("TravelStepInstructions");
static const int TruckRoadTypes_HASH = HashingUtils::HashString("TruckRoadTypes");
static const int TypicalDuration_HASH = HashingUtils::HashString("TypicalDuration");
static const int Zones_HASH = HashingUtils::HashString("Zones");
static const int Bookings_HASH = HashingUtils::HashString("Bookings");
static const int IntermediateStops_HASH = HashingUtils::HashString("IntermediateStops");
static const int NextDepartures_HASH = HashingUtils::HashString("NextDepartures");

RouteLegAdditionalFeature GetRouteLegAdditionalFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Elevation_HASH) {
    return RouteLegAdditionalFeature::Elevation;
  } else if (hashCode == Incidents_HASH) {
    return RouteLegAdditionalFeature::Incidents;
  } else if (hashCode == PassThroughWaypoints_HASH) {
    return RouteLegAdditionalFeature::PassThroughWaypoints;
  } else if (hashCode == Summary_HASH) {
    return RouteLegAdditionalFeature::Summary;
  } else if (hashCode == Tolls_HASH) {
    return RouteLegAdditionalFeature::Tolls;
  } else if (hashCode == TravelStepInstructions_HASH) {
    return RouteLegAdditionalFeature::TravelStepInstructions;
  } else if (hashCode == TruckRoadTypes_HASH) {
    return RouteLegAdditionalFeature::TruckRoadTypes;
  } else if (hashCode == TypicalDuration_HASH) {
    return RouteLegAdditionalFeature::TypicalDuration;
  } else if (hashCode == Zones_HASH) {
    return RouteLegAdditionalFeature::Zones;
  } else if (hashCode == Bookings_HASH) {
    return RouteLegAdditionalFeature::Bookings;
  } else if (hashCode == IntermediateStops_HASH) {
    return RouteLegAdditionalFeature::IntermediateStops;
  } else if (hashCode == NextDepartures_HASH) {
    return RouteLegAdditionalFeature::NextDepartures;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteLegAdditionalFeature>(hashCode);
  }

  return RouteLegAdditionalFeature::NOT_SET;
}

Aws::String GetNameForRouteLegAdditionalFeature(RouteLegAdditionalFeature enumValue) {
  switch (enumValue) {
    case RouteLegAdditionalFeature::NOT_SET:
      return {};
    case RouteLegAdditionalFeature::Elevation:
      return "Elevation";
    case RouteLegAdditionalFeature::Incidents:
      return "Incidents";
    case RouteLegAdditionalFeature::PassThroughWaypoints:
      return "PassThroughWaypoints";
    case RouteLegAdditionalFeature::Summary:
      return "Summary";
    case RouteLegAdditionalFeature::Tolls:
      return "Tolls";
    case RouteLegAdditionalFeature::TravelStepInstructions:
      return "TravelStepInstructions";
    case RouteLegAdditionalFeature::TruckRoadTypes:
      return "TruckRoadTypes";
    case RouteLegAdditionalFeature::TypicalDuration:
      return "TypicalDuration";
    case RouteLegAdditionalFeature::Zones:
      return "Zones";
    case RouteLegAdditionalFeature::Bookings:
      return "Bookings";
    case RouteLegAdditionalFeature::IntermediateStops:
      return "IntermediateStops";
    case RouteLegAdditionalFeature::NextDepartures:
      return "NextDepartures";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteLegAdditionalFeatureMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
