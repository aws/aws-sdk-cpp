/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/WeeklySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

WeeklySchedule::WeeklySchedule() : 
    m_daysHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

WeeklySchedule::WeeklySchedule(JsonView jsonValue) : 
    m_daysHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklySchedule& WeeklySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("days"))
  {
    Aws::Utils::Array<JsonView> daysJsonList = jsonValue.GetArray("days");
    for(unsigned daysIndex = 0; daysIndex < daysJsonList.GetLength(); ++daysIndex)
    {
      m_days.push_back(DayMapper::GetDayForName(daysJsonList[daysIndex].AsString()));
    }
    m_daysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetObject("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_daysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> daysJsonList(m_days.size());
   for(unsigned daysIndex = 0; daysIndex < daysJsonList.GetLength(); ++daysIndex)
   {
     daysJsonList[daysIndex].AsString(DayMapper::GetNameForDay(m_days[daysIndex]));
   }
   payload.WithArray("days", std::move(daysJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithObject("startTime", m_startTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
