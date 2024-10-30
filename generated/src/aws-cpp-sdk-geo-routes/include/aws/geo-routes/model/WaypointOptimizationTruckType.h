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
  enum class WaypointOptimizationTruckType
  {
    NOT_SET,
    StraightTruck,
    Tractor
  };

namespace WaypointOptimizationTruckTypeMapper
{
AWS_GEOROUTES_API WaypointOptimizationTruckType GetWaypointOptimizationTruckTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationTruckType(WaypointOptimizationTruckType value);
} // namespace WaypointOptimizationTruckTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
