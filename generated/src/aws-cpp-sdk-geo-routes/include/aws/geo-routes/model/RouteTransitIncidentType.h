/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteTransitIncidentType {
  NOT_SET,
  Accident,
  Construction,
  Demonstration,
  Holiday,
  Maintenance,
  MedicalEmergency,
  Other,
  PoliceActivity,
  Strike,
  TechnicalProblem,
  Weather
};

namespace RouteTransitIncidentTypeMapper {
AWS_GEOROUTES_API RouteTransitIncidentType GetRouteTransitIncidentTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitIncidentType(RouteTransitIncidentType value);
}  // namespace RouteTransitIncidentTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
