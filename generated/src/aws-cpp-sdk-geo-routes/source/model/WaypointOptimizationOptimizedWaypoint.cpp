/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationOptimizedWaypoint.h>
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

WaypointOptimizationOptimizedWaypoint::WaypointOptimizationOptimizedWaypoint(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationOptimizedWaypoint& WaypointOptimizationOptimizedWaypoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArrivalTime"))
  {
    m_arrivalTime = jsonValue.GetString("ArrivalTime");
    m_arrivalTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterIndex"))
  {
    m_clusterIndex = jsonValue.GetInteger("ClusterIndex");
    m_clusterIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DepartureTime"))
  {
    m_departureTime = jsonValue.GetString("DepartureTime");
    m_departureTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationOptimizedWaypoint::Jsonize() const
{
  JsonValue payload;

  if(m_arrivalTimeHasBeenSet)
  {
   payload.WithString("ArrivalTime", m_arrivalTime);

  }

  if(m_clusterIndexHasBeenSet)
  {
   payload.WithInteger("ClusterIndex", m_clusterIndex);

  }

  if(m_departureTimeHasBeenSet)
  {
   payload.WithString("DepartureTime", m_departureTime);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
