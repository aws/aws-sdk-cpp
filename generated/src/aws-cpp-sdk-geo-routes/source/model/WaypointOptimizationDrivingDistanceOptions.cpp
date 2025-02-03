/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationDrivingDistanceOptions.h>
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

WaypointOptimizationDrivingDistanceOptions::WaypointOptimizationDrivingDistanceOptions() : 
    m_drivingDistance(0),
    m_drivingDistanceHasBeenSet(false)
{
}

WaypointOptimizationDrivingDistanceOptions::WaypointOptimizationDrivingDistanceOptions(JsonView jsonValue)
  : WaypointOptimizationDrivingDistanceOptions()
{
  *this = jsonValue;
}

WaypointOptimizationDrivingDistanceOptions& WaypointOptimizationDrivingDistanceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DrivingDistance"))
  {
    m_drivingDistance = jsonValue.GetInt64("DrivingDistance");

    m_drivingDistanceHasBeenSet = true;
  }

  return *this;
}

JsonValue WaypointOptimizationDrivingDistanceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_drivingDistanceHasBeenSet)
  {
   payload.WithInt64("DrivingDistance", m_drivingDistance);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
