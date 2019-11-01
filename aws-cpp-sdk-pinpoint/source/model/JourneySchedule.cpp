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

#include <aws/pinpoint/model/JourneySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneySchedule::JourneySchedule() : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

JourneySchedule::JourneySchedule(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

JourneySchedule& JourneySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
