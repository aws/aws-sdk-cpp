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
  enum class RouteMatrixTravelMode
  {
    NOT_SET,
    Car,
    Pedestrian,
    Scooter,
    Truck
  };

namespace RouteMatrixTravelModeMapper
{
AWS_GEOROUTES_API RouteMatrixTravelMode GetRouteMatrixTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteMatrixTravelMode(RouteMatrixTravelMode value);
} // namespace RouteMatrixTravelModeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
