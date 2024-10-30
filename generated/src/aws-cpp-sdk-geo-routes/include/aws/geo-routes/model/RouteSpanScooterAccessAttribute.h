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
  enum class RouteSpanScooterAccessAttribute
  {
    NOT_SET,
    Allowed,
    NoThroughTraffic,
    TollRoad
  };

namespace RouteSpanScooterAccessAttributeMapper
{
AWS_GEOROUTES_API RouteSpanScooterAccessAttribute GetRouteSpanScooterAccessAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanScooterAccessAttribute(RouteSpanScooterAccessAttribute value);
} // namespace RouteSpanScooterAccessAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
