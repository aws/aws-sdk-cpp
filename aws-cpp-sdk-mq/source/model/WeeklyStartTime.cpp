/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

WeeklyStartTime::WeeklyStartTime() : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

WeeklyStartTime::WeeklyStartTime(const JsonValue& jsonValue) : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklyStartTime& WeeklyStartTime::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("timeOfDay");

    m_timeOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeZone"))
  {
    m_timeZone = jsonValue.GetString("timeZone");

    m_timeZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklyStartTime::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("timeOfDay", m_timeOfDay);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
