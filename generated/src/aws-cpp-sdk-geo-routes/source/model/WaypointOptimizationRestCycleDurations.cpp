/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationRestCycleDurations.h>
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

WaypointOptimizationRestCycleDurations::WaypointOptimizationRestCycleDurations(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationRestCycleDurations& WaypointOptimizationRestCycleDurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestDuration"))
  {
    m_restDuration = jsonValue.GetInt64("RestDuration");
    m_restDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkDuration"))
  {
    m_workDuration = jsonValue.GetInt64("WorkDuration");
    m_workDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationRestCycleDurations::Jsonize() const
{
  JsonValue payload;

  if(m_restDurationHasBeenSet)
  {
   payload.WithInt64("RestDuration", m_restDuration);

  }

  if(m_workDurationHasBeenSet)
  {
   payload.WithInt64("WorkDuration", m_workDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
