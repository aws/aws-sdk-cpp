/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationAvoidanceArea.h>
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

WaypointOptimizationAvoidanceArea::WaypointOptimizationAvoidanceArea(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationAvoidanceArea& WaypointOptimizationAvoidanceArea::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationAvoidanceArea::Jsonize() const
{
  JsonValue payload;

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
