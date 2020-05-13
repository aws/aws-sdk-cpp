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
