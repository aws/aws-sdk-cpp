/*
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
#include <aws/swf/model/HistoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

HistoryEvent::HistoryEvent() : 
    m_eventTimestampHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_eventId(0),
    m_eventIdHasBeenSet(false),
    m_workflowExecutionStartedEventAttributesHasBeenSet(false),
    m_workflowExecutionCompletedEventAttributesHasBeenSet(false),
    m_completeWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionFailedEventAttributesHasBeenSet(false),
    m_failWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionTimedOutEventAttributesHasBeenSet(false),
    m_workflowExecutionCanceledEventAttributesHasBeenSet(false),
    m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet(false),
    m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionTerminatedEventAttributesHasBeenSet(false),
    m_workflowExecutionCancelRequestedEventAttributesHasBeenSet(false),
    m_decisionTaskScheduledEventAttributesHasBeenSet(false),
    m_decisionTaskStartedEventAttributesHasBeenSet(false),
    m_decisionTaskCompletedEventAttributesHasBeenSet(false),
    m_decisionTaskTimedOutEventAttributesHasBeenSet(false),
    m_activityTaskScheduledEventAttributesHasBeenSet(false),
    m_activityTaskStartedEventAttributesHasBeenSet(false),
    m_activityTaskCompletedEventAttributesHasBeenSet(false),
    m_activityTaskFailedEventAttributesHasBeenSet(false),
    m_activityTaskTimedOutEventAttributesHasBeenSet(false),
    m_activityTaskCanceledEventAttributesHasBeenSet(false),
    m_activityTaskCancelRequestedEventAttributesHasBeenSet(false),
    m_workflowExecutionSignaledEventAttributesHasBeenSet(false),
    m_markerRecordedEventAttributesHasBeenSet(false),
    m_recordMarkerFailedEventAttributesHasBeenSet(false),
    m_timerStartedEventAttributesHasBeenSet(false),
    m_timerFiredEventAttributesHasBeenSet(false),
    m_timerCanceledEventAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionStartedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionCompletedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionCanceledEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_scheduleActivityTaskFailedEventAttributesHasBeenSet(false),
    m_requestCancelActivityTaskFailedEventAttributesHasBeenSet(false),
    m_startTimerFailedEventAttributesHasBeenSet(false),
    m_cancelTimerFailedEventAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_lambdaFunctionScheduledEventAttributesHasBeenSet(false),
    m_lambdaFunctionStartedEventAttributesHasBeenSet(false),
    m_lambdaFunctionCompletedEventAttributesHasBeenSet(false),
    m_lambdaFunctionFailedEventAttributesHasBeenSet(false),
    m_lambdaFunctionTimedOutEventAttributesHasBeenSet(false),
    m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet(false),
    m_startLambdaFunctionFailedEventAttributesHasBeenSet(false)
{
}

HistoryEvent::HistoryEvent(const JsonValue& jsonValue) : 
    m_eventTimestampHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_eventId(0),
    m_eventIdHasBeenSet(false),
    m_workflowExecutionStartedEventAttributesHasBeenSet(false),
    m_workflowExecutionCompletedEventAttributesHasBeenSet(false),
    m_completeWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionFailedEventAttributesHasBeenSet(false),
    m_failWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionTimedOutEventAttributesHasBeenSet(false),
    m_workflowExecutionCanceledEventAttributesHasBeenSet(false),
    m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet(false),
    m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_workflowExecutionTerminatedEventAttributesHasBeenSet(false),
    m_workflowExecutionCancelRequestedEventAttributesHasBeenSet(false),
    m_decisionTaskScheduledEventAttributesHasBeenSet(false),
    m_decisionTaskStartedEventAttributesHasBeenSet(false),
    m_decisionTaskCompletedEventAttributesHasBeenSet(false),
    m_decisionTaskTimedOutEventAttributesHasBeenSet(false),
    m_activityTaskScheduledEventAttributesHasBeenSet(false),
    m_activityTaskStartedEventAttributesHasBeenSet(false),
    m_activityTaskCompletedEventAttributesHasBeenSet(false),
    m_activityTaskFailedEventAttributesHasBeenSet(false),
    m_activityTaskTimedOutEventAttributesHasBeenSet(false),
    m_activityTaskCanceledEventAttributesHasBeenSet(false),
    m_activityTaskCancelRequestedEventAttributesHasBeenSet(false),
    m_workflowExecutionSignaledEventAttributesHasBeenSet(false),
    m_markerRecordedEventAttributesHasBeenSet(false),
    m_recordMarkerFailedEventAttributesHasBeenSet(false),
    m_timerStartedEventAttributesHasBeenSet(false),
    m_timerFiredEventAttributesHasBeenSet(false),
    m_timerCanceledEventAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionStartedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionCompletedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionCanceledEventAttributesHasBeenSet(false),
    m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_scheduleActivityTaskFailedEventAttributesHasBeenSet(false),
    m_requestCancelActivityTaskFailedEventAttributesHasBeenSet(false),
    m_startTimerFailedEventAttributesHasBeenSet(false),
    m_cancelTimerFailedEventAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet(false),
    m_lambdaFunctionScheduledEventAttributesHasBeenSet(false),
    m_lambdaFunctionStartedEventAttributesHasBeenSet(false),
    m_lambdaFunctionCompletedEventAttributesHasBeenSet(false),
    m_lambdaFunctionFailedEventAttributesHasBeenSet(false),
    m_lambdaFunctionTimedOutEventAttributesHasBeenSet(false),
    m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet(false),
    m_startLambdaFunctionFailedEventAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

HistoryEvent& HistoryEvent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetDouble("eventTimestamp");

    m_eventTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetInt64("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionStartedEventAttributes"))
  {
    m_workflowExecutionStartedEventAttributes = jsonValue.GetObject("workflowExecutionStartedEventAttributes");

    m_workflowExecutionStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionCompletedEventAttributes"))
  {
    m_workflowExecutionCompletedEventAttributes = jsonValue.GetObject("workflowExecutionCompletedEventAttributes");

    m_workflowExecutionCompletedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completeWorkflowExecutionFailedEventAttributes"))
  {
    m_completeWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("completeWorkflowExecutionFailedEventAttributes");

    m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionFailedEventAttributes"))
  {
    m_workflowExecutionFailedEventAttributes = jsonValue.GetObject("workflowExecutionFailedEventAttributes");

    m_workflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failWorkflowExecutionFailedEventAttributes"))
  {
    m_failWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("failWorkflowExecutionFailedEventAttributes");

    m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionTimedOutEventAttributes"))
  {
    m_workflowExecutionTimedOutEventAttributes = jsonValue.GetObject("workflowExecutionTimedOutEventAttributes");

    m_workflowExecutionTimedOutEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionCanceledEventAttributes"))
  {
    m_workflowExecutionCanceledEventAttributes = jsonValue.GetObject("workflowExecutionCanceledEventAttributes");

    m_workflowExecutionCanceledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelWorkflowExecutionFailedEventAttributes"))
  {
    m_cancelWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("cancelWorkflowExecutionFailedEventAttributes");

    m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionContinuedAsNewEventAttributes"))
  {
    m_workflowExecutionContinuedAsNewEventAttributes = jsonValue.GetObject("workflowExecutionContinuedAsNewEventAttributes");

    m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continueAsNewWorkflowExecutionFailedEventAttributes"))
  {
    m_continueAsNewWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("continueAsNewWorkflowExecutionFailedEventAttributes");

    m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionTerminatedEventAttributes"))
  {
    m_workflowExecutionTerminatedEventAttributes = jsonValue.GetObject("workflowExecutionTerminatedEventAttributes");

    m_workflowExecutionTerminatedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionCancelRequestedEventAttributes"))
  {
    m_workflowExecutionCancelRequestedEventAttributes = jsonValue.GetObject("workflowExecutionCancelRequestedEventAttributes");

    m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskScheduledEventAttributes"))
  {
    m_decisionTaskScheduledEventAttributes = jsonValue.GetObject("decisionTaskScheduledEventAttributes");

    m_decisionTaskScheduledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskStartedEventAttributes"))
  {
    m_decisionTaskStartedEventAttributes = jsonValue.GetObject("decisionTaskStartedEventAttributes");

    m_decisionTaskStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventAttributes"))
  {
    m_decisionTaskCompletedEventAttributes = jsonValue.GetObject("decisionTaskCompletedEventAttributes");

    m_decisionTaskCompletedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskTimedOutEventAttributes"))
  {
    m_decisionTaskTimedOutEventAttributes = jsonValue.GetObject("decisionTaskTimedOutEventAttributes");

    m_decisionTaskTimedOutEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskScheduledEventAttributes"))
  {
    m_activityTaskScheduledEventAttributes = jsonValue.GetObject("activityTaskScheduledEventAttributes");

    m_activityTaskScheduledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskStartedEventAttributes"))
  {
    m_activityTaskStartedEventAttributes = jsonValue.GetObject("activityTaskStartedEventAttributes");

    m_activityTaskStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskCompletedEventAttributes"))
  {
    m_activityTaskCompletedEventAttributes = jsonValue.GetObject("activityTaskCompletedEventAttributes");

    m_activityTaskCompletedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskFailedEventAttributes"))
  {
    m_activityTaskFailedEventAttributes = jsonValue.GetObject("activityTaskFailedEventAttributes");

    m_activityTaskFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskTimedOutEventAttributes"))
  {
    m_activityTaskTimedOutEventAttributes = jsonValue.GetObject("activityTaskTimedOutEventAttributes");

    m_activityTaskTimedOutEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskCanceledEventAttributes"))
  {
    m_activityTaskCanceledEventAttributes = jsonValue.GetObject("activityTaskCanceledEventAttributes");

    m_activityTaskCanceledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTaskCancelRequestedEventAttributes"))
  {
    m_activityTaskCancelRequestedEventAttributes = jsonValue.GetObject("activityTaskCancelRequestedEventAttributes");

    m_activityTaskCancelRequestedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionSignaledEventAttributes"))
  {
    m_workflowExecutionSignaledEventAttributes = jsonValue.GetObject("workflowExecutionSignaledEventAttributes");

    m_workflowExecutionSignaledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("markerRecordedEventAttributes"))
  {
    m_markerRecordedEventAttributes = jsonValue.GetObject("markerRecordedEventAttributes");

    m_markerRecordedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordMarkerFailedEventAttributes"))
  {
    m_recordMarkerFailedEventAttributes = jsonValue.GetObject("recordMarkerFailedEventAttributes");

    m_recordMarkerFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timerStartedEventAttributes"))
  {
    m_timerStartedEventAttributes = jsonValue.GetObject("timerStartedEventAttributes");

    m_timerStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timerFiredEventAttributes"))
  {
    m_timerFiredEventAttributes = jsonValue.GetObject("timerFiredEventAttributes");

    m_timerFiredEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timerCanceledEventAttributes"))
  {
    m_timerCanceledEventAttributes = jsonValue.GetObject("timerCanceledEventAttributes");

    m_timerCanceledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startChildWorkflowExecutionInitiatedEventAttributes"))
  {
    m_startChildWorkflowExecutionInitiatedEventAttributes = jsonValue.GetObject("startChildWorkflowExecutionInitiatedEventAttributes");

    m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionStartedEventAttributes"))
  {
    m_childWorkflowExecutionStartedEventAttributes = jsonValue.GetObject("childWorkflowExecutionStartedEventAttributes");

    m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionCompletedEventAttributes"))
  {
    m_childWorkflowExecutionCompletedEventAttributes = jsonValue.GetObject("childWorkflowExecutionCompletedEventAttributes");

    m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionFailedEventAttributes"))
  {
    m_childWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("childWorkflowExecutionFailedEventAttributes");

    m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionTimedOutEventAttributes"))
  {
    m_childWorkflowExecutionTimedOutEventAttributes = jsonValue.GetObject("childWorkflowExecutionTimedOutEventAttributes");

    m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionCanceledEventAttributes"))
  {
    m_childWorkflowExecutionCanceledEventAttributes = jsonValue.GetObject("childWorkflowExecutionCanceledEventAttributes");

    m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childWorkflowExecutionTerminatedEventAttributes"))
  {
    m_childWorkflowExecutionTerminatedEventAttributes = jsonValue.GetObject("childWorkflowExecutionTerminatedEventAttributes");

    m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalExternalWorkflowExecutionInitiatedEventAttributes"))
  {
    m_signalExternalWorkflowExecutionInitiatedEventAttributes = jsonValue.GetObject("signalExternalWorkflowExecutionInitiatedEventAttributes");

    m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalWorkflowExecutionSignaledEventAttributes"))
  {
    m_externalWorkflowExecutionSignaledEventAttributes = jsonValue.GetObject("externalWorkflowExecutionSignaledEventAttributes");

    m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalExternalWorkflowExecutionFailedEventAttributes"))
  {
    m_signalExternalWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("signalExternalWorkflowExecutionFailedEventAttributes");

    m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalWorkflowExecutionCancelRequestedEventAttributes"))
  {
    m_externalWorkflowExecutionCancelRequestedEventAttributes = jsonValue.GetObject("externalWorkflowExecutionCancelRequestedEventAttributes");

    m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestCancelExternalWorkflowExecutionInitiatedEventAttributes"))
  {
    m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = jsonValue.GetObject("requestCancelExternalWorkflowExecutionInitiatedEventAttributes");

    m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestCancelExternalWorkflowExecutionFailedEventAttributes"))
  {
    m_requestCancelExternalWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("requestCancelExternalWorkflowExecutionFailedEventAttributes");

    m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActivityTaskFailedEventAttributes"))
  {
    m_scheduleActivityTaskFailedEventAttributes = jsonValue.GetObject("scheduleActivityTaskFailedEventAttributes");

    m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestCancelActivityTaskFailedEventAttributes"))
  {
    m_requestCancelActivityTaskFailedEventAttributes = jsonValue.GetObject("requestCancelActivityTaskFailedEventAttributes");

    m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimerFailedEventAttributes"))
  {
    m_startTimerFailedEventAttributes = jsonValue.GetObject("startTimerFailedEventAttributes");

    m_startTimerFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelTimerFailedEventAttributes"))
  {
    m_cancelTimerFailedEventAttributes = jsonValue.GetObject("cancelTimerFailedEventAttributes");

    m_cancelTimerFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startChildWorkflowExecutionFailedEventAttributes"))
  {
    m_startChildWorkflowExecutionFailedEventAttributes = jsonValue.GetObject("startChildWorkflowExecutionFailedEventAttributes");

    m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionScheduledEventAttributes"))
  {
    m_lambdaFunctionScheduledEventAttributes = jsonValue.GetObject("lambdaFunctionScheduledEventAttributes");

    m_lambdaFunctionScheduledEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionStartedEventAttributes"))
  {
    m_lambdaFunctionStartedEventAttributes = jsonValue.GetObject("lambdaFunctionStartedEventAttributes");

    m_lambdaFunctionStartedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionCompletedEventAttributes"))
  {
    m_lambdaFunctionCompletedEventAttributes = jsonValue.GetObject("lambdaFunctionCompletedEventAttributes");

    m_lambdaFunctionCompletedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionFailedEventAttributes"))
  {
    m_lambdaFunctionFailedEventAttributes = jsonValue.GetObject("lambdaFunctionFailedEventAttributes");

    m_lambdaFunctionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionTimedOutEventAttributes"))
  {
    m_lambdaFunctionTimedOutEventAttributes = jsonValue.GetObject("lambdaFunctionTimedOutEventAttributes");

    m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleLambdaFunctionFailedEventAttributes"))
  {
    m_scheduleLambdaFunctionFailedEventAttributes = jsonValue.GetObject("scheduleLambdaFunctionFailedEventAttributes");

    m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startLambdaFunctionFailedEventAttributes"))
  {
    m_startLambdaFunctionFailedEventAttributes = jsonValue.GetObject("startLambdaFunctionFailedEventAttributes");

    m_startLambdaFunctionFailedEventAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithDouble("eventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithInt64("eventId", m_eventId);

  }

  if(m_workflowExecutionStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionStartedEventAttributes", m_workflowExecutionStartedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionCompletedEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionCompletedEventAttributes", m_workflowExecutionCompletedEventAttributes.Jsonize());

  }

  if(m_completeWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("completeWorkflowExecutionFailedEventAttributes", m_completeWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionFailedEventAttributes", m_workflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_failWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("failWorkflowExecutionFailedEventAttributes", m_failWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionTimedOutEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionTimedOutEventAttributes", m_workflowExecutionTimedOutEventAttributes.Jsonize());

  }

  if(m_workflowExecutionCanceledEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionCanceledEventAttributes", m_workflowExecutionCanceledEventAttributes.Jsonize());

  }

  if(m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("cancelWorkflowExecutionFailedEventAttributes", m_cancelWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionContinuedAsNewEventAttributes", m_workflowExecutionContinuedAsNewEventAttributes.Jsonize());

  }

  if(m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("continueAsNewWorkflowExecutionFailedEventAttributes", m_continueAsNewWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionTerminatedEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionTerminatedEventAttributes", m_workflowExecutionTerminatedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionCancelRequestedEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionCancelRequestedEventAttributes", m_workflowExecutionCancelRequestedEventAttributes.Jsonize());

  }

  if(m_decisionTaskScheduledEventAttributesHasBeenSet)
  {
   payload.WithObject("decisionTaskScheduledEventAttributes", m_decisionTaskScheduledEventAttributes.Jsonize());

  }

  if(m_decisionTaskStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("decisionTaskStartedEventAttributes", m_decisionTaskStartedEventAttributes.Jsonize());

  }

  if(m_decisionTaskCompletedEventAttributesHasBeenSet)
  {
   payload.WithObject("decisionTaskCompletedEventAttributes", m_decisionTaskCompletedEventAttributes.Jsonize());

  }

  if(m_decisionTaskTimedOutEventAttributesHasBeenSet)
  {
   payload.WithObject("decisionTaskTimedOutEventAttributes", m_decisionTaskTimedOutEventAttributes.Jsonize());

  }

  if(m_activityTaskScheduledEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskScheduledEventAttributes", m_activityTaskScheduledEventAttributes.Jsonize());

  }

  if(m_activityTaskStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskStartedEventAttributes", m_activityTaskStartedEventAttributes.Jsonize());

  }

  if(m_activityTaskCompletedEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskCompletedEventAttributes", m_activityTaskCompletedEventAttributes.Jsonize());

  }

  if(m_activityTaskFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskFailedEventAttributes", m_activityTaskFailedEventAttributes.Jsonize());

  }

  if(m_activityTaskTimedOutEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskTimedOutEventAttributes", m_activityTaskTimedOutEventAttributes.Jsonize());

  }

  if(m_activityTaskCanceledEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskCanceledEventAttributes", m_activityTaskCanceledEventAttributes.Jsonize());

  }

  if(m_activityTaskCancelRequestedEventAttributesHasBeenSet)
  {
   payload.WithObject("activityTaskCancelRequestedEventAttributes", m_activityTaskCancelRequestedEventAttributes.Jsonize());

  }

  if(m_workflowExecutionSignaledEventAttributesHasBeenSet)
  {
   payload.WithObject("workflowExecutionSignaledEventAttributes", m_workflowExecutionSignaledEventAttributes.Jsonize());

  }

  if(m_markerRecordedEventAttributesHasBeenSet)
  {
   payload.WithObject("markerRecordedEventAttributes", m_markerRecordedEventAttributes.Jsonize());

  }

  if(m_recordMarkerFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("recordMarkerFailedEventAttributes", m_recordMarkerFailedEventAttributes.Jsonize());

  }

  if(m_timerStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("timerStartedEventAttributes", m_timerStartedEventAttributes.Jsonize());

  }

  if(m_timerFiredEventAttributesHasBeenSet)
  {
   payload.WithObject("timerFiredEventAttributes", m_timerFiredEventAttributes.Jsonize());

  }

  if(m_timerCanceledEventAttributesHasBeenSet)
  {
   payload.WithObject("timerCanceledEventAttributes", m_timerCanceledEventAttributes.Jsonize());

  }

  if(m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet)
  {
   payload.WithObject("startChildWorkflowExecutionInitiatedEventAttributes", m_startChildWorkflowExecutionInitiatedEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionStartedEventAttributes", m_childWorkflowExecutionStartedEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionCompletedEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionCompletedEventAttributes", m_childWorkflowExecutionCompletedEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionFailedEventAttributes", m_childWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionTimedOutEventAttributes", m_childWorkflowExecutionTimedOutEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionCanceledEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionCanceledEventAttributes", m_childWorkflowExecutionCanceledEventAttributes.Jsonize());

  }

  if(m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet)
  {
   payload.WithObject("childWorkflowExecutionTerminatedEventAttributes", m_childWorkflowExecutionTerminatedEventAttributes.Jsonize());

  }

  if(m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet)
  {
   payload.WithObject("signalExternalWorkflowExecutionInitiatedEventAttributes", m_signalExternalWorkflowExecutionInitiatedEventAttributes.Jsonize());

  }

  if(m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet)
  {
   payload.WithObject("externalWorkflowExecutionSignaledEventAttributes", m_externalWorkflowExecutionSignaledEventAttributes.Jsonize());

  }

  if(m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("signalExternalWorkflowExecutionFailedEventAttributes", m_signalExternalWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet)
  {
   payload.WithObject("externalWorkflowExecutionCancelRequestedEventAttributes", m_externalWorkflowExecutionCancelRequestedEventAttributes.Jsonize());

  }

  if(m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet)
  {
   payload.WithObject("requestCancelExternalWorkflowExecutionInitiatedEventAttributes", m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes.Jsonize());

  }

  if(m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("requestCancelExternalWorkflowExecutionFailedEventAttributes", m_requestCancelExternalWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_scheduleActivityTaskFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("scheduleActivityTaskFailedEventAttributes", m_scheduleActivityTaskFailedEventAttributes.Jsonize());

  }

  if(m_requestCancelActivityTaskFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("requestCancelActivityTaskFailedEventAttributes", m_requestCancelActivityTaskFailedEventAttributes.Jsonize());

  }

  if(m_startTimerFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("startTimerFailedEventAttributes", m_startTimerFailedEventAttributes.Jsonize());

  }

  if(m_cancelTimerFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("cancelTimerFailedEventAttributes", m_cancelTimerFailedEventAttributes.Jsonize());

  }

  if(m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("startChildWorkflowExecutionFailedEventAttributes", m_startChildWorkflowExecutionFailedEventAttributes.Jsonize());

  }

  if(m_lambdaFunctionScheduledEventAttributesHasBeenSet)
  {
   payload.WithObject("lambdaFunctionScheduledEventAttributes", m_lambdaFunctionScheduledEventAttributes.Jsonize());

  }

  if(m_lambdaFunctionStartedEventAttributesHasBeenSet)
  {
   payload.WithObject("lambdaFunctionStartedEventAttributes", m_lambdaFunctionStartedEventAttributes.Jsonize());

  }

  if(m_lambdaFunctionCompletedEventAttributesHasBeenSet)
  {
   payload.WithObject("lambdaFunctionCompletedEventAttributes", m_lambdaFunctionCompletedEventAttributes.Jsonize());

  }

  if(m_lambdaFunctionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("lambdaFunctionFailedEventAttributes", m_lambdaFunctionFailedEventAttributes.Jsonize());

  }

  if(m_lambdaFunctionTimedOutEventAttributesHasBeenSet)
  {
   payload.WithObject("lambdaFunctionTimedOutEventAttributes", m_lambdaFunctionTimedOutEventAttributes.Jsonize());

  }

  if(m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("scheduleLambdaFunctionFailedEventAttributes", m_scheduleLambdaFunctionFailedEventAttributes.Jsonize());

  }

  if(m_startLambdaFunctionFailedEventAttributesHasBeenSet)
  {
   payload.WithObject("startLambdaFunctionFailedEventAttributes", m_startLambdaFunctionFailedEventAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws