/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/Isoline.h>
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

Isoline::Isoline(JsonView jsonValue)
{
  *this = jsonValue;
}

Isoline& Isoline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("Connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
    m_connectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DistanceThreshold"))
  {
    m_distanceThreshold = jsonValue.GetInt64("DistanceThreshold");
    m_distanceThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Geometries"))
  {
    Aws::Utils::Array<JsonView> geometriesJsonList = jsonValue.GetArray("Geometries");
    for(unsigned geometriesIndex = 0; geometriesIndex < geometriesJsonList.GetLength(); ++geometriesIndex)
    {
      m_geometries.push_back(geometriesJsonList[geometriesIndex].AsObject());
    }
    m_geometriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeThreshold"))
  {
    m_timeThreshold = jsonValue.GetInt64("TimeThreshold");
    m_timeThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue Isoline::Jsonize() const
{
  JsonValue payload;

  if(m_connectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionsJsonList(m_connections.size());
   for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
   {
     connectionsJsonList[connectionsIndex].AsObject(m_connections[connectionsIndex].Jsonize());
   }
   payload.WithArray("Connections", std::move(connectionsJsonList));

  }

  if(m_distanceThresholdHasBeenSet)
  {
   payload.WithInt64("DistanceThreshold", m_distanceThreshold);

  }

  if(m_geometriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> geometriesJsonList(m_geometries.size());
   for(unsigned geometriesIndex = 0; geometriesIndex < geometriesJsonList.GetLength(); ++geometriesIndex)
   {
     geometriesJsonList[geometriesIndex].AsObject(m_geometries[geometriesIndex].Jsonize());
   }
   payload.WithArray("Geometries", std::move(geometriesJsonList));

  }

  if(m_timeThresholdHasBeenSet)
  {
   payload.WithInt64("TimeThreshold", m_timeThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
