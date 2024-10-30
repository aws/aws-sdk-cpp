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
  enum class RouteDirection
  {
    NOT_SET,
    East,
    North,
    South,
    West
  };

namespace RouteDirectionMapper
{
AWS_GEOROUTES_API RouteDirection GetRouteDirectionForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteDirection(RouteDirection value);
} // namespace RouteDirectionMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
