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
  enum class RouteRoadType
  {
    NOT_SET,
    Highway,
    Rural,
    Urban
  };

namespace RouteRoadTypeMapper
{
AWS_GEOROUTES_API RouteRoadType GetRouteRoadTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteRoadType(RouteRoadType value);
} // namespace RouteRoadTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
