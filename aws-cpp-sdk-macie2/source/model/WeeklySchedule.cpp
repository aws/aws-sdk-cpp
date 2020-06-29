/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/WeeklySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

WeeklySchedule::WeeklySchedule() : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false)
{
}

WeeklySchedule::WeeklySchedule(JsonView jsonValue) : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklySchedule& WeeklySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
