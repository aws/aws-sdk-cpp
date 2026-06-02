/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitIncidentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitIncidentTypeMapper {

static const int Accident_HASH = HashingUtils::HashString("Accident");
static const int Construction_HASH = HashingUtils::HashString("Construction");
static const int Demonstration_HASH = HashingUtils::HashString("Demonstration");
static const int Holiday_HASH = HashingUtils::HashString("Holiday");
static const int Maintenance_HASH = HashingUtils::HashString("Maintenance");
static const int MedicalEmergency_HASH = HashingUtils::HashString("MedicalEmergency");
static const int Other_HASH = HashingUtils::HashString("Other");
static const int PoliceActivity_HASH = HashingUtils::HashString("PoliceActivity");
static const int Strike_HASH = HashingUtils::HashString("Strike");
static const int TechnicalProblem_HASH = HashingUtils::HashString("TechnicalProblem");
static const int Weather_HASH = HashingUtils::HashString("Weather");

RouteTransitIncidentType GetRouteTransitIncidentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Accident_HASH) {
    return RouteTransitIncidentType::Accident;
  } else if (hashCode == Construction_HASH) {
    return RouteTransitIncidentType::Construction;
  } else if (hashCode == Demonstration_HASH) {
    return RouteTransitIncidentType::Demonstration;
  } else if (hashCode == Holiday_HASH) {
    return RouteTransitIncidentType::Holiday;
  } else if (hashCode == Maintenance_HASH) {
    return RouteTransitIncidentType::Maintenance;
  } else if (hashCode == MedicalEmergency_HASH) {
    return RouteTransitIncidentType::MedicalEmergency;
  } else if (hashCode == Other_HASH) {
    return RouteTransitIncidentType::Other;
  } else if (hashCode == PoliceActivity_HASH) {
    return RouteTransitIncidentType::PoliceActivity;
  } else if (hashCode == Strike_HASH) {
    return RouteTransitIncidentType::Strike;
  } else if (hashCode == TechnicalProblem_HASH) {
    return RouteTransitIncidentType::TechnicalProblem;
  } else if (hashCode == Weather_HASH) {
    return RouteTransitIncidentType::Weather;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitIncidentType>(hashCode);
  }

  return RouteTransitIncidentType::NOT_SET;
}

Aws::String GetNameForRouteTransitIncidentType(RouteTransitIncidentType enumValue) {
  switch (enumValue) {
    case RouteTransitIncidentType::NOT_SET:
      return {};
    case RouteTransitIncidentType::Accident:
      return "Accident";
    case RouteTransitIncidentType::Construction:
      return "Construction";
    case RouteTransitIncidentType::Demonstration:
      return "Demonstration";
    case RouteTransitIncidentType::Holiday:
      return "Holiday";
    case RouteTransitIncidentType::Maintenance:
      return "Maintenance";
    case RouteTransitIncidentType::MedicalEmergency:
      return "MedicalEmergency";
    case RouteTransitIncidentType::Other:
      return "Other";
    case RouteTransitIncidentType::PoliceActivity:
      return "PoliceActivity";
    case RouteTransitIncidentType::Strike:
      return "Strike";
    case RouteTransitIncidentType::TechnicalProblem:
      return "TechnicalProblem";
    case RouteTransitIncidentType::Weather:
      return "Weather";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitIncidentTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
