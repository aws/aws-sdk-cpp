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
enum class RouteVehicleIncidentType {
  NOT_SET,
  Accident,
  Congestion,
  Construction,
  DisabledVehicle,
  LaneRestriction,
  MassTransit,
  Other,
  PlannedEvent,
  RoadClosure,
  RoadHazard,
  Weather
};

namespace RouteVehicleIncidentTypeMapper {
AWS_GEOROUTES_API RouteVehicleIncidentType GetRouteVehicleIncidentTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteVehicleIncidentType(RouteVehicleIncidentType value);
}  // namespace RouteVehicleIncidentTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
