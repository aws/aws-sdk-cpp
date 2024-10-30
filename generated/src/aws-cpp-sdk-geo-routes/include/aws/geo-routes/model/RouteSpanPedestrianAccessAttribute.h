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
  enum class RouteSpanPedestrianAccessAttribute
  {
    NOT_SET,
    Allowed,
    Indoors,
    NoThroughTraffic,
    Park,
    Stairs,
    TollRoad
  };

namespace RouteSpanPedestrianAccessAttributeMapper
{
AWS_GEOROUTES_API RouteSpanPedestrianAccessAttribute GetRouteSpanPedestrianAccessAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanPedestrianAccessAttribute(RouteSpanPedestrianAccessAttribute value);
} // namespace RouteSpanPedestrianAccessAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
