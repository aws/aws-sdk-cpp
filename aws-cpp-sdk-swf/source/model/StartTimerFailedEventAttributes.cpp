/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/StartTimerFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTimerFailedEventAttributes::StartTimerFailedEventAttributes() : 
    m_timerIdHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

StartTimerFailedEventAttributes::StartTimerFailedEventAttributes(const JsonValue& jsonValue) : 
    m_timerIdHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartTimerFailedEventAttributes& StartTimerFailedEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timerId"))
  {
    m_timerId = jsonValue.GetString("timerId");

    m_timerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = StartTimerFailedCauseMapper::GetStartTimerFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTimerFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timerIdHasBeenSet)
  {
   payload.WithString("timerId", m_timerId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", StartTimerFailedCauseMapper::GetNameForStartTimerFailedCause(m_cause));
  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return std::move(payload);
}