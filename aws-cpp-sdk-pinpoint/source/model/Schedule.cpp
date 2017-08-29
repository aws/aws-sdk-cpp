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

#include <aws/pinpoint/model/Schedule.h>
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

Schedule::Schedule() : 
    m_endTimeHasBeenSet(false),
    m_frequency(Frequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_isLocalTime(false),
    m_isLocalTimeHasBeenSet(false),
    m_quietTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

Schedule::Schedule(const JsonValue& jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_frequency(Frequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_isLocalTime(false),
    m_isLocalTimeHasBeenSet(false),
    m_quietTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = FrequencyMapper::GetFrequencyForName(jsonValue.GetString("Frequency"));

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsLocalTime"))
  {
    m_isLocalTime = jsonValue.GetBool("IsLocalTime");

    m_isLocalTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");

    m_quietTimeHasBeenSet = true;
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

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("Frequency", FrequencyMapper::GetNameForFrequency(m_frequency));
  }

  if(m_isLocalTimeHasBeenSet)
  {
   payload.WithBool("IsLocalTime", m_isLocalTime);

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

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
