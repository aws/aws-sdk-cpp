/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/MonthlySchedule.h>
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

MonthlySchedule::MonthlySchedule() : 
    m_day(Day::NOT_SET),
    m_dayHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

MonthlySchedule::MonthlySchedule(JsonView jsonValue) : 
    m_day(Day::NOT_SET),
    m_dayHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlySchedule& MonthlySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("day"))
  {
    m_day = DayMapper::GetDayForName(jsonValue.GetString("day"));

    m_dayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetObject("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_dayHasBeenSet)
  {
   payload.WithString("day", DayMapper::GetNameForDay(m_day));
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
