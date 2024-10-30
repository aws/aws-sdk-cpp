/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RouteVehicleIncidentSeverity
  {
    NOT_SET,
    Critical,
    High,
    Medium,
    Low
  };

namespace RouteVehicleIncidentSeverityMapper
{
AWS_GEOROUTES_API RouteVehicleIncidentSeverity GetRouteVehicleIncidentSeverityForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteVehicleIncidentSeverity(RouteVehicleIncidentSeverity value);
} // namespace RouteVehicleIncidentSeverityMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
