/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteWaypoint.h>
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

RouteWaypoint::RouteWaypoint(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteWaypoint& RouteWaypoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvoidActionsForDistance"))
  {
    m_avoidActionsForDistance = jsonValue.GetInt64("AvoidActionsForDistance");
    m_avoidActionsForDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvoidUTurns"))
  {
    m_avoidUTurns = jsonValue.GetBool("AvoidUTurns");
    m_avoidUTurnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Heading"))
  {
    m_heading = jsonValue.GetDouble("Heading");
    m_headingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Matching"))
  {
    m_matching = jsonValue.GetObject("Matching");
    m_matchingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PassThrough"))
  {
    m_passThrough = jsonValue.GetBool("PassThrough");
    m_passThroughHasBeenSet = true;
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
  if(jsonValue.ValueExists("SideOfStreet"))
  {
    m_sideOfStreet = jsonValue.GetObject("SideOfStreet");
    m_sideOfStreetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StopDuration"))
  {
    m_stopDuration = jsonValue.GetInt64("StopDuration");
    m_stopDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteWaypoint::Jsonize() const
{
  JsonValue payload;

  if(m_avoidActionsForDistanceHasBeenSet)
  {
   payload.WithInt64("AvoidActionsForDistance", m_avoidActionsForDistance);

  }

  if(m_avoidUTurnsHasBeenSet)
  {
   payload.WithBool("AvoidUTurns", m_avoidUTurns);

  }

  if(m_headingHasBeenSet)
  {
   payload.WithDouble("Heading", m_heading);

  }

  if(m_matchingHasBeenSet)
  {
   payload.WithObject("Matching", m_matching.Jsonize());

  }

  if(m_passThroughHasBeenSet)
  {
   payload.WithBool("PassThrough", m_passThrough);

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

  if(m_sideOfStreetHasBeenSet)
  {
   payload.WithObject("SideOfStreet", m_sideOfStreet.Jsonize());

  }

  if(m_stopDurationHasBeenSet)
  {
   payload.WithInt64("StopDuration", m_stopDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
