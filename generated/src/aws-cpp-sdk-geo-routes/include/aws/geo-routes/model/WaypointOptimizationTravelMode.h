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
  enum class WaypointOptimizationTravelMode
  {
    NOT_SET,
    Car,
    Pedestrian,
    Scooter,
    Truck
  };

namespace WaypointOptimizationTravelModeMapper
{
AWS_GEOROUTES_API WaypointOptimizationTravelMode GetWaypointOptimizationTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationTravelMode(WaypointOptimizationTravelMode value);
} // namespace WaypointOptimizationTravelModeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
