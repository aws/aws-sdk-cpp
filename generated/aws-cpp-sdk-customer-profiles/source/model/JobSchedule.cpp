/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/JobSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

JobSchedule::JobSchedule() : 
    m_dayOfTheWeek(JobScheduleDayOfTheWeek::NOT_SET),
    m_dayOfTheWeekHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

JobSchedule::JobSchedule(JsonView jsonValue) : 
    m_dayOfTheWeek(JobScheduleDayOfTheWeek::NOT_SET),
    m_dayOfTheWeekHasBeenSet(false),
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

JobSchedule& JobSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfTheWeek"))
  {
    m_dayOfTheWeek = JobScheduleDayOfTheWeekMapper::GetJobScheduleDayOfTheWeekForName(jsonValue.GetString("DayOfTheWeek"));

    m_dayOfTheWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfTheWeekHasBeenSet)
  {
   payload.WithString("DayOfTheWeek", JobScheduleDayOfTheWeekMapper::GetNameForJobScheduleDayOfTheWeek(m_dayOfTheWeek));
  }

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
