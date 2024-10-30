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
  enum class WaypointOptimizationSequencingObjective
  {
    NOT_SET,
    FastestRoute,
    ShortestRoute
  };

namespace WaypointOptimizationSequencingObjectiveMapper
{
AWS_GEOROUTES_API WaypointOptimizationSequencingObjective GetWaypointOptimizationSequencingObjectiveForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationSequencingObjective(WaypointOptimizationSequencingObjective value);
} // namespace WaypointOptimizationSequencingObjectiveMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
