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
  enum class RouteSpanCarAccessAttribute
  {
    NOT_SET,
    Allowed,
    NoThroughTraffic,
    TollRoad
  };

namespace RouteSpanCarAccessAttributeMapper
{
AWS_GEOROUTES_API RouteSpanCarAccessAttribute GetRouteSpanCarAccessAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanCarAccessAttribute(RouteSpanCarAccessAttribute value);
} // namespace RouteSpanCarAccessAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
