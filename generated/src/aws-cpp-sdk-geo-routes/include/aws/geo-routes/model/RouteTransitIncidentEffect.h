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
enum class RouteTransitIncidentEffect {
  NOT_SET,
  Delayed,
  Detoured,
  Other,
  ServiceAdded,
  ServiceCancelled,
  ServiceModified,
  ServiceReduced,
  StopMoved
};

namespace RouteTransitIncidentEffectMapper {
AWS_GEOROUTES_API RouteTransitIncidentEffect GetRouteTransitIncidentEffectForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitIncidentEffect(RouteTransitIncidentEffect value);
}  // namespace RouteTransitIncidentEffectMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
