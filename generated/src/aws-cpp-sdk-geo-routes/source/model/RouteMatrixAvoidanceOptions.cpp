/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixAvoidanceOptions.h>
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

RouteMatrixAvoidanceOptions::RouteMatrixAvoidanceOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixAvoidanceOptions& RouteMatrixAvoidanceOptions::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("TollTransponders"))
  {
    m_tollTransponders = jsonValue.GetBool("TollTransponders");
    m_tollTranspondersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckRoadTypes"))
  {
    Aws::Utils::Array<JsonView> truckRoadTypesJsonList = jsonValue.GetArray("TruckRoadTypes");
    for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
    {
      m_truckRoadTypes.push_back(truckRoadTypesJsonList[truckRoadTypesIndex].AsString());
    }
    m_truckRoadTypesHasBeenSet = true;
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
  if(jsonValue.ValueExists("ZoneCategories"))
  {
    Aws::Utils::Array<JsonView> zoneCategoriesJsonList = jsonValue.GetArray("ZoneCategories");
    for(unsigned zoneCategoriesIndex = 0; zoneCategoriesIndex < zoneCategoriesJsonList.GetLength(); ++zoneCategoriesIndex)
    {
      m_zoneCategories.push_back(zoneCategoriesJsonList[zoneCategoriesIndex].AsObject());
    }
    m_zoneCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixAvoidanceOptions::Jsonize() const
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

  if(m_tollTranspondersHasBeenSet)
  {
   payload.WithBool("TollTransponders", m_tollTransponders);

  }

  if(m_truckRoadTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truckRoadTypesJsonList(m_truckRoadTypes.size());
   for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
   {
     truckRoadTypesJsonList[truckRoadTypesIndex].AsString(m_truckRoadTypes[truckRoadTypesIndex]);
   }
   payload.WithArray("TruckRoadTypes", std::move(truckRoadTypesJsonList));

  }

  if(m_tunnelsHasBeenSet)
  {
   payload.WithBool("Tunnels", m_tunnels);

  }

  if(m_uTurnsHasBeenSet)
  {
   payload.WithBool("UTurns", m_uTurns);

  }

  if(m_zoneCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> zoneCategoriesJsonList(m_zoneCategories.size());
   for(unsigned zoneCategoriesIndex = 0; zoneCategoriesIndex < zoneCategoriesJsonList.GetLength(); ++zoneCategoriesIndex)
   {
     zoneCategoriesJsonList[zoneCategoriesIndex].AsObject(m_zoneCategories[zoneCategoriesIndex].Jsonize());
   }
   payload.WithArray("ZoneCategories", std::move(zoneCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
