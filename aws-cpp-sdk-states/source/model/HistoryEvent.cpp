﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/states/model/HistoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

HistoryEvent::HistoryEvent() : 
    m_timestampHasBeenSet(false),
    m_type(HistoryEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_previousEventId(0),
    m_previousEventIdHasBeenSet(false),
    m_activityFailedEventDetailsHasBeenSet(false),
    m_activityScheduleFailedEventDetailsHasBeenSet(false),
    m_activityScheduledEventDetailsHasBeenSet(false),
    m_activityStartedEventDetailsHasBeenSet(false),
    m_activitySucceededEventDetailsHasBeenSet(false),
    m_activityTimedOutEventDetailsHasBeenSet(false),
    m_executionFailedEventDetailsHasBeenSet(false),
    m_executionStartedEventDetailsHasBeenSet(false),
    m_executionSucceededEventDetailsHasBeenSet(false),
    m_executionAbortedEventDetailsHasBeenSet(false),
    m_executionTimedOutEventDetailsHasBeenSet(false),
    m_lambdaFunctionFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduledEventDetailsHasBeenSet(false),
    m_lambdaFunctionStartFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionSucceededEventDetailsHasBeenSet(false),
    m_lambdaFunctionTimedOutEventDetailsHasBeenSet(false),
    m_stateEnteredEventDetailsHasBeenSet(false),
    m_stateExitedEventDetailsHasBeenSet(false)
{
}

HistoryEvent::HistoryEvent(const JsonValue& jsonValue) : 
    m_timestampHasBeenSet(false),
    m_type(HistoryEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_previousEventId(0),
    m_previousEventIdHasBeenSet(false),
    m_activityFailedEventDetailsHasBeenSet(false),
    m_activityScheduleFailedEventDetailsHasBeenSet(false),
    m_activityScheduledEventDetailsHasBeenSet(false),
    m_activityStartedEventDetailsHasBeenSet(false),
    m_activitySucceededEventDetailsHasBeenSet(false),
    m_activityTimedOutEventDetailsHasBeenSet(false),
    m_executionFailedEventDetailsHasBeenSet(false),
    m_executionStartedEventDetailsHasBeenSet(false),
    m_executionSucceededEventDetailsHasBeenSet(false),
    m_executionAbortedEventDetailsHasBeenSet(false),
    m_executionTimedOutEventDetailsHasBeenSet(false),
    m_lambdaFunctionFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduledEventDetailsHasBeenSet(false),
    m_lambdaFunctionStartFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionSucceededEventDetailsHasBeenSet(false),
    m_lambdaFunctionTimedOutEventDetailsHasBeenSet(false),
    m_stateEnteredEventDetailsHasBeenSet(false),
    m_stateExitedEventDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

HistoryEvent& HistoryEvent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = HistoryEventTypeMapper::GetHistoryEventTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetInt64("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previousEventId"))
  {
    m_previousEventId = jsonValue.GetInt64("previousEventId");

    m_previousEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityFailedEventDetails"))
  {
    m_activityFailedEventDetails = jsonValue.GetObject("activityFailedEventDetails");

    m_activityFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityScheduleFailedEventDetails"))
  {
    m_activityScheduleFailedEventDetails = jsonValue.GetObject("activityScheduleFailedEventDetails");

    m_activityScheduleFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityScheduledEventDetails"))
  {
    m_activityScheduledEventDetails = jsonValue.GetObject("activityScheduledEventDetails");

    m_activityScheduledEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityStartedEventDetails"))
  {
    m_activityStartedEventDetails = jsonValue.GetObject("activityStartedEventDetails");

    m_activityStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activitySucceededEventDetails"))
  {
    m_activitySucceededEventDetails = jsonValue.GetObject("activitySucceededEventDetails");

    m_activitySucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTimedOutEventDetails"))
  {
    m_activityTimedOutEventDetails = jsonValue.GetObject("activityTimedOutEventDetails");

    m_activityTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionFailedEventDetails"))
  {
    m_executionFailedEventDetails = jsonValue.GetObject("executionFailedEventDetails");

    m_executionFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStartedEventDetails"))
  {
    m_executionStartedEventDetails = jsonValue.GetObject("executionStartedEventDetails");

    m_executionStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionSucceededEventDetails"))
  {
    m_executionSucceededEventDetails = jsonValue.GetObject("executionSucceededEventDetails");

    m_executionSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionAbortedEventDetails"))
  {
    m_executionAbortedEventDetails = jsonValue.GetObject("executionAbortedEventDetails");

    m_executionAbortedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionTimedOutEventDetails"))
  {
    m_executionTimedOutEventDetails = jsonValue.GetObject("executionTimedOutEventDetails");

    m_executionTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionFailedEventDetails"))
  {
    m_lambdaFunctionFailedEventDetails = jsonValue.GetObject("lambdaFunctionFailedEventDetails");

    m_lambdaFunctionFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionScheduleFailedEventDetails"))
  {
    m_lambdaFunctionScheduleFailedEventDetails = jsonValue.GetObject("lambdaFunctionScheduleFailedEventDetails");

    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionScheduledEventDetails"))
  {
    m_lambdaFunctionScheduledEventDetails = jsonValue.GetObject("lambdaFunctionScheduledEventDetails");

    m_lambdaFunctionScheduledEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionStartFailedEventDetails"))
  {
    m_lambdaFunctionStartFailedEventDetails = jsonValue.GetObject("lambdaFunctionStartFailedEventDetails");

    m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionSucceededEventDetails"))
  {
    m_lambdaFunctionSucceededEventDetails = jsonValue.GetObject("lambdaFunctionSucceededEventDetails");

    m_lambdaFunctionSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionTimedOutEventDetails"))
  {
    m_lambdaFunctionTimedOutEventDetails = jsonValue.GetObject("lambdaFunctionTimedOutEventDetails");

    m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateEnteredEventDetails"))
  {
    m_stateEnteredEventDetails = jsonValue.GetObject("stateEnteredEventDetails");

    m_stateEnteredEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateExitedEventDetails"))
  {
    m_stateExitedEventDetails = jsonValue.GetObject("stateExitedEventDetails");

    m_stateExitedEventDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", HistoryEventTypeMapper::GetNameForHistoryEventType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithInt64("id", m_id);

  }

  if(m_previousEventIdHasBeenSet)
  {
   payload.WithInt64("previousEventId", m_previousEventId);

  }

  if(m_activityFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityFailedEventDetails", m_activityFailedEventDetails.Jsonize());

  }

  if(m_activityScheduleFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityScheduleFailedEventDetails", m_activityScheduleFailedEventDetails.Jsonize());

  }

  if(m_activityScheduledEventDetailsHasBeenSet)
  {
   payload.WithObject("activityScheduledEventDetails", m_activityScheduledEventDetails.Jsonize());

  }

  if(m_activityStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityStartedEventDetails", m_activityStartedEventDetails.Jsonize());

  }

  if(m_activitySucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("activitySucceededEventDetails", m_activitySucceededEventDetails.Jsonize());

  }

  if(m_activityTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("activityTimedOutEventDetails", m_activityTimedOutEventDetails.Jsonize());

  }

  if(m_executionFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionFailedEventDetails", m_executionFailedEventDetails.Jsonize());

  }

  if(m_executionStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionStartedEventDetails", m_executionStartedEventDetails.Jsonize());

  }

  if(m_executionSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("executionSucceededEventDetails", m_executionSucceededEventDetails.Jsonize());

  }

  if(m_executionAbortedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionAbortedEventDetails", m_executionAbortedEventDetails.Jsonize());

  }

  if(m_executionTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("executionTimedOutEventDetails", m_executionTimedOutEventDetails.Jsonize());

  }

  if(m_lambdaFunctionFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionFailedEventDetails", m_lambdaFunctionFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionScheduleFailedEventDetails", m_lambdaFunctionScheduleFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionScheduledEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionScheduledEventDetails", m_lambdaFunctionScheduledEventDetails.Jsonize());

  }

  if(m_lambdaFunctionStartFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionStartFailedEventDetails", m_lambdaFunctionStartFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionSucceededEventDetails", m_lambdaFunctionSucceededEventDetails.Jsonize());

  }

  if(m_lambdaFunctionTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionTimedOutEventDetails", m_lambdaFunctionTimedOutEventDetails.Jsonize());

  }

  if(m_stateEnteredEventDetailsHasBeenSet)
  {
   payload.WithObject("stateEnteredEventDetails", m_stateEnteredEventDetails.Jsonize());

  }

  if(m_stateExitedEventDetailsHasBeenSet)
  {
   payload.WithObject("stateExitedEventDetails", m_stateExitedEventDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws