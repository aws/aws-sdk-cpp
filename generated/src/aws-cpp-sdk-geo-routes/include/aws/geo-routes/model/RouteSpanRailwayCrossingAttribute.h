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
  enum class RouteSpanRailwayCrossingAttribute
  {
    NOT_SET,
    Protected,
    Unprotected
  };

namespace RouteSpanRailwayCrossingAttributeMapper
{
AWS_GEOROUTES_API RouteSpanRailwayCrossingAttribute GetRouteSpanRailwayCrossingAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanRailwayCrossingAttribute(RouteSpanRailwayCrossingAttribute value);
} // namespace RouteSpanRailwayCrossingAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
