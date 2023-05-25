/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobScheduleFrequency.h>
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

JobScheduleFrequency::JobScheduleFrequency() : 
    m_dailyScheduleHasBeenSet(false),
    m_monthlyScheduleHasBeenSet(false),
    m_weeklyScheduleHasBeenSet(false)
{
}

JobScheduleFrequency::JobScheduleFrequency(JsonView jsonValue) : 
    m_dailyScheduleHasBeenSet(false),
    m_monthlyScheduleHasBeenSet(false),
    m_weeklyScheduleHasBeenSet(false)
{
  *this = jsonValue;
}

JobScheduleFrequency& JobScheduleFrequency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dailySchedule"))
  {
    m_dailySchedule = jsonValue.GetObject("dailySchedule");

    m_dailyScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monthlySchedule"))
  {
    m_monthlySchedule = jsonValue.GetObject("monthlySchedule");

    m_monthlyScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weeklySchedule"))
  {
    m_weeklySchedule = jsonValue.GetObject("weeklySchedule");

    m_weeklyScheduleHasBeenSet = true;
  }

  return *this;
}

JsonValue JobScheduleFrequency::Jsonize() const
{
  JsonValue payload;

  if(m_dailyScheduleHasBeenSet)
  {
   payload.WithObject("dailySchedule", m_dailySchedule.Jsonize());

  }

  if(m_monthlyScheduleHasBeenSet)
  {
   payload.WithObject("monthlySchedule", m_monthlySchedule.Jsonize());

  }

  if(m_weeklyScheduleHasBeenSet)
  {
   payload.WithObject("weeklySchedule", m_weeklySchedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
