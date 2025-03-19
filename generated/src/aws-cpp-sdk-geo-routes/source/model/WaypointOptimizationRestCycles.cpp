/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationRestCycles.h>
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

WaypointOptimizationRestCycles::WaypointOptimizationRestCycles(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationRestCycles& WaypointOptimizationRestCycles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LongCycle"))
  {
    m_longCycle = jsonValue.GetObject("LongCycle");
    m_longCycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShortCycle"))
  {
    m_shortCycle = jsonValue.GetObject("ShortCycle");
    m_shortCycleHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationRestCycles::Jsonize() const
{
  JsonValue payload;

  if(m_longCycleHasBeenSet)
  {
   payload.WithObject("LongCycle", m_longCycle.Jsonize());

  }

  if(m_shortCycleHasBeenSet)
  {
   payload.WithObject("ShortCycle", m_shortCycle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
