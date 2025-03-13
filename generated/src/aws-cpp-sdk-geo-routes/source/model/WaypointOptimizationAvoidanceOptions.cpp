/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationAvoidanceOptions.h>
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

WaypointOptimizationAvoidanceOptions::WaypointOptimizationAvoidanceOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationAvoidanceOptions& WaypointOptimizationAvoidanceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Areas"))
  {
    Aws::Utils::Array<JsonView> areasJsonList = jsonValue.GetArray("Areas");
    for(unsigned areasIndex = 0; areasIndex < areasJsonList.GetLength(); ++areasIndex)
    {
      m_areas.push_back(areasJsonList[areasIndex].AsObject());
    }
    m_areasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CarShuttleTrains"))
  {
    m_carShuttleTrains = jsonValue.GetBool("CarShuttleTrains");
    m_carShuttleTrainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ControlledAccessHighways"))
  {
    m_controlledAccessHighways = jsonValue.GetBool("ControlledAccessHighways");
    m_controlledAccessHighwaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirtRoads"))
  {
    m_dirtRoads = jsonValue.GetBool("DirtRoads");
    m_dirtRoadsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ferries"))
  {
    m_ferries = jsonValue.GetBool("Ferries");
    m_ferriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TollRoads"))
  {
    m_tollRoads = jsonValue.GetBool("TollRoads");
    m_tollRoadsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tunnels"))
  {
    m_tunnels = jsonValue.GetBool("Tunnels");
    m_tunnelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UTurns"))
  {
    m_uTurns = jsonValue.GetBool("UTurns");
    m_uTurnsHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationAvoidanceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_areasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> areasJsonList(m_areas.size());
   for(unsigned areasIndex = 0; areasIndex < areasJsonList.GetLength(); ++areasIndex)
   {
     areasJsonList[areasIndex].AsObject(m_areas[areasIndex].Jsonize());
   }
   payload.WithArray("Areas", std::move(areasJsonList));

  }

  if(m_carShuttleTrainsHasBeenSet)
  {
   payload.WithBool("CarShuttleTrains", m_carShuttleTrains);

  }

  if(m_controlledAccessHighwaysHasBeenSet)
  {
   payload.WithBool("ControlledAccessHighways", m_controlledAccessHighways);

  }

  if(m_dirtRoadsHasBeenSet)
  {
   payload.WithBool("DirtRoads", m_dirtRoads);

  }

  if(m_ferriesHasBeenSet)
  {
   payload.WithBool("Ferries", m_ferries);

  }

  if(m_tollRoadsHasBeenSet)
  {
   payload.WithBool("TollRoads", m_tollRoads);

  }

  if(m_tunnelsHasBeenSet)
  {
   payload.WithBool("Tunnels", m_tunnels);

  }

  if(m_uTurnsHasBeenSet)
  {
   payload.WithBool("UTurns", m_uTurns);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
