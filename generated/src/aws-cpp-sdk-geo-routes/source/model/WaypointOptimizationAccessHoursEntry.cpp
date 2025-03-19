/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationAccessHoursEntry.h>
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

WaypointOptimizationAccessHoursEntry::WaypointOptimizationAccessHoursEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationAccessHoursEntry& WaypointOptimizationAccessHoursEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("DayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("TimeOfDay");
    m_timeOfDayHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationAccessHoursEntry::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("DayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("TimeOfDay", m_timeOfDay);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
