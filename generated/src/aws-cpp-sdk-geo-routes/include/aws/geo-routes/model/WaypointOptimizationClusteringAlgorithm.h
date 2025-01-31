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
  enum class WaypointOptimizationClusteringAlgorithm
  {
    NOT_SET,
    DrivingDistance,
    TopologySegment
  };

namespace WaypointOptimizationClusteringAlgorithmMapper
{
AWS_GEOROUTES_API WaypointOptimizationClusteringAlgorithm GetWaypointOptimizationClusteringAlgorithmForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationClusteringAlgorithm(WaypointOptimizationClusteringAlgorithm value);
} // namespace WaypointOptimizationClusteringAlgorithmMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
