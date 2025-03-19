/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteDestinationOptions.h>
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

RouteDestinationOptions::RouteDestinationOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteDestinationOptions& RouteDestinationOptions::operator =(JsonView jsonValue)
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

JsonValue RouteDestinationOptions::Jsonize() const
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
