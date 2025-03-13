/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationClusteringOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

WaypointOptimizationClusteringOptions::WaypointOptimizationClusteringOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationClusteringOptions& WaypointOptimizationClusteringOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = WaypointOptimizationClusteringAlgorithmMapper::GetWaypointOptimizationClusteringAlgorithmForName(jsonValue.GetString("Algorithm"));
    m_algorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DrivingDistanceOptions"))
  {
    m_drivingDistanceOptions = jsonValue.GetObject("DrivingDistanceOptions");
    m_drivingDistanceOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationClusteringOptions::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("Algorithm", WaypointOptimizationClusteringAlgorithmMapper::GetNameForWaypointOptimizationClusteringAlgorithm(m_algorithm));
  }

  if(m_drivingDistanceOptionsHasBeenSet)
  {
   payload.WithObject("DrivingDistanceOptions", m_drivingDistanceOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
