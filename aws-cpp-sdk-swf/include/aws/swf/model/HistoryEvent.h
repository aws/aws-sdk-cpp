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
#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/swf/model/EventType.h>
#include <aws/swf/model/WorkflowExecutionStartedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCompletedEventAttributes.h>
#include <aws/swf/model/CompleteWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/FailWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionTimedOutEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCanceledEventAttributes.h>
#include <aws/swf/model/CancelWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionContinuedAsNewEventAttributes.h>
#include <aws/swf/model/ContinueAsNewWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionTerminatedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCancelRequestedEventAttributes.h>
#include <aws/swf/model/DecisionTaskScheduledEventAttributes.h>
#include <aws/swf/model/DecisionTaskStartedEventAttributes.h>
#include <aws/swf/model/DecisionTaskCompletedEventAttributes.h>
#include <aws/swf/model/DecisionTaskTimedOutEventAttributes.h>
#include <aws/swf/model/ActivityTaskScheduledEventAttributes.h>
#include <aws/swf/model/ActivityTaskStartedEventAttributes.h>
#include <aws/swf/model/ActivityTaskCompletedEventAttributes.h>
#include <aws/swf/model/ActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/ActivityTaskTimedOutEventAttributes.h>
#include <aws/swf/model/ActivityTaskCanceledEventAttributes.h>
#include <aws/swf/model/ActivityTaskCancelRequestedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionSignaledEventAttributes.h>
#include <aws/swf/model/MarkerRecordedEventAttributes.h>
#include <aws/swf/model/RecordMarkerFailedEventAttributes.h>
#include <aws/swf/model/TimerStartedEventAttributes.h>
#include <aws/swf/model/TimerFiredEventAttributes.h>
#include <aws/swf/model/TimerCanceledEventAttributes.h>
#include <aws/swf/model/StartChildWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionStartedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionCompletedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionTimedOutEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionCanceledEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionTerminatedEventAttributes.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/ExternalWorkflowExecutionSignaledEventAttributes.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ExternalWorkflowExecutionCancelRequestedEventAttributes.h>
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ScheduleActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/RequestCancelActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/StartTimerFailedEventAttributes.h>
#include <aws/swf/model/CancelTimerFailedEventAttributes.h>
#include <aws/swf/model/StartChildWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionScheduledEventAttributes.h>
#include <aws/swf/model/LambdaFunctionStartedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionCompletedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionFailedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionTimedOutEventAttributes.h>
#include <aws/swf/model/ScheduleLambdaFunctionFailedEventAttributes.h>
#include <aws/swf/model/StartLambdaFunctionFailedEventAttributes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Event within a workflow execution. A history event can be one of these
   * types:</p> <ul> <li> <b>WorkflowExecutionStarted</b>: The workflow execution was
   * started.</li> <li> <b>WorkflowExecutionCompleted</b>: The workflow execution was
   * closed due to successful completion.</li> <li> <b>WorkflowExecutionFailed</b>:
   * The workflow execution closed due to a failure.</li> <li>
   * <b>WorkflowExecutionTimedOut</b>: The workflow execution was closed because a
   * time out was exceeded.</li> <li> <b>WorkflowExecutionCanceled</b>: The workflow
   * execution was successfully canceled and closed.</li> <li>
   * <b>WorkflowExecutionTerminated</b>: The workflow execution was terminated.</li>
   * <li> <b>WorkflowExecutionContinuedAsNew</b>: The workflow execution was closed
   * and a new execution of the same type was created with the same workflowId.</li>
   * <li> <b>WorkflowExecutionCancelRequested</b>: A request to cancel this workflow
   * execution was made.</li> <li> <b>DecisionTaskScheduled</b>: A decision task was
   * scheduled for the workflow execution.</li> <li> <b>DecisionTaskStarted</b>: The
   * decision task was dispatched to a decider.</li> <li>
   * <b>DecisionTaskCompleted</b>: The decider successfully completed a decision task
   * by calling <a>RespondDecisionTaskCompleted</a>.</li> <li>
   * <b>DecisionTaskTimedOut</b>: The decision task timed out.</li> <li>
   * <b>ActivityTaskScheduled</b>: An activity task was scheduled for execution.</li>
   * <li> <b>ScheduleActivityTaskFailed</b>: Failed to process ScheduleActivityTask
   * decision. This happens when the decision is not configured properly, for example
   * the activity type specified is not registered.</li> <li>
   * <b>ActivityTaskStarted</b>: The scheduled activity task was dispatched to a
   * worker.</li> <li> <b>ActivityTaskCompleted</b>: An activity worker successfully
   * completed an activity task by calling <a>RespondActivityTaskCompleted</a>.</li>
   * <li> <b>ActivityTaskFailed</b>: An activity worker failed an activity task by
   * calling <a>RespondActivityTaskFailed</a>.</li> <li> <b>ActivityTaskTimedOut</b>:
   * The activity task timed out.</li> <li> <b>ActivityTaskCanceled</b>: The activity
   * task was successfully canceled.</li> <li> <b>ActivityTaskCancelRequested</b>: A
   * <code>RequestCancelActivityTask</code> decision was received by the system.</li>
   * <li> <b>RequestCancelActivityTaskFailed</b>: Failed to process
   * RequestCancelActivityTask decision. This happens when the decision is not
   * configured properly.</li> <li> <b>WorkflowExecutionSignaled</b>: An external
   * signal was received for the workflow execution.</li> <li> <b>MarkerRecorded</b>:
   * A marker was recorded in the workflow history as the result of a
   * <code>RecordMarker</code> decision.</li> <li> <b>TimerStarted</b>: A timer was
   * started for the workflow execution due to a <code>StartTimer</code>
   * decision.</li> <li> <b>StartTimerFailed</b>: Failed to process StartTimer
   * decision. This happens when the decision is not configured properly, for example
   * a timer already exists with the specified timer ID.</li> <li> <b>TimerFired</b>:
   * A timer, previously started for this workflow execution, fired.</li> <li>
   * <b>TimerCanceled</b>: A timer, previously started for this workflow execution,
   * was successfully canceled.</li> <li> <b>CancelTimerFailed</b>: Failed to process
   * CancelTimer decision. This happens when the decision is not configured properly,
   * for example no timer exists with the specified timer ID.</li> <li>
   * <b>StartChildWorkflowExecutionInitiated</b>: A request was made to start a child
   * workflow execution.</li> <li> <b>StartChildWorkflowExecutionFailed</b>: Failed
   * to process StartChildWorkflowExecution decision. This happens when the decision
   * is not configured properly, for example the workflow type specified is not
   * registered.</li> <li> <b>ChildWorkflowExecutionStarted</b>: A child workflow
   * execution was successfully started.</li> <li>
   * <b>ChildWorkflowExecutionCompleted</b>: A child workflow execution, started by
   * this workflow execution, completed successfully and was closed.</li> <li>
   * <b>ChildWorkflowExecutionFailed</b>: A child workflow execution, started by this
   * workflow execution, failed to complete successfully and was closed.</li> <li>
   * <b>ChildWorkflowExecutionTimedOut</b>: A child workflow execution, started by
   * this workflow execution, timed out and was closed.</li> <li>
   * <b>ChildWorkflowExecutionCanceled</b>: A child workflow execution, started by
   * this workflow execution, was canceled and closed.</li> <li>
   * <b>ChildWorkflowExecutionTerminated</b>: A child workflow execution, started by
   * this workflow execution, was terminated.</li> <li>
   * <b>SignalExternalWorkflowExecutionInitiated</b>: A request to signal an external
   * workflow was made.</li> <li> <b>ExternalWorkflowExecutionSignaled</b>: A signal,
   * requested by this workflow execution, was successfully delivered to the target
   * external workflow execution.</li> <li>
   * <b>SignalExternalWorkflowExecutionFailed</b>: The request to signal an external
   * workflow execution failed.</li> <li>
   * <b>RequestCancelExternalWorkflowExecutionInitiated</b>: A request was made to
   * request the cancellation of an external workflow execution.</li> <li>
   * <b>ExternalWorkflowExecutionCancelRequested</b>: Request to cancel an external
   * workflow execution was successfully delivered to the target execution.</li> <li>
   * <b>RequestCancelExternalWorkflowExecutionFailed</b>: Request to cancel an
   * external workflow execution failed.</li> <li> <b>LambdaFunctionScheduled</b>: An
   * AWS Lambda function was scheduled for execution.</li> <li>
   * <b>LambdaFunctionStarted</b>: The scheduled function was invoked in the AWS
   * Lambda service.</li> <li> <b>LambdaFunctionCompleted</b>: The AWS Lambda
   * function successfully completed.</li> <li> <b>LambdaFunctionFailed</b>: The AWS
   * Lambda function execution failed.</li> <li> <b>LambdaFunctionTimedOut</b>: The
   * AWS Lambda function execution timed out.</li> <li>
   * <b>ScheduleLambdaFunctionFailed</b>: Failed to process ScheduleLambdaFunction
   * decision. This happens when the workflow execution does not have the proper IAM
   * role attached to invoke AWS Lambda functions.</li> <li>
   * <b>StartLambdaFunctionFailed</b>: Failed to invoke the scheduled function in the
   * AWS Lambda service. This happens when the AWS Lambda service is not available in
   * the current region, or received too many requests.</li> </ul>
   */
  class AWS_SWF_API HistoryEvent
  {
  public:
    HistoryEvent();
    HistoryEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    HistoryEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline HistoryEvent& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline HistoryEvent& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>The type of the history event.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of the history event.</p>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of the history event.</p>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of the history event.</p>
     */
    inline HistoryEvent& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of the history event.</p>
     */
    inline HistoryEvent& WithEventType(EventType&& value) { SetEventType(value); return *this;}

    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline long long GetEventId() const{ return m_eventId; }

    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline void SetEventId(long long value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline HistoryEvent& WithEventId(long long value) { SetEventId(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionStartedEventAttributes& GetWorkflowExecutionStartedEventAttributes() const{ return m_workflowExecutionStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionStartedEventAttributes(const WorkflowExecutionStartedEventAttributes& value) { m_workflowExecutionStartedEventAttributesHasBeenSet = true; m_workflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributes&& value) { m_workflowExecutionStartedEventAttributesHasBeenSet = true; m_workflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionStartedEventAttributes(const WorkflowExecutionStartedEventAttributes& value) { SetWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributes&& value) { SetWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCompletedEventAttributes& GetWorkflowExecutionCompletedEventAttributes() const{ return m_workflowExecutionCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCompletedEventAttributes(const WorkflowExecutionCompletedEventAttributes& value) { m_workflowExecutionCompletedEventAttributesHasBeenSet = true; m_workflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributes&& value) { m_workflowExecutionCompletedEventAttributesHasBeenSet = true; m_workflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCompletedEventAttributes(const WorkflowExecutionCompletedEventAttributes& value) { SetWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributes&& value) { SetWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const CompleteWorkflowExecutionFailedEventAttributes& GetCompleteWorkflowExecutionFailedEventAttributes() const{ return m_completeWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetCompleteWorkflowExecutionFailedEventAttributes(const CompleteWorkflowExecutionFailedEventAttributes& value) { m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_completeWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributes&& value) { m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_completeWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithCompleteWorkflowExecutionFailedEventAttributes(const CompleteWorkflowExecutionFailedEventAttributes& value) { SetCompleteWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributes&& value) { SetCompleteWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline const WorkflowExecutionFailedEventAttributes& GetWorkflowExecutionFailedEventAttributes() const{ return m_workflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetWorkflowExecutionFailedEventAttributes(const WorkflowExecutionFailedEventAttributes& value) { m_workflowExecutionFailedEventAttributesHasBeenSet = true; m_workflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributes&& value) { m_workflowExecutionFailedEventAttributesHasBeenSet = true; m_workflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionFailedEventAttributes(const WorkflowExecutionFailedEventAttributes& value) { SetWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributes&& value) { SetWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const FailWorkflowExecutionFailedEventAttributes& GetFailWorkflowExecutionFailedEventAttributes() const{ return m_failWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetFailWorkflowExecutionFailedEventAttributes(const FailWorkflowExecutionFailedEventAttributes& value) { m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_failWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributes&& value) { m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_failWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithFailWorkflowExecutionFailedEventAttributes(const FailWorkflowExecutionFailedEventAttributes& value) { SetFailWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributes&& value) { SetFailWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTimedOutEventAttributes& GetWorkflowExecutionTimedOutEventAttributes() const{ return m_workflowExecutionTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTimedOutEventAttributes(const WorkflowExecutionTimedOutEventAttributes& value) { m_workflowExecutionTimedOutEventAttributesHasBeenSet = true; m_workflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributes&& value) { m_workflowExecutionTimedOutEventAttributesHasBeenSet = true; m_workflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTimedOutEventAttributes(const WorkflowExecutionTimedOutEventAttributes& value) { SetWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributes&& value) { SetWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCanceledEventAttributes& GetWorkflowExecutionCanceledEventAttributes() const{ return m_workflowExecutionCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCanceledEventAttributes(const WorkflowExecutionCanceledEventAttributes& value) { m_workflowExecutionCanceledEventAttributesHasBeenSet = true; m_workflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributes&& value) { m_workflowExecutionCanceledEventAttributesHasBeenSet = true; m_workflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCanceledEventAttributes(const WorkflowExecutionCanceledEventAttributes& value) { SetWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributes&& value) { SetWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const CancelWorkflowExecutionFailedEventAttributes& GetCancelWorkflowExecutionFailedEventAttributes() const{ return m_cancelWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetCancelWorkflowExecutionFailedEventAttributes(const CancelWorkflowExecutionFailedEventAttributes& value) { m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_cancelWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributes&& value) { m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_cancelWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithCancelWorkflowExecutionFailedEventAttributes(const CancelWorkflowExecutionFailedEventAttributes& value) { SetCancelWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributes&& value) { SetCancelWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const WorkflowExecutionContinuedAsNewEventAttributes& GetWorkflowExecutionContinuedAsNewEventAttributes() const{ return m_workflowExecutionContinuedAsNewEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionContinuedAsNewEventAttributes(const WorkflowExecutionContinuedAsNewEventAttributes& value) { m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true; m_workflowExecutionContinuedAsNewEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributes&& value) { m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true; m_workflowExecutionContinuedAsNewEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionContinuedAsNewEventAttributes(const WorkflowExecutionContinuedAsNewEventAttributes& value) { SetWorkflowExecutionContinuedAsNewEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributes&& value) { SetWorkflowExecutionContinuedAsNewEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline const ContinueAsNewWorkflowExecutionFailedEventAttributes& GetContinueAsNewWorkflowExecutionFailedEventAttributes() const{ return m_continueAsNewWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetContinueAsNewWorkflowExecutionFailedEventAttributes(const ContinueAsNewWorkflowExecutionFailedEventAttributes& value) { m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributes&& value) { m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithContinueAsNewWorkflowExecutionFailedEventAttributes(const ContinueAsNewWorkflowExecutionFailedEventAttributes& value) { SetContinueAsNewWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributes&& value) { SetContinueAsNewWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTerminatedEventAttributes& GetWorkflowExecutionTerminatedEventAttributes() const{ return m_workflowExecutionTerminatedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTerminatedEventAttributes(const WorkflowExecutionTerminatedEventAttributes& value) { m_workflowExecutionTerminatedEventAttributesHasBeenSet = true; m_workflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributes&& value) { m_workflowExecutionTerminatedEventAttributesHasBeenSet = true; m_workflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTerminatedEventAttributes(const WorkflowExecutionTerminatedEventAttributes& value) { SetWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributes&& value) { SetWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const WorkflowExecutionCancelRequestedEventAttributes& GetWorkflowExecutionCancelRequestedEventAttributes() const{ return m_workflowExecutionCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionCancelRequestedEventAttributes(const WorkflowExecutionCancelRequestedEventAttributes& value) { m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_workflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributes&& value) { m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_workflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCancelRequestedEventAttributes(const WorkflowExecutionCancelRequestedEventAttributes& value) { SetWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributes&& value) { SetWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline const DecisionTaskScheduledEventAttributes& GetDecisionTaskScheduledEventAttributes() const{ return m_decisionTaskScheduledEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetDecisionTaskScheduledEventAttributes(const DecisionTaskScheduledEventAttributes& value) { m_decisionTaskScheduledEventAttributesHasBeenSet = true; m_decisionTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributes&& value) { m_decisionTaskScheduledEventAttributesHasBeenSet = true; m_decisionTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskScheduledEventAttributes(const DecisionTaskScheduledEventAttributes& value) { SetDecisionTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributes&& value) { SetDecisionTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const DecisionTaskStartedEventAttributes& GetDecisionTaskStartedEventAttributes() const{ return m_decisionTaskStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetDecisionTaskStartedEventAttributes(const DecisionTaskStartedEventAttributes& value) { m_decisionTaskStartedEventAttributesHasBeenSet = true; m_decisionTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributes&& value) { m_decisionTaskStartedEventAttributesHasBeenSet = true; m_decisionTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskStartedEventAttributes(const DecisionTaskStartedEventAttributes& value) { SetDecisionTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributes&& value) { SetDecisionTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline const DecisionTaskCompletedEventAttributes& GetDecisionTaskCompletedEventAttributes() const{ return m_decisionTaskCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetDecisionTaskCompletedEventAttributes(const DecisionTaskCompletedEventAttributes& value) { m_decisionTaskCompletedEventAttributesHasBeenSet = true; m_decisionTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributes&& value) { m_decisionTaskCompletedEventAttributesHasBeenSet = true; m_decisionTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskCompletedEventAttributes(const DecisionTaskCompletedEventAttributes& value) { SetDecisionTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributes&& value) { SetDecisionTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const DecisionTaskTimedOutEventAttributes& GetDecisionTaskTimedOutEventAttributes() const{ return m_decisionTaskTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetDecisionTaskTimedOutEventAttributes(const DecisionTaskTimedOutEventAttributes& value) { m_decisionTaskTimedOutEventAttributesHasBeenSet = true; m_decisionTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributes&& value) { m_decisionTaskTimedOutEventAttributesHasBeenSet = true; m_decisionTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskTimedOutEventAttributes(const DecisionTaskTimedOutEventAttributes& value) { SetDecisionTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributes&& value) { SetDecisionTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline const ActivityTaskScheduledEventAttributes& GetActivityTaskScheduledEventAttributes() const{ return m_activityTaskScheduledEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetActivityTaskScheduledEventAttributes(const ActivityTaskScheduledEventAttributes& value) { m_activityTaskScheduledEventAttributesHasBeenSet = true; m_activityTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributes&& value) { m_activityTaskScheduledEventAttributesHasBeenSet = true; m_activityTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskScheduledEventAttributes(const ActivityTaskScheduledEventAttributes& value) { SetActivityTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributes&& value) { SetActivityTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const ActivityTaskStartedEventAttributes& GetActivityTaskStartedEventAttributes() const{ return m_activityTaskStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskStartedEventAttributes(const ActivityTaskStartedEventAttributes& value) { m_activityTaskStartedEventAttributesHasBeenSet = true; m_activityTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributes&& value) { m_activityTaskStartedEventAttributesHasBeenSet = true; m_activityTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskStartedEventAttributes(const ActivityTaskStartedEventAttributes& value) { SetActivityTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributes&& value) { SetActivityTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline const ActivityTaskCompletedEventAttributes& GetActivityTaskCompletedEventAttributes() const{ return m_activityTaskCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetActivityTaskCompletedEventAttributes(const ActivityTaskCompletedEventAttributes& value) { m_activityTaskCompletedEventAttributesHasBeenSet = true; m_activityTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline void SetActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributes&& value) { m_activityTaskCompletedEventAttributesHasBeenSet = true; m_activityTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCompletedEventAttributes(const ActivityTaskCompletedEventAttributes& value) { SetActivityTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It is not set for
     * other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributes&& value) { SetActivityTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const ActivityTaskFailedEventAttributes& GetActivityTaskFailedEventAttributes() const{ return m_activityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskFailedEventAttributes(const ActivityTaskFailedEventAttributes& value) { m_activityTaskFailedEventAttributesHasBeenSet = true; m_activityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributes&& value) { m_activityTaskFailedEventAttributesHasBeenSet = true; m_activityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskFailedEventAttributes(const ActivityTaskFailedEventAttributes& value) { SetActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributes&& value) { SetActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const ActivityTaskTimedOutEventAttributes& GetActivityTaskTimedOutEventAttributes() const{ return m_activityTaskTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskTimedOutEventAttributes(const ActivityTaskTimedOutEventAttributes& value) { m_activityTaskTimedOutEventAttributesHasBeenSet = true; m_activityTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributes&& value) { m_activityTaskTimedOutEventAttributesHasBeenSet = true; m_activityTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskTimedOutEventAttributes(const ActivityTaskTimedOutEventAttributes& value) { SetActivityTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributes&& value) { SetActivityTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const ActivityTaskCanceledEventAttributes& GetActivityTaskCanceledEventAttributes() const{ return m_activityTaskCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskCanceledEventAttributes(const ActivityTaskCanceledEventAttributes& value) { m_activityTaskCanceledEventAttributesHasBeenSet = true; m_activityTaskCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributes&& value) { m_activityTaskCanceledEventAttributesHasBeenSet = true; m_activityTaskCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCanceledEventAttributes(const ActivityTaskCanceledEventAttributes& value) { SetActivityTaskCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributes&& value) { SetActivityTaskCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ActivityTaskCancelRequestedEventAttributes& GetActivityTaskCancelRequestedEventAttributes() const{ return m_activityTaskCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetActivityTaskCancelRequestedEventAttributes(const ActivityTaskCancelRequestedEventAttributes& value) { m_activityTaskCancelRequestedEventAttributesHasBeenSet = true; m_activityTaskCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributes&& value) { m_activityTaskCancelRequestedEventAttributesHasBeenSet = true; m_activityTaskCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCancelRequestedEventAttributes(const ActivityTaskCancelRequestedEventAttributes& value) { SetActivityTaskCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributes&& value) { SetActivityTaskCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const WorkflowExecutionSignaledEventAttributes& GetWorkflowExecutionSignaledEventAttributes() const{ return m_workflowExecutionSignaledEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionSignaledEventAttributes(const WorkflowExecutionSignaledEventAttributes& value) { m_workflowExecutionSignaledEventAttributesHasBeenSet = true; m_workflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributes&& value) { m_workflowExecutionSignaledEventAttributesHasBeenSet = true; m_workflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionSignaledEventAttributes(const WorkflowExecutionSignaledEventAttributes& value) { SetWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributes&& value) { SetWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline const MarkerRecordedEventAttributes& GetMarkerRecordedEventAttributes() const{ return m_markerRecordedEventAttributes; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetMarkerRecordedEventAttributes(const MarkerRecordedEventAttributes& value) { m_markerRecordedEventAttributesHasBeenSet = true; m_markerRecordedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetMarkerRecordedEventAttributes(MarkerRecordedEventAttributes&& value) { m_markerRecordedEventAttributesHasBeenSet = true; m_markerRecordedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithMarkerRecordedEventAttributes(const MarkerRecordedEventAttributes& value) { SetMarkerRecordedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithMarkerRecordedEventAttributes(MarkerRecordedEventAttributes&& value) { SetMarkerRecordedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const RecordMarkerFailedEventAttributes& GetRecordMarkerFailedEventAttributes() const{ return m_recordMarkerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRecordMarkerFailedEventAttributes(const RecordMarkerFailedEventAttributes& value) { m_recordMarkerFailedEventAttributesHasBeenSet = true; m_recordMarkerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributes&& value) { m_recordMarkerFailedEventAttributesHasBeenSet = true; m_recordMarkerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRecordMarkerFailedEventAttributes(const RecordMarkerFailedEventAttributes& value) { SetRecordMarkerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributes&& value) { SetRecordMarkerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline const TimerStartedEventAttributes& GetTimerStartedEventAttributes() const{ return m_timerStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerStartedEventAttributes(const TimerStartedEventAttributes& value) { m_timerStartedEventAttributesHasBeenSet = true; m_timerStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerStartedEventAttributes(TimerStartedEventAttributes&& value) { m_timerStartedEventAttributesHasBeenSet = true; m_timerStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerStartedEventAttributes(const TimerStartedEventAttributes& value) { SetTimerStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerStartedEventAttributes(TimerStartedEventAttributes&& value) { SetTimerStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline const TimerFiredEventAttributes& GetTimerFiredEventAttributes() const{ return m_timerFiredEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerFiredEventAttributes(const TimerFiredEventAttributes& value) { m_timerFiredEventAttributesHasBeenSet = true; m_timerFiredEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerFiredEventAttributes(TimerFiredEventAttributes&& value) { m_timerFiredEventAttributesHasBeenSet = true; m_timerFiredEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerFiredEventAttributes(const TimerFiredEventAttributes& value) { SetTimerFiredEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerFiredEventAttributes(TimerFiredEventAttributes&& value) { SetTimerFiredEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline const TimerCanceledEventAttributes& GetTimerCanceledEventAttributes() const{ return m_timerCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerCanceledEventAttributes(const TimerCanceledEventAttributes& value) { m_timerCanceledEventAttributesHasBeenSet = true; m_timerCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetTimerCanceledEventAttributes(TimerCanceledEventAttributes&& value) { m_timerCanceledEventAttributesHasBeenSet = true; m_timerCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerCanceledEventAttributes(const TimerCanceledEventAttributes& value) { SetTimerCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerCanceledEventAttributes(TimerCanceledEventAttributes&& value) { SetTimerCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionInitiatedEventAttributes& GetStartChildWorkflowExecutionInitiatedEventAttributes() const{ return m_startChildWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionInitiatedEventAttributes(const StartChildWorkflowExecutionInitiatedEventAttributes& value) { m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributes&& value) { m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionInitiatedEventAttributes(const StartChildWorkflowExecutionInitiatedEventAttributes& value) { SetStartChildWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributes&& value) { SetStartChildWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionStartedEventAttributes& GetChildWorkflowExecutionStartedEventAttributes() const{ return m_childWorkflowExecutionStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionStartedEventAttributes(const ChildWorkflowExecutionStartedEventAttributes& value) { m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true; m_childWorkflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributes&& value) { m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true; m_childWorkflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionStartedEventAttributes(const ChildWorkflowExecutionStartedEventAttributes& value) { SetChildWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributes&& value) { SetChildWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionCompletedEventAttributes& GetChildWorkflowExecutionCompletedEventAttributes() const{ return m_childWorkflowExecutionCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCompletedEventAttributes(const ChildWorkflowExecutionCompletedEventAttributes& value) { m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true; m_childWorkflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributes&& value) { m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true; m_childWorkflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCompletedEventAttributes(const ChildWorkflowExecutionCompletedEventAttributes& value) { SetChildWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributes&& value) { SetChildWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionFailedEventAttributes& GetChildWorkflowExecutionFailedEventAttributes() const{ return m_childWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionFailedEventAttributes(const ChildWorkflowExecutionFailedEventAttributes& value) { m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_childWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributes&& value) { m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_childWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionFailedEventAttributes(const ChildWorkflowExecutionFailedEventAttributes& value) { SetChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributes&& value) { SetChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionTimedOutEventAttributes& GetChildWorkflowExecutionTimedOutEventAttributes() const{ return m_childWorkflowExecutionTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTimedOutEventAttributes(const ChildWorkflowExecutionTimedOutEventAttributes& value) { m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true; m_childWorkflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributes&& value) { m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true; m_childWorkflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTimedOutEventAttributes(const ChildWorkflowExecutionTimedOutEventAttributes& value) { SetChildWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributes&& value) { SetChildWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionCanceledEventAttributes& GetChildWorkflowExecutionCanceledEventAttributes() const{ return m_childWorkflowExecutionCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCanceledEventAttributes(const ChildWorkflowExecutionCanceledEventAttributes& value) { m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true; m_childWorkflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributes&& value) { m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true; m_childWorkflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCanceledEventAttributes(const ChildWorkflowExecutionCanceledEventAttributes& value) { SetChildWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributes&& value) { SetChildWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionTerminatedEventAttributes& GetChildWorkflowExecutionTerminatedEventAttributes() const{ return m_childWorkflowExecutionTerminatedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTerminatedEventAttributes(const ChildWorkflowExecutionTerminatedEventAttributes& value) { m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true; m_childWorkflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributes&& value) { m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true; m_childWorkflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTerminatedEventAttributes(const ChildWorkflowExecutionTerminatedEventAttributes& value) { SetChildWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributes&& value) { SetChildWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionInitiatedEventAttributes& GetSignalExternalWorkflowExecutionInitiatedEventAttributes() const{ return m_signalExternalWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionInitiatedEventAttributes(const SignalExternalWorkflowExecutionInitiatedEventAttributes& value) { m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributes&& value) { m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionInitiatedEventAttributes(const SignalExternalWorkflowExecutionInitiatedEventAttributes& value) { SetSignalExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributes&& value) { SetSignalExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const ExternalWorkflowExecutionSignaledEventAttributes& GetExternalWorkflowExecutionSignaledEventAttributes() const{ return m_externalWorkflowExecutionSignaledEventAttributes; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetExternalWorkflowExecutionSignaledEventAttributes(const ExternalWorkflowExecutionSignaledEventAttributes& value) { m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true; m_externalWorkflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributes&& value) { m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true; m_externalWorkflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionSignaledEventAttributes(const ExternalWorkflowExecutionSignaledEventAttributes& value) { SetExternalWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributes&& value) { SetExternalWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionFailedEventAttributes& GetSignalExternalWorkflowExecutionFailedEventAttributes() const{ return m_signalExternalWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionFailedEventAttributes(const SignalExternalWorkflowExecutionFailedEventAttributes& value) { m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributes&& value) { m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionFailedEventAttributes(const SignalExternalWorkflowExecutionFailedEventAttributes& value) { SetSignalExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributes&& value) { SetSignalExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types. </p>
     */
    inline const ExternalWorkflowExecutionCancelRequestedEventAttributes& GetExternalWorkflowExecutionCancelRequestedEventAttributes() const{ return m_externalWorkflowExecutionCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types. </p>
     */
    inline void SetExternalWorkflowExecutionCancelRequestedEventAttributes(const ExternalWorkflowExecutionCancelRequestedEventAttributes& value) { m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_externalWorkflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types. </p>
     */
    inline void SetExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributes&& value) { m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_externalWorkflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types. </p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionCancelRequestedEventAttributes(const ExternalWorkflowExecutionCancelRequestedEventAttributes& value) { SetExternalWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It is
     * not set for other event types. </p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributes&& value) { SetExternalWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& GetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes() const{ return m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& value) { m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributes&& value) { m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& value) { SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributes&& value) { SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionFailedEventAttributes& GetRequestCancelExternalWorkflowExecutionFailedEventAttributes() const{ return m_requestCancelExternalWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(const RequestCancelExternalWorkflowExecutionFailedEventAttributes& value) { m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributes&& value) { m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionFailedEventAttributes(const RequestCancelExternalWorkflowExecutionFailedEventAttributes& value) { SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributes&& value) { SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline const ScheduleActivityTaskFailedEventAttributes& GetScheduleActivityTaskFailedEventAttributes() const{ return m_scheduleActivityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetScheduleActivityTaskFailedEventAttributes(const ScheduleActivityTaskFailedEventAttributes& value) { m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true; m_scheduleActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline void SetScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributes&& value) { m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true; m_scheduleActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithScheduleActivityTaskFailedEventAttributes(const ScheduleActivityTaskFailedEventAttributes& value) { SetScheduleActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It is not set
     * for other event types.</p>
     */
    inline HistoryEvent& WithScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributes&& value) { SetScheduleActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const RequestCancelActivityTaskFailedEventAttributes& GetRequestCancelActivityTaskFailedEventAttributes() const{ return m_requestCancelActivityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetRequestCancelActivityTaskFailedEventAttributes(const RequestCancelActivityTaskFailedEventAttributes& value) { m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true; m_requestCancelActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributes&& value) { m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true; m_requestCancelActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithRequestCancelActivityTaskFailedEventAttributes(const RequestCancelActivityTaskFailedEventAttributes& value) { SetRequestCancelActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributes&& value) { SetRequestCancelActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline const StartTimerFailedEventAttributes& GetStartTimerFailedEventAttributes() const{ return m_startTimerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetStartTimerFailedEventAttributes(const StartTimerFailedEventAttributes& value) { m_startTimerFailedEventAttributesHasBeenSet = true; m_startTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline void SetStartTimerFailedEventAttributes(StartTimerFailedEventAttributes&& value) { m_startTimerFailedEventAttributesHasBeenSet = true; m_startTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithStartTimerFailedEventAttributes(const StartTimerFailedEventAttributes& value) { SetStartTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It is not set for other event
     * types.</p>
     */
    inline HistoryEvent& WithStartTimerFailedEventAttributes(StartTimerFailedEventAttributes&& value) { SetStartTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline const CancelTimerFailedEventAttributes& GetCancelTimerFailedEventAttributes() const{ return m_cancelTimerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetCancelTimerFailedEventAttributes(const CancelTimerFailedEventAttributes& value) { m_cancelTimerFailedEventAttributesHasBeenSet = true; m_cancelTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline void SetCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributes&& value) { m_cancelTimerFailedEventAttributesHasBeenSet = true; m_cancelTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithCancelTimerFailedEventAttributes(const CancelTimerFailedEventAttributes& value) { SetCancelTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It is not set for other
     * event types.</p>
     */
    inline HistoryEvent& WithCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributes&& value) { SetCancelTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionFailedEventAttributes& GetStartChildWorkflowExecutionFailedEventAttributes() const{ return m_startChildWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionFailedEventAttributes(const StartChildWorkflowExecutionFailedEventAttributes& value) { m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributes&& value) { m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionFailedEventAttributes(const StartChildWorkflowExecutionFailedEventAttributes& value) { SetStartChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It is not
     * set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributes&& value) { SetStartChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    
    inline const LambdaFunctionScheduledEventAttributes& GetLambdaFunctionScheduledEventAttributes() const{ return m_lambdaFunctionScheduledEventAttributes; }

    
    inline void SetLambdaFunctionScheduledEventAttributes(const LambdaFunctionScheduledEventAttributes& value) { m_lambdaFunctionScheduledEventAttributesHasBeenSet = true; m_lambdaFunctionScheduledEventAttributes = value; }

    
    inline void SetLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributes&& value) { m_lambdaFunctionScheduledEventAttributesHasBeenSet = true; m_lambdaFunctionScheduledEventAttributes = value; }

    
    inline HistoryEvent& WithLambdaFunctionScheduledEventAttributes(const LambdaFunctionScheduledEventAttributes& value) { SetLambdaFunctionScheduledEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributes&& value) { SetLambdaFunctionScheduledEventAttributes(value); return *this;}

    
    inline const LambdaFunctionStartedEventAttributes& GetLambdaFunctionStartedEventAttributes() const{ return m_lambdaFunctionStartedEventAttributes; }

    
    inline void SetLambdaFunctionStartedEventAttributes(const LambdaFunctionStartedEventAttributes& value) { m_lambdaFunctionStartedEventAttributesHasBeenSet = true; m_lambdaFunctionStartedEventAttributes = value; }

    
    inline void SetLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributes&& value) { m_lambdaFunctionStartedEventAttributesHasBeenSet = true; m_lambdaFunctionStartedEventAttributes = value; }

    
    inline HistoryEvent& WithLambdaFunctionStartedEventAttributes(const LambdaFunctionStartedEventAttributes& value) { SetLambdaFunctionStartedEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributes&& value) { SetLambdaFunctionStartedEventAttributes(value); return *this;}

    
    inline const LambdaFunctionCompletedEventAttributes& GetLambdaFunctionCompletedEventAttributes() const{ return m_lambdaFunctionCompletedEventAttributes; }

    
    inline void SetLambdaFunctionCompletedEventAttributes(const LambdaFunctionCompletedEventAttributes& value) { m_lambdaFunctionCompletedEventAttributesHasBeenSet = true; m_lambdaFunctionCompletedEventAttributes = value; }

    
    inline void SetLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributes&& value) { m_lambdaFunctionCompletedEventAttributesHasBeenSet = true; m_lambdaFunctionCompletedEventAttributes = value; }

    
    inline HistoryEvent& WithLambdaFunctionCompletedEventAttributes(const LambdaFunctionCompletedEventAttributes& value) { SetLambdaFunctionCompletedEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributes&& value) { SetLambdaFunctionCompletedEventAttributes(value); return *this;}

    
    inline const LambdaFunctionFailedEventAttributes& GetLambdaFunctionFailedEventAttributes() const{ return m_lambdaFunctionFailedEventAttributes; }

    
    inline void SetLambdaFunctionFailedEventAttributes(const LambdaFunctionFailedEventAttributes& value) { m_lambdaFunctionFailedEventAttributesHasBeenSet = true; m_lambdaFunctionFailedEventAttributes = value; }

    
    inline void SetLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributes&& value) { m_lambdaFunctionFailedEventAttributesHasBeenSet = true; m_lambdaFunctionFailedEventAttributes = value; }

    
    inline HistoryEvent& WithLambdaFunctionFailedEventAttributes(const LambdaFunctionFailedEventAttributes& value) { SetLambdaFunctionFailedEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributes&& value) { SetLambdaFunctionFailedEventAttributes(value); return *this;}

    
    inline const LambdaFunctionTimedOutEventAttributes& GetLambdaFunctionTimedOutEventAttributes() const{ return m_lambdaFunctionTimedOutEventAttributes; }

    
    inline void SetLambdaFunctionTimedOutEventAttributes(const LambdaFunctionTimedOutEventAttributes& value) { m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true; m_lambdaFunctionTimedOutEventAttributes = value; }

    
    inline void SetLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributes&& value) { m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true; m_lambdaFunctionTimedOutEventAttributes = value; }

    
    inline HistoryEvent& WithLambdaFunctionTimedOutEventAttributes(const LambdaFunctionTimedOutEventAttributes& value) { SetLambdaFunctionTimedOutEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributes&& value) { SetLambdaFunctionTimedOutEventAttributes(value); return *this;}

    
    inline const ScheduleLambdaFunctionFailedEventAttributes& GetScheduleLambdaFunctionFailedEventAttributes() const{ return m_scheduleLambdaFunctionFailedEventAttributes; }

    
    inline void SetScheduleLambdaFunctionFailedEventAttributes(const ScheduleLambdaFunctionFailedEventAttributes& value) { m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true; m_scheduleLambdaFunctionFailedEventAttributes = value; }

    
    inline void SetScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributes&& value) { m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true; m_scheduleLambdaFunctionFailedEventAttributes = value; }

    
    inline HistoryEvent& WithScheduleLambdaFunctionFailedEventAttributes(const ScheduleLambdaFunctionFailedEventAttributes& value) { SetScheduleLambdaFunctionFailedEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributes&& value) { SetScheduleLambdaFunctionFailedEventAttributes(value); return *this;}

    
    inline const StartLambdaFunctionFailedEventAttributes& GetStartLambdaFunctionFailedEventAttributes() const{ return m_startLambdaFunctionFailedEventAttributes; }

    
    inline void SetStartLambdaFunctionFailedEventAttributes(const StartLambdaFunctionFailedEventAttributes& value) { m_startLambdaFunctionFailedEventAttributesHasBeenSet = true; m_startLambdaFunctionFailedEventAttributes = value; }

    
    inline void SetStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributes&& value) { m_startLambdaFunctionFailedEventAttributesHasBeenSet = true; m_startLambdaFunctionFailedEventAttributes = value; }

    
    inline HistoryEvent& WithStartLambdaFunctionFailedEventAttributes(const StartLambdaFunctionFailedEventAttributes& value) { SetStartLambdaFunctionFailedEventAttributes(value); return *this;}

    
    inline HistoryEvent& WithStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributes&& value) { SetStartLambdaFunctionFailedEventAttributes(value); return *this;}

  private:
    Aws::Utils::DateTime m_eventTimestamp;
    bool m_eventTimestampHasBeenSet;
    EventType m_eventType;
    bool m_eventTypeHasBeenSet;
    long long m_eventId;
    bool m_eventIdHasBeenSet;
    WorkflowExecutionStartedEventAttributes m_workflowExecutionStartedEventAttributes;
    bool m_workflowExecutionStartedEventAttributesHasBeenSet;
    WorkflowExecutionCompletedEventAttributes m_workflowExecutionCompletedEventAttributes;
    bool m_workflowExecutionCompletedEventAttributesHasBeenSet;
    CompleteWorkflowExecutionFailedEventAttributes m_completeWorkflowExecutionFailedEventAttributes;
    bool m_completeWorkflowExecutionFailedEventAttributesHasBeenSet;
    WorkflowExecutionFailedEventAttributes m_workflowExecutionFailedEventAttributes;
    bool m_workflowExecutionFailedEventAttributesHasBeenSet;
    FailWorkflowExecutionFailedEventAttributes m_failWorkflowExecutionFailedEventAttributes;
    bool m_failWorkflowExecutionFailedEventAttributesHasBeenSet;
    WorkflowExecutionTimedOutEventAttributes m_workflowExecutionTimedOutEventAttributes;
    bool m_workflowExecutionTimedOutEventAttributesHasBeenSet;
    WorkflowExecutionCanceledEventAttributes m_workflowExecutionCanceledEventAttributes;
    bool m_workflowExecutionCanceledEventAttributesHasBeenSet;
    CancelWorkflowExecutionFailedEventAttributes m_cancelWorkflowExecutionFailedEventAttributes;
    bool m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet;
    WorkflowExecutionContinuedAsNewEventAttributes m_workflowExecutionContinuedAsNewEventAttributes;
    bool m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet;
    ContinueAsNewWorkflowExecutionFailedEventAttributes m_continueAsNewWorkflowExecutionFailedEventAttributes;
    bool m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet;
    WorkflowExecutionTerminatedEventAttributes m_workflowExecutionTerminatedEventAttributes;
    bool m_workflowExecutionTerminatedEventAttributesHasBeenSet;
    WorkflowExecutionCancelRequestedEventAttributes m_workflowExecutionCancelRequestedEventAttributes;
    bool m_workflowExecutionCancelRequestedEventAttributesHasBeenSet;
    DecisionTaskScheduledEventAttributes m_decisionTaskScheduledEventAttributes;
    bool m_decisionTaskScheduledEventAttributesHasBeenSet;
    DecisionTaskStartedEventAttributes m_decisionTaskStartedEventAttributes;
    bool m_decisionTaskStartedEventAttributesHasBeenSet;
    DecisionTaskCompletedEventAttributes m_decisionTaskCompletedEventAttributes;
    bool m_decisionTaskCompletedEventAttributesHasBeenSet;
    DecisionTaskTimedOutEventAttributes m_decisionTaskTimedOutEventAttributes;
    bool m_decisionTaskTimedOutEventAttributesHasBeenSet;
    ActivityTaskScheduledEventAttributes m_activityTaskScheduledEventAttributes;
    bool m_activityTaskScheduledEventAttributesHasBeenSet;
    ActivityTaskStartedEventAttributes m_activityTaskStartedEventAttributes;
    bool m_activityTaskStartedEventAttributesHasBeenSet;
    ActivityTaskCompletedEventAttributes m_activityTaskCompletedEventAttributes;
    bool m_activityTaskCompletedEventAttributesHasBeenSet;
    ActivityTaskFailedEventAttributes m_activityTaskFailedEventAttributes;
    bool m_activityTaskFailedEventAttributesHasBeenSet;
    ActivityTaskTimedOutEventAttributes m_activityTaskTimedOutEventAttributes;
    bool m_activityTaskTimedOutEventAttributesHasBeenSet;
    ActivityTaskCanceledEventAttributes m_activityTaskCanceledEventAttributes;
    bool m_activityTaskCanceledEventAttributesHasBeenSet;
    ActivityTaskCancelRequestedEventAttributes m_activityTaskCancelRequestedEventAttributes;
    bool m_activityTaskCancelRequestedEventAttributesHasBeenSet;
    WorkflowExecutionSignaledEventAttributes m_workflowExecutionSignaledEventAttributes;
    bool m_workflowExecutionSignaledEventAttributesHasBeenSet;
    MarkerRecordedEventAttributes m_markerRecordedEventAttributes;
    bool m_markerRecordedEventAttributesHasBeenSet;
    RecordMarkerFailedEventAttributes m_recordMarkerFailedEventAttributes;
    bool m_recordMarkerFailedEventAttributesHasBeenSet;
    TimerStartedEventAttributes m_timerStartedEventAttributes;
    bool m_timerStartedEventAttributesHasBeenSet;
    TimerFiredEventAttributes m_timerFiredEventAttributes;
    bool m_timerFiredEventAttributesHasBeenSet;
    TimerCanceledEventAttributes m_timerCanceledEventAttributes;
    bool m_timerCanceledEventAttributesHasBeenSet;
    StartChildWorkflowExecutionInitiatedEventAttributes m_startChildWorkflowExecutionInitiatedEventAttributes;
    bool m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet;
    ChildWorkflowExecutionStartedEventAttributes m_childWorkflowExecutionStartedEventAttributes;
    bool m_childWorkflowExecutionStartedEventAttributesHasBeenSet;
    ChildWorkflowExecutionCompletedEventAttributes m_childWorkflowExecutionCompletedEventAttributes;
    bool m_childWorkflowExecutionCompletedEventAttributesHasBeenSet;
    ChildWorkflowExecutionFailedEventAttributes m_childWorkflowExecutionFailedEventAttributes;
    bool m_childWorkflowExecutionFailedEventAttributesHasBeenSet;
    ChildWorkflowExecutionTimedOutEventAttributes m_childWorkflowExecutionTimedOutEventAttributes;
    bool m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet;
    ChildWorkflowExecutionCanceledEventAttributes m_childWorkflowExecutionCanceledEventAttributes;
    bool m_childWorkflowExecutionCanceledEventAttributesHasBeenSet;
    ChildWorkflowExecutionTerminatedEventAttributes m_childWorkflowExecutionTerminatedEventAttributes;
    bool m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet;
    SignalExternalWorkflowExecutionInitiatedEventAttributes m_signalExternalWorkflowExecutionInitiatedEventAttributes;
    bool m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet;
    ExternalWorkflowExecutionSignaledEventAttributes m_externalWorkflowExecutionSignaledEventAttributes;
    bool m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet;
    SignalExternalWorkflowExecutionFailedEventAttributes m_signalExternalWorkflowExecutionFailedEventAttributes;
    bool m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet;
    ExternalWorkflowExecutionCancelRequestedEventAttributes m_externalWorkflowExecutionCancelRequestedEventAttributes;
    bool m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet;
    RequestCancelExternalWorkflowExecutionInitiatedEventAttributes m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes;
    bool m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet;
    RequestCancelExternalWorkflowExecutionFailedEventAttributes m_requestCancelExternalWorkflowExecutionFailedEventAttributes;
    bool m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet;
    ScheduleActivityTaskFailedEventAttributes m_scheduleActivityTaskFailedEventAttributes;
    bool m_scheduleActivityTaskFailedEventAttributesHasBeenSet;
    RequestCancelActivityTaskFailedEventAttributes m_requestCancelActivityTaskFailedEventAttributes;
    bool m_requestCancelActivityTaskFailedEventAttributesHasBeenSet;
    StartTimerFailedEventAttributes m_startTimerFailedEventAttributes;
    bool m_startTimerFailedEventAttributesHasBeenSet;
    CancelTimerFailedEventAttributes m_cancelTimerFailedEventAttributes;
    bool m_cancelTimerFailedEventAttributesHasBeenSet;
    StartChildWorkflowExecutionFailedEventAttributes m_startChildWorkflowExecutionFailedEventAttributes;
    bool m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet;
    LambdaFunctionScheduledEventAttributes m_lambdaFunctionScheduledEventAttributes;
    bool m_lambdaFunctionScheduledEventAttributesHasBeenSet;
    LambdaFunctionStartedEventAttributes m_lambdaFunctionStartedEventAttributes;
    bool m_lambdaFunctionStartedEventAttributesHasBeenSet;
    LambdaFunctionCompletedEventAttributes m_lambdaFunctionCompletedEventAttributes;
    bool m_lambdaFunctionCompletedEventAttributesHasBeenSet;
    LambdaFunctionFailedEventAttributes m_lambdaFunctionFailedEventAttributes;
    bool m_lambdaFunctionFailedEventAttributesHasBeenSet;
    LambdaFunctionTimedOutEventAttributes m_lambdaFunctionTimedOutEventAttributes;
    bool m_lambdaFunctionTimedOutEventAttributesHasBeenSet;
    ScheduleLambdaFunctionFailedEventAttributes m_scheduleLambdaFunctionFailedEventAttributes;
    bool m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet;
    StartLambdaFunctionFailedEventAttributes m_startLambdaFunctionFailedEventAttributes;
    bool m_startLambdaFunctionFailedEventAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
