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
  enum class RouteSpanRoadAttribute
  {
    NOT_SET,
    Bridge,
    BuiltUpArea,
    ControlledAccessHighway,
    DirtRoad,
    DividedRoad,
    Motorway,
    PrivateRoad,
    Ramp,
    RightHandTraffic,
    Roundabout,
    Tunnel,
    UnderConstruction
  };

namespace RouteSpanRoadAttributeMapper
{
AWS_GEOROUTES_API RouteSpanRoadAttribute GetRouteSpanRoadAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanRoadAttribute(RouteSpanRoadAttribute value);
} // namespace RouteSpanRoadAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
