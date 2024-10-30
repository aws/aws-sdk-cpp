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
  enum class RouteSpanAdditionalFeature
  {
    NOT_SET,
    BestCaseDuration,
    CarAccess,
    Country,
    Distance,
    Duration,
    DynamicSpeed,
    FunctionalClassification,
    Gates,
    Incidents,
    Names,
    Notices,
    PedestrianAccess,
    RailwayCrossings,
    Region,
    RoadAttributes,
    RouteNumbers,
    ScooterAccess,
    SpeedLimit,
    TollSystems,
    TruckAccess,
    TruckRoadTypes,
    TypicalDuration,
    Zones,
    Consumption
  };

namespace RouteSpanAdditionalFeatureMapper
{
AWS_GEOROUTES_API RouteSpanAdditionalFeature GetRouteSpanAdditionalFeatureForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanAdditionalFeature(RouteSpanAdditionalFeature value);
} // namespace RouteSpanAdditionalFeatureMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
