/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationTimeBreakdown.h>
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

WaypointOptimizationTimeBreakdown::WaypointOptimizationTimeBreakdown(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationTimeBreakdown& WaypointOptimizationTimeBreakdown::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestDuration"))
  {
    m_restDuration = jsonValue.GetInt64("RestDuration");
    m_restDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceDuration"))
  {
    m_serviceDuration = jsonValue.GetInt64("ServiceDuration");
    m_serviceDurationHasBeenSet = true;
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

JsonValue WaypointOptimizationTimeBreakdown::Jsonize() const
{
  JsonValue payload;

  if(m_restDurationHasBeenSet)
  {
   payload.WithInt64("RestDuration", m_restDuration);

  }

  if(m_serviceDurationHasBeenSet)
  {
   payload.WithInt64("ServiceDuration", m_serviceDuration);

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
