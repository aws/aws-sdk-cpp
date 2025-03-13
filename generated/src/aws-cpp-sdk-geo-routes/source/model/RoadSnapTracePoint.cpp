/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapTracePoint.h>
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

RoadSnapTracePoint::RoadSnapTracePoint(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapTracePoint& RoadSnapTracePoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Heading"))
  {
    m_heading = jsonValue.GetDouble("Heading");
    m_headingHasBeenSet = true;
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
  if(jsonValue.ValueExists("Speed"))
  {
    m_speed = jsonValue.GetDouble("Speed");
    m_speedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapTracePoint::Jsonize() const
{
  JsonValue payload;

  if(m_headingHasBeenSet)
  {
   payload.WithDouble("Heading", m_heading);

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

  if(m_speedHasBeenSet)
  {
   payload.WithDouble("Speed", m_speed);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
