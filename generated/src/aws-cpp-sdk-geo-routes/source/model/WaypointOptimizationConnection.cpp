/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationConnection.h>
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

WaypointOptimizationConnection::WaypointOptimizationConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationConnection& WaypointOptimizationConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");
    m_fromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestDuration"))
  {
    m_restDuration = jsonValue.GetInt64("RestDuration");
    m_restDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetString("To");
    m_toHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TravelDuration"))
  {
    m_travelDuration = jsonValue.GetInt64("TravelDuration");
    m_travelDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitDuration"))
  {
    m_waitDuration = jsonValue.GetInt64("WaitDuration");
    m_waitDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationConnection::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_restDurationHasBeenSet)
  {
   payload.WithInt64("RestDuration", m_restDuration);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("To", m_to);

  }

  if(m_travelDurationHasBeenSet)
  {
   payload.WithInt64("TravelDuration", m_travelDuration);

  }

  if(m_waitDurationHasBeenSet)
  {
   payload.WithInt64("WaitDuration", m_waitDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
