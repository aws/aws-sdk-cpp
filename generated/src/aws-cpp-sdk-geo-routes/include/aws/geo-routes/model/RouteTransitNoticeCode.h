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
enum class RouteTransitNoticeCode {
  NOT_SET,
  AccuratePolylineUnavailable,
  IntermediateStopsUnavailable,
  NoSchedule,
  Other,
  PotentialViolatedVehicleRestrictionUsage,
  ScheduledTimes,
  SeasonalClosure,
  ViolatedAvoidFerry,
  ViolatedAvoidRailFerry,
  ViolatedExcludedTransitMode,
  ViolatedVehicleRestriction,
  ViolatedAvoidAreas
};

namespace RouteTransitNoticeCodeMapper {
AWS_GEOROUTES_API RouteTransitNoticeCode GetRouteTransitNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitNoticeCode(RouteTransitNoticeCode value);
}  // namespace RouteTransitNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
