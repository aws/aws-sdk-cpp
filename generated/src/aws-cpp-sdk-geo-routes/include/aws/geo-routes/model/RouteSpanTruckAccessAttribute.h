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
  enum class RouteSpanTruckAccessAttribute
  {
    NOT_SET,
    Allowed,
    NoThroughTraffic,
    TollRoad
  };

namespace RouteSpanTruckAccessAttributeMapper
{
AWS_GEOROUTES_API RouteSpanTruckAccessAttribute GetRouteSpanTruckAccessAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanTruckAccessAttribute(RouteSpanTruckAccessAttribute value);
} // namespace RouteSpanTruckAccessAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
