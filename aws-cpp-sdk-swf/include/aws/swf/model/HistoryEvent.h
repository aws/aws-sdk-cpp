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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Event within a workflow execution. A history event can be one of these
   * types:</p> <ul> <li> <p> <code>ActivityTaskCancelRequested</code> – A
   * <code>RequestCancelActivityTask</code> decision was received by the system.</p>
   * </li> <li> <p> <code>ActivityTaskCanceled</code> – The activity task was
   * successfully canceled.</p> </li> <li> <p> <code>ActivityTaskCompleted</code> –
   * An activity worker successfully completed an activity task by calling
   * <a>RespondActivityTaskCompleted</a>.</p> </li> <li> <p>
   * <code>ActivityTaskFailed</code> – An activity worker failed an activity task by
   * calling <a>RespondActivityTaskFailed</a>.</p> </li> <li> <p>
   * <code>ActivityTaskScheduled</code> – An activity task was scheduled for
   * execution.</p> </li> <li> <p> <code>ActivityTaskStarted</code> – The scheduled
   * activity task was dispatched to a worker.</p> </li> <li> <p>
   * <code>ActivityTaskTimedOut</code> – The activity task timed out.</p> </li> <li>
   * <p> <code>CancelTimerFailed</code> – Failed to process CancelTimer decision.
   * This happens when the decision isn't configured properly, for example no timer
   * exists with the specified timer Id.</p> </li> <li> <p>
   * <code>CancelWorkflowExecutionFailed</code> – A request to cancel a workflow
   * execution failed.</p> </li> <li> <p> <code>ChildWorkflowExecutionCanceled</code>
   * – A child workflow execution, started by this workflow execution, was canceled
   * and closed.</p> </li> <li> <p> <code>ChildWorkflowExecutionCompleted</code> – A
   * child workflow execution, started by this workflow execution, completed
   * successfully and was closed.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionFailed</code> – A child workflow execution, started
   * by this workflow execution, failed to complete successfully and was closed.</p>
   * </li> <li> <p> <code>ChildWorkflowExecutionStarted</code> – A child workflow
   * execution was successfully started.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionTerminated</code> – A child workflow execution,
   * started by this workflow execution, was terminated.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionTimedOut</code> – A child workflow execution,
   * started by this workflow execution, timed out and was closed.</p> </li> <li> <p>
   * <code>CompleteWorkflowExecutionFailed</code> – The workflow execution failed to
   * complete.</p> </li> <li> <p> <code>ContinueAsNewWorkflowExecutionFailed</code> –
   * The workflow execution failed to complete after being continued as a new
   * workflow execution.</p> </li> <li> <p> <code>DecisionTaskCompleted</code> – The
   * decider successfully completed a decision task by calling
   * <a>RespondDecisionTaskCompleted</a>.</p> </li> <li> <p>
   * <code>DecisionTaskScheduled</code> – A decision task was scheduled for the
   * workflow execution.</p> </li> <li> <p> <code>DecisionTaskStarted</code> – The
   * decision task was dispatched to a decider.</p> </li> <li> <p>
   * <code>DecisionTaskTimedOut</code> – The decision task timed out.</p> </li> <li>
   * <p> <code>ExternalWorkflowExecutionCancelRequested</code> – Request to cancel an
   * external workflow execution was successfully delivered to the target
   * execution.</p> </li> <li> <p> <code>ExternalWorkflowExecutionSignaled</code> – A
   * signal, requested by this workflow execution, was successfully delivered to the
   * target external workflow execution.</p> </li> <li> <p>
   * <code>FailWorkflowExecutionFailed</code> – A request to mark a workflow
   * execution as failed, itself failed.</p> </li> <li> <p>
   * <code>MarkerRecorded</code> – A marker was recorded in the workflow history as
   * the result of a <code>RecordMarker</code> decision.</p> </li> <li> <p>
   * <code>RecordMarkerFailed</code> – A <code>RecordMarker</code> decision was
   * returned as failed.</p> </li> <li> <p>
   * <code>RequestCancelActivityTaskFailed</code> – Failed to process
   * RequestCancelActivityTask decision. This happens when the decision isn't
   * configured properly.</p> </li> <li> <p>
   * <code>RequestCancelExternalWorkflowExecutionFailed</code> – Request to cancel an
   * external workflow execution failed.</p> </li> <li> <p>
   * <code>RequestCancelExternalWorkflowExecutionInitiated</code> – A request was
   * made to request the cancellation of an external workflow execution.</p> </li>
   * <li> <p> <code>ScheduleActivityTaskFailed</code> – Failed to process
   * ScheduleActivityTask decision. This happens when the decision isn't configured
   * properly, for example the activity type specified isn't registered.</p> </li>
   * <li> <p> <code>SignalExternalWorkflowExecutionFailed</code> – The request to
   * signal an external workflow execution failed.</p> </li> <li> <p>
   * <code>SignalExternalWorkflowExecutionInitiated</code> – A request to signal an
   * external workflow was made.</p> </li> <li> <p>
   * <code>StartActivityTaskFailed</code> – A scheduled activity task failed to
   * start.</p> </li> <li> <p> <code>StartChildWorkflowExecutionFailed</code> –
   * Failed to process StartChildWorkflowExecution decision. This happens when the
   * decision isn't configured properly, for example the workflow type specified
   * isn't registered.</p> </li> <li> <p>
   * <code>StartChildWorkflowExecutionInitiated</code> – A request was made to start
   * a child workflow execution.</p> </li> <li> <p> <code>StartTimerFailed</code> –
   * Failed to process StartTimer decision. This happens when the decision isn't
   * configured properly, for example a timer already exists with the specified timer
   * Id.</p> </li> <li> <p> <code>TimerCanceled</code> – A timer, previously started
   * for this workflow execution, was successfully canceled.</p> </li> <li> <p>
   * <code>TimerFired</code> – A timer, previously started for this workflow
   * execution, fired.</p> </li> <li> <p> <code>TimerStarted</code> – A timer was
   * started for the workflow execution due to a <code>StartTimer</code>
   * decision.</p> </li> <li> <p> <code>WorkflowExecutionCancelRequested</code> – A
   * request to cancel this workflow execution was made.</p> </li> <li> <p>
   * <code>WorkflowExecutionCanceled</code> – The workflow execution was successfully
   * canceled and closed.</p> </li> <li> <p> <code>WorkflowExecutionCompleted</code>
   * – The workflow execution was closed due to successful completion.</p> </li> <li>
   * <p> <code>WorkflowExecutionContinuedAsNew</code> – The workflow execution was
   * closed and a new execution of the same type was created with the same
   * workflowId.</p> </li> <li> <p> <code>WorkflowExecutionFailed</code> – The
   * workflow execution closed due to a failure.</p> </li> <li> <p>
   * <code>WorkflowExecutionSignaled</code> – An external signal was received for the
   * workflow execution.</p> </li> <li> <p> <code>WorkflowExecutionStarted</code> –
   * The workflow execution was started.</p> </li> <li> <p>
   * <code>WorkflowExecutionTerminated</code> – The workflow execution was
   * terminated.</p> </li> <li> <p> <code>WorkflowExecutionTimedOut</code> – The
   * workflow execution was closed because a time out was exceeded.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/HistoryEvent">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API HistoryEvent
  {
  public:
    HistoryEvent();
    HistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    HistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline HistoryEvent& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline HistoryEvent& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(std::move(value)); return *this;}


    /**
     * <p>The type of the history event.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of the history event.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of the history event.</p>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of the history event.</p>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of the history event.</p>
     */
    inline HistoryEvent& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of the history event.</p>
     */
    inline HistoryEvent& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline long long GetEventId() const{ return m_eventId; }

    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

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
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionStartedEventAttributes& GetWorkflowExecutionStartedEventAttributes() const{ return m_workflowExecutionStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionStartedEventAttributesHasBeenSet() const { return m_workflowExecutionStartedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionStartedEventAttributes(const WorkflowExecutionStartedEventAttributes& value) { m_workflowExecutionStartedEventAttributesHasBeenSet = true; m_workflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributes&& value) { m_workflowExecutionStartedEventAttributesHasBeenSet = true; m_workflowExecutionStartedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionStartedEventAttributes(const WorkflowExecutionStartedEventAttributes& value) { SetWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributes&& value) { SetWorkflowExecutionStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCompletedEventAttributes& GetWorkflowExecutionCompletedEventAttributes() const{ return m_workflowExecutionCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionCompletedEventAttributesHasBeenSet() const { return m_workflowExecutionCompletedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCompletedEventAttributes(const WorkflowExecutionCompletedEventAttributes& value) { m_workflowExecutionCompletedEventAttributesHasBeenSet = true; m_workflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributes&& value) { m_workflowExecutionCompletedEventAttributesHasBeenSet = true; m_workflowExecutionCompletedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCompletedEventAttributes(const WorkflowExecutionCompletedEventAttributes& value) { SetWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributes&& value) { SetWorkflowExecutionCompletedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const CompleteWorkflowExecutionFailedEventAttributes& GetCompleteWorkflowExecutionFailedEventAttributes() const{ return m_completeWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool CompleteWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_completeWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetCompleteWorkflowExecutionFailedEventAttributes(const CompleteWorkflowExecutionFailedEventAttributes& value) { m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_completeWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributes&& value) { m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_completeWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithCompleteWorkflowExecutionFailedEventAttributes(const CompleteWorkflowExecutionFailedEventAttributes& value) { SetCompleteWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributes&& value) { SetCompleteWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const WorkflowExecutionFailedEventAttributes& GetWorkflowExecutionFailedEventAttributes() const{ return m_workflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool WorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_workflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetWorkflowExecutionFailedEventAttributes(const WorkflowExecutionFailedEventAttributes& value) { m_workflowExecutionFailedEventAttributesHasBeenSet = true; m_workflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributes&& value) { m_workflowExecutionFailedEventAttributesHasBeenSet = true; m_workflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionFailedEventAttributes(const WorkflowExecutionFailedEventAttributes& value) { SetWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributes&& value) { SetWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const FailWorkflowExecutionFailedEventAttributes& GetFailWorkflowExecutionFailedEventAttributes() const{ return m_failWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool FailWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_failWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetFailWorkflowExecutionFailedEventAttributes(const FailWorkflowExecutionFailedEventAttributes& value) { m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_failWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributes&& value) { m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_failWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithFailWorkflowExecutionFailedEventAttributes(const FailWorkflowExecutionFailedEventAttributes& value) { SetFailWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributes&& value) { SetFailWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTimedOutEventAttributes& GetWorkflowExecutionTimedOutEventAttributes() const{ return m_workflowExecutionTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionTimedOutEventAttributesHasBeenSet() const { return m_workflowExecutionTimedOutEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTimedOutEventAttributes(const WorkflowExecutionTimedOutEventAttributes& value) { m_workflowExecutionTimedOutEventAttributesHasBeenSet = true; m_workflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributes&& value) { m_workflowExecutionTimedOutEventAttributesHasBeenSet = true; m_workflowExecutionTimedOutEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTimedOutEventAttributes(const WorkflowExecutionTimedOutEventAttributes& value) { SetWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributes&& value) { SetWorkflowExecutionTimedOutEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCanceledEventAttributes& GetWorkflowExecutionCanceledEventAttributes() const{ return m_workflowExecutionCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionCanceledEventAttributesHasBeenSet() const { return m_workflowExecutionCanceledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCanceledEventAttributes(const WorkflowExecutionCanceledEventAttributes& value) { m_workflowExecutionCanceledEventAttributesHasBeenSet = true; m_workflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributes&& value) { m_workflowExecutionCanceledEventAttributesHasBeenSet = true; m_workflowExecutionCanceledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCanceledEventAttributes(const WorkflowExecutionCanceledEventAttributes& value) { SetWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributes&& value) { SetWorkflowExecutionCanceledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const CancelWorkflowExecutionFailedEventAttributes& GetCancelWorkflowExecutionFailedEventAttributes() const{ return m_cancelWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool CancelWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetCancelWorkflowExecutionFailedEventAttributes(const CancelWorkflowExecutionFailedEventAttributes& value) { m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_cancelWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributes&& value) { m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_cancelWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithCancelWorkflowExecutionFailedEventAttributes(const CancelWorkflowExecutionFailedEventAttributes& value) { SetCancelWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributes&& value) { SetCancelWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const WorkflowExecutionContinuedAsNewEventAttributes& GetWorkflowExecutionContinuedAsNewEventAttributes() const{ return m_workflowExecutionContinuedAsNewEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool WorkflowExecutionContinuedAsNewEventAttributesHasBeenSet() const { return m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionContinuedAsNewEventAttributes(const WorkflowExecutionContinuedAsNewEventAttributes& value) { m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true; m_workflowExecutionContinuedAsNewEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributes&& value) { m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true; m_workflowExecutionContinuedAsNewEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionContinuedAsNewEventAttributes(const WorkflowExecutionContinuedAsNewEventAttributes& value) { SetWorkflowExecutionContinuedAsNewEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributes&& value) { SetWorkflowExecutionContinuedAsNewEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const ContinueAsNewWorkflowExecutionFailedEventAttributes& GetContinueAsNewWorkflowExecutionFailedEventAttributes() const{ return m_continueAsNewWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline bool ContinueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetContinueAsNewWorkflowExecutionFailedEventAttributes(const ContinueAsNewWorkflowExecutionFailedEventAttributes& value) { m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributes&& value) { m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithContinueAsNewWorkflowExecutionFailedEventAttributes(const ContinueAsNewWorkflowExecutionFailedEventAttributes& value) { SetContinueAsNewWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributes&& value) { SetContinueAsNewWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTerminatedEventAttributes& GetWorkflowExecutionTerminatedEventAttributes() const{ return m_workflowExecutionTerminatedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionTerminatedEventAttributesHasBeenSet() const { return m_workflowExecutionTerminatedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTerminatedEventAttributes(const WorkflowExecutionTerminatedEventAttributes& value) { m_workflowExecutionTerminatedEventAttributesHasBeenSet = true; m_workflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributes&& value) { m_workflowExecutionTerminatedEventAttributesHasBeenSet = true; m_workflowExecutionTerminatedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTerminatedEventAttributes(const WorkflowExecutionTerminatedEventAttributes& value) { SetWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributes&& value) { SetWorkflowExecutionTerminatedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const WorkflowExecutionCancelRequestedEventAttributes& GetWorkflowExecutionCancelRequestedEventAttributes() const{ return m_workflowExecutionCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool WorkflowExecutionCancelRequestedEventAttributesHasBeenSet() const { return m_workflowExecutionCancelRequestedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionCancelRequestedEventAttributes(const WorkflowExecutionCancelRequestedEventAttributes& value) { m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_workflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributes&& value) { m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_workflowExecutionCancelRequestedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCancelRequestedEventAttributes(const WorkflowExecutionCancelRequestedEventAttributes& value) { SetWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributes&& value) { SetWorkflowExecutionCancelRequestedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskScheduledEventAttributes& GetDecisionTaskScheduledEventAttributes() const{ return m_decisionTaskScheduledEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool DecisionTaskScheduledEventAttributesHasBeenSet() const { return m_decisionTaskScheduledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskScheduledEventAttributes(const DecisionTaskScheduledEventAttributes& value) { m_decisionTaskScheduledEventAttributesHasBeenSet = true; m_decisionTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributes&& value) { m_decisionTaskScheduledEventAttributesHasBeenSet = true; m_decisionTaskScheduledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskScheduledEventAttributes(const DecisionTaskScheduledEventAttributes& value) { SetDecisionTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributes&& value) { SetDecisionTaskScheduledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskStartedEventAttributes& GetDecisionTaskStartedEventAttributes() const{ return m_decisionTaskStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool DecisionTaskStartedEventAttributesHasBeenSet() const { return m_decisionTaskStartedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskStartedEventAttributes(const DecisionTaskStartedEventAttributes& value) { m_decisionTaskStartedEventAttributesHasBeenSet = true; m_decisionTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributes&& value) { m_decisionTaskStartedEventAttributesHasBeenSet = true; m_decisionTaskStartedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskStartedEventAttributes(const DecisionTaskStartedEventAttributes& value) { SetDecisionTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributes&& value) { SetDecisionTaskStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskCompletedEventAttributes& GetDecisionTaskCompletedEventAttributes() const{ return m_decisionTaskCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool DecisionTaskCompletedEventAttributesHasBeenSet() const { return m_decisionTaskCompletedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskCompletedEventAttributes(const DecisionTaskCompletedEventAttributes& value) { m_decisionTaskCompletedEventAttributesHasBeenSet = true; m_decisionTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributes&& value) { m_decisionTaskCompletedEventAttributesHasBeenSet = true; m_decisionTaskCompletedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskCompletedEventAttributes(const DecisionTaskCompletedEventAttributes& value) { SetDecisionTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributes&& value) { SetDecisionTaskCompletedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskTimedOutEventAttributes& GetDecisionTaskTimedOutEventAttributes() const{ return m_decisionTaskTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool DecisionTaskTimedOutEventAttributesHasBeenSet() const { return m_decisionTaskTimedOutEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskTimedOutEventAttributes(const DecisionTaskTimedOutEventAttributes& value) { m_decisionTaskTimedOutEventAttributesHasBeenSet = true; m_decisionTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributes&& value) { m_decisionTaskTimedOutEventAttributesHasBeenSet = true; m_decisionTaskTimedOutEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskTimedOutEventAttributes(const DecisionTaskTimedOutEventAttributes& value) { SetDecisionTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributes&& value) { SetDecisionTaskTimedOutEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskScheduledEventAttributes& GetActivityTaskScheduledEventAttributes() const{ return m_activityTaskScheduledEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskScheduledEventAttributesHasBeenSet() const { return m_activityTaskScheduledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskScheduledEventAttributes(const ActivityTaskScheduledEventAttributes& value) { m_activityTaskScheduledEventAttributesHasBeenSet = true; m_activityTaskScheduledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributes&& value) { m_activityTaskScheduledEventAttributesHasBeenSet = true; m_activityTaskScheduledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskScheduledEventAttributes(const ActivityTaskScheduledEventAttributes& value) { SetActivityTaskScheduledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributes&& value) { SetActivityTaskScheduledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskStartedEventAttributes& GetActivityTaskStartedEventAttributes() const{ return m_activityTaskStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskStartedEventAttributesHasBeenSet() const { return m_activityTaskStartedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskStartedEventAttributes(const ActivityTaskStartedEventAttributes& value) { m_activityTaskStartedEventAttributesHasBeenSet = true; m_activityTaskStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributes&& value) { m_activityTaskStartedEventAttributesHasBeenSet = true; m_activityTaskStartedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskStartedEventAttributes(const ActivityTaskStartedEventAttributes& value) { SetActivityTaskStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributes&& value) { SetActivityTaskStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskCompletedEventAttributes& GetActivityTaskCompletedEventAttributes() const{ return m_activityTaskCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskCompletedEventAttributesHasBeenSet() const { return m_activityTaskCompletedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskCompletedEventAttributes(const ActivityTaskCompletedEventAttributes& value) { m_activityTaskCompletedEventAttributesHasBeenSet = true; m_activityTaskCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributes&& value) { m_activityTaskCompletedEventAttributesHasBeenSet = true; m_activityTaskCompletedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCompletedEventAttributes(const ActivityTaskCompletedEventAttributes& value) { SetActivityTaskCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributes&& value) { SetActivityTaskCompletedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskFailedEventAttributes& GetActivityTaskFailedEventAttributes() const{ return m_activityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskFailedEventAttributesHasBeenSet() const { return m_activityTaskFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskFailedEventAttributes(const ActivityTaskFailedEventAttributes& value) { m_activityTaskFailedEventAttributesHasBeenSet = true; m_activityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributes&& value) { m_activityTaskFailedEventAttributesHasBeenSet = true; m_activityTaskFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskFailedEventAttributes(const ActivityTaskFailedEventAttributes& value) { SetActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributes&& value) { SetActivityTaskFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskTimedOutEventAttributes& GetActivityTaskTimedOutEventAttributes() const{ return m_activityTaskTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskTimedOutEventAttributesHasBeenSet() const { return m_activityTaskTimedOutEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskTimedOutEventAttributes(const ActivityTaskTimedOutEventAttributes& value) { m_activityTaskTimedOutEventAttributesHasBeenSet = true; m_activityTaskTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributes&& value) { m_activityTaskTimedOutEventAttributesHasBeenSet = true; m_activityTaskTimedOutEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskTimedOutEventAttributes(const ActivityTaskTimedOutEventAttributes& value) { SetActivityTaskTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributes&& value) { SetActivityTaskTimedOutEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskCanceledEventAttributes& GetActivityTaskCanceledEventAttributes() const{ return m_activityTaskCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool ActivityTaskCanceledEventAttributesHasBeenSet() const { return m_activityTaskCanceledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskCanceledEventAttributes(const ActivityTaskCanceledEventAttributes& value) { m_activityTaskCanceledEventAttributesHasBeenSet = true; m_activityTaskCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributes&& value) { m_activityTaskCanceledEventAttributesHasBeenSet = true; m_activityTaskCanceledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCanceledEventAttributes(const ActivityTaskCanceledEventAttributes& value) { SetActivityTaskCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributes&& value) { SetActivityTaskCanceledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ActivityTaskCancelRequestedEventAttributes& GetActivityTaskCancelRequestedEventAttributes() const{ return m_activityTaskCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ActivityTaskCancelRequestedEventAttributesHasBeenSet() const { return m_activityTaskCancelRequestedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetActivityTaskCancelRequestedEventAttributes(const ActivityTaskCancelRequestedEventAttributes& value) { m_activityTaskCancelRequestedEventAttributesHasBeenSet = true; m_activityTaskCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributes&& value) { m_activityTaskCancelRequestedEventAttributesHasBeenSet = true; m_activityTaskCancelRequestedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCancelRequestedEventAttributes(const ActivityTaskCancelRequestedEventAttributes& value) { SetActivityTaskCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributes&& value) { SetActivityTaskCancelRequestedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionSignaledEventAttributes& GetWorkflowExecutionSignaledEventAttributes() const{ return m_workflowExecutionSignaledEventAttributes; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool WorkflowExecutionSignaledEventAttributesHasBeenSet() const { return m_workflowExecutionSignaledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionSignaledEventAttributes(const WorkflowExecutionSignaledEventAttributes& value) { m_workflowExecutionSignaledEventAttributesHasBeenSet = true; m_workflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributes&& value) { m_workflowExecutionSignaledEventAttributesHasBeenSet = true; m_workflowExecutionSignaledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionSignaledEventAttributes(const WorkflowExecutionSignaledEventAttributes& value) { SetWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributes&& value) { SetWorkflowExecutionSignaledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const MarkerRecordedEventAttributes& GetMarkerRecordedEventAttributes() const{ return m_markerRecordedEventAttributes; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline bool MarkerRecordedEventAttributesHasBeenSet() const { return m_markerRecordedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetMarkerRecordedEventAttributes(const MarkerRecordedEventAttributes& value) { m_markerRecordedEventAttributesHasBeenSet = true; m_markerRecordedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetMarkerRecordedEventAttributes(MarkerRecordedEventAttributes&& value) { m_markerRecordedEventAttributesHasBeenSet = true; m_markerRecordedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithMarkerRecordedEventAttributes(const MarkerRecordedEventAttributes& value) { SetMarkerRecordedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithMarkerRecordedEventAttributes(MarkerRecordedEventAttributes&& value) { SetMarkerRecordedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RecordMarkerFailedEventAttributes& GetRecordMarkerFailedEventAttributes() const{ return m_recordMarkerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool RecordMarkerFailedEventAttributesHasBeenSet() const { return m_recordMarkerFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRecordMarkerFailedEventAttributes(const RecordMarkerFailedEventAttributes& value) { m_recordMarkerFailedEventAttributesHasBeenSet = true; m_recordMarkerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributes&& value) { m_recordMarkerFailedEventAttributesHasBeenSet = true; m_recordMarkerFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRecordMarkerFailedEventAttributes(const RecordMarkerFailedEventAttributes& value) { SetRecordMarkerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributes&& value) { SetRecordMarkerFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerStartedEventAttributes& GetTimerStartedEventAttributes() const{ return m_timerStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline bool TimerStartedEventAttributesHasBeenSet() const { return m_timerStartedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerStartedEventAttributes(const TimerStartedEventAttributes& value) { m_timerStartedEventAttributesHasBeenSet = true; m_timerStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerStartedEventAttributes(TimerStartedEventAttributes&& value) { m_timerStartedEventAttributesHasBeenSet = true; m_timerStartedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerStartedEventAttributes(const TimerStartedEventAttributes& value) { SetTimerStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerStartedEventAttributes(TimerStartedEventAttributes&& value) { SetTimerStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerFiredEventAttributes& GetTimerFiredEventAttributes() const{ return m_timerFiredEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline bool TimerFiredEventAttributesHasBeenSet() const { return m_timerFiredEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerFiredEventAttributes(const TimerFiredEventAttributes& value) { m_timerFiredEventAttributesHasBeenSet = true; m_timerFiredEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerFiredEventAttributes(TimerFiredEventAttributes&& value) { m_timerFiredEventAttributesHasBeenSet = true; m_timerFiredEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerFiredEventAttributes(const TimerFiredEventAttributes& value) { SetTimerFiredEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerFiredEventAttributes(TimerFiredEventAttributes&& value) { SetTimerFiredEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerCanceledEventAttributes& GetTimerCanceledEventAttributes() const{ return m_timerCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline bool TimerCanceledEventAttributesHasBeenSet() const { return m_timerCanceledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerCanceledEventAttributes(const TimerCanceledEventAttributes& value) { m_timerCanceledEventAttributesHasBeenSet = true; m_timerCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetTimerCanceledEventAttributes(TimerCanceledEventAttributes&& value) { m_timerCanceledEventAttributesHasBeenSet = true; m_timerCanceledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerCanceledEventAttributes(const TimerCanceledEventAttributes& value) { SetTimerCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithTimerCanceledEventAttributes(TimerCanceledEventAttributes&& value) { SetTimerCanceledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionInitiatedEventAttributes& GetStartChildWorkflowExecutionInitiatedEventAttributes() const{ return m_startChildWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline bool StartChildWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionInitiatedEventAttributes(const StartChildWorkflowExecutionInitiatedEventAttributes& value) { m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributes&& value) { m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionInitiatedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionInitiatedEventAttributes(const StartChildWorkflowExecutionInitiatedEventAttributes& value) { SetStartChildWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributes&& value) { SetStartChildWorkflowExecutionInitiatedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionStartedEventAttributes& GetChildWorkflowExecutionStartedEventAttributes() const{ return m_childWorkflowExecutionStartedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ChildWorkflowExecutionStartedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionStartedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionStartedEventAttributes(const ChildWorkflowExecutionStartedEventAttributes& value) { m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true; m_childWorkflowExecutionStartedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributes&& value) { m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true; m_childWorkflowExecutionStartedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionStartedEventAttributes(const ChildWorkflowExecutionStartedEventAttributes& value) { SetChildWorkflowExecutionStartedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributes&& value) { SetChildWorkflowExecutionStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionCompletedEventAttributes& GetChildWorkflowExecutionCompletedEventAttributes() const{ return m_childWorkflowExecutionCompletedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool ChildWorkflowExecutionCompletedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionCompletedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCompletedEventAttributes(const ChildWorkflowExecutionCompletedEventAttributes& value) { m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true; m_childWorkflowExecutionCompletedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributes&& value) { m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true; m_childWorkflowExecutionCompletedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCompletedEventAttributes(const ChildWorkflowExecutionCompletedEventAttributes& value) { SetChildWorkflowExecutionCompletedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributes&& value) { SetChildWorkflowExecutionCompletedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionFailedEventAttributes& GetChildWorkflowExecutionFailedEventAttributes() const{ return m_childWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ChildWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionFailedEventAttributes(const ChildWorkflowExecutionFailedEventAttributes& value) { m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_childWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributes&& value) { m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_childWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionFailedEventAttributes(const ChildWorkflowExecutionFailedEventAttributes& value) { SetChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributes&& value) { SetChildWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionTimedOutEventAttributes& GetChildWorkflowExecutionTimedOutEventAttributes() const{ return m_childWorkflowExecutionTimedOutEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ChildWorkflowExecutionTimedOutEventAttributesHasBeenSet() const { return m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTimedOutEventAttributes(const ChildWorkflowExecutionTimedOutEventAttributes& value) { m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true; m_childWorkflowExecutionTimedOutEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributes&& value) { m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true; m_childWorkflowExecutionTimedOutEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTimedOutEventAttributes(const ChildWorkflowExecutionTimedOutEventAttributes& value) { SetChildWorkflowExecutionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributes&& value) { SetChildWorkflowExecutionTimedOutEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionCanceledEventAttributes& GetChildWorkflowExecutionCanceledEventAttributes() const{ return m_childWorkflowExecutionCanceledEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ChildWorkflowExecutionCanceledEventAttributesHasBeenSet() const { return m_childWorkflowExecutionCanceledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCanceledEventAttributes(const ChildWorkflowExecutionCanceledEventAttributes& value) { m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true; m_childWorkflowExecutionCanceledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributes&& value) { m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true; m_childWorkflowExecutionCanceledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCanceledEventAttributes(const ChildWorkflowExecutionCanceledEventAttributes& value) { SetChildWorkflowExecutionCanceledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributes&& value) { SetChildWorkflowExecutionCanceledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionTerminatedEventAttributes& GetChildWorkflowExecutionTerminatedEventAttributes() const{ return m_childWorkflowExecutionTerminatedEventAttributes; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool ChildWorkflowExecutionTerminatedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTerminatedEventAttributes(const ChildWorkflowExecutionTerminatedEventAttributes& value) { m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true; m_childWorkflowExecutionTerminatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributes&& value) { m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true; m_childWorkflowExecutionTerminatedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTerminatedEventAttributes(const ChildWorkflowExecutionTerminatedEventAttributes& value) { SetChildWorkflowExecutionTerminatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributes&& value) { SetChildWorkflowExecutionTerminatedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionInitiatedEventAttributes& GetSignalExternalWorkflowExecutionInitiatedEventAttributes() const{ return m_signalExternalWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline bool SignalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionInitiatedEventAttributes(const SignalExternalWorkflowExecutionInitiatedEventAttributes& value) { m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributes&& value) { m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionInitiatedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionInitiatedEventAttributes(const SignalExternalWorkflowExecutionInitiatedEventAttributes& value) { SetSignalExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributes&& value) { SetSignalExternalWorkflowExecutionInitiatedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ExternalWorkflowExecutionSignaledEventAttributes& GetExternalWorkflowExecutionSignaledEventAttributes() const{ return m_externalWorkflowExecutionSignaledEventAttributes; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool ExternalWorkflowExecutionSignaledEventAttributesHasBeenSet() const { return m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetExternalWorkflowExecutionSignaledEventAttributes(const ExternalWorkflowExecutionSignaledEventAttributes& value) { m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true; m_externalWorkflowExecutionSignaledEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributes&& value) { m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true; m_externalWorkflowExecutionSignaledEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionSignaledEventAttributes(const ExternalWorkflowExecutionSignaledEventAttributes& value) { SetExternalWorkflowExecutionSignaledEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributes&& value) { SetExternalWorkflowExecutionSignaledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionFailedEventAttributes& GetSignalExternalWorkflowExecutionFailedEventAttributes() const{ return m_signalExternalWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline bool SignalExternalWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionFailedEventAttributes(const SignalExternalWorkflowExecutionFailedEventAttributes& value) { m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline void SetSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributes&& value) { m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionFailedEventAttributes(const SignalExternalWorkflowExecutionFailedEventAttributes& value) { SetSignalExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributes&& value) { SetSignalExternalWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline const ExternalWorkflowExecutionCancelRequestedEventAttributes& GetExternalWorkflowExecutionCancelRequestedEventAttributes() const{ return m_externalWorkflowExecutionCancelRequestedEventAttributes; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline bool ExternalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet() const { return m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline void SetExternalWorkflowExecutionCancelRequestedEventAttributes(const ExternalWorkflowExecutionCancelRequestedEventAttributes& value) { m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_externalWorkflowExecutionCancelRequestedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline void SetExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributes&& value) { m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_externalWorkflowExecutionCancelRequestedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionCancelRequestedEventAttributes(const ExternalWorkflowExecutionCancelRequestedEventAttributes& value) { SetExternalWorkflowExecutionCancelRequestedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline HistoryEvent& WithExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributes&& value) { SetExternalWorkflowExecutionCancelRequestedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& GetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes() const{ return m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool RequestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& value) { m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributes&& value) { m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& value) { SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributes&& value) { SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionFailedEventAttributes& GetRequestCancelExternalWorkflowExecutionFailedEventAttributes() const{ return m_requestCancelExternalWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool RequestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(const RequestCancelExternalWorkflowExecutionFailedEventAttributes& value) { m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributes&& value) { m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionFailedEventAttributes(const RequestCancelExternalWorkflowExecutionFailedEventAttributes& value) { SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributes&& value) { SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ScheduleActivityTaskFailedEventAttributes& GetScheduleActivityTaskFailedEventAttributes() const{ return m_scheduleActivityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline bool ScheduleActivityTaskFailedEventAttributesHasBeenSet() const { return m_scheduleActivityTaskFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetScheduleActivityTaskFailedEventAttributes(const ScheduleActivityTaskFailedEventAttributes& value) { m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true; m_scheduleActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline void SetScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributes&& value) { m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true; m_scheduleActivityTaskFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithScheduleActivityTaskFailedEventAttributes(const ScheduleActivityTaskFailedEventAttributes& value) { SetScheduleActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline HistoryEvent& WithScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributes&& value) { SetScheduleActivityTaskFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const RequestCancelActivityTaskFailedEventAttributes& GetRequestCancelActivityTaskFailedEventAttributes() const{ return m_requestCancelActivityTaskFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool RequestCancelActivityTaskFailedEventAttributesHasBeenSet() const { return m_requestCancelActivityTaskFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetRequestCancelActivityTaskFailedEventAttributes(const RequestCancelActivityTaskFailedEventAttributes& value) { m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true; m_requestCancelActivityTaskFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributes&& value) { m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true; m_requestCancelActivityTaskFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithRequestCancelActivityTaskFailedEventAttributes(const RequestCancelActivityTaskFailedEventAttributes& value) { SetRequestCancelActivityTaskFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributes&& value) { SetRequestCancelActivityTaskFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const StartTimerFailedEventAttributes& GetStartTimerFailedEventAttributes() const{ return m_startTimerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline bool StartTimerFailedEventAttributesHasBeenSet() const { return m_startTimerFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetStartTimerFailedEventAttributes(const StartTimerFailedEventAttributes& value) { m_startTimerFailedEventAttributesHasBeenSet = true; m_startTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline void SetStartTimerFailedEventAttributes(StartTimerFailedEventAttributes&& value) { m_startTimerFailedEventAttributesHasBeenSet = true; m_startTimerFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithStartTimerFailedEventAttributes(const StartTimerFailedEventAttributes& value) { SetStartTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline HistoryEvent& WithStartTimerFailedEventAttributes(StartTimerFailedEventAttributes&& value) { SetStartTimerFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const CancelTimerFailedEventAttributes& GetCancelTimerFailedEventAttributes() const{ return m_cancelTimerFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline bool CancelTimerFailedEventAttributesHasBeenSet() const { return m_cancelTimerFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetCancelTimerFailedEventAttributes(const CancelTimerFailedEventAttributes& value) { m_cancelTimerFailedEventAttributesHasBeenSet = true; m_cancelTimerFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline void SetCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributes&& value) { m_cancelTimerFailedEventAttributesHasBeenSet = true; m_cancelTimerFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithCancelTimerFailedEventAttributes(const CancelTimerFailedEventAttributes& value) { SetCancelTimerFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline HistoryEvent& WithCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributes&& value) { SetCancelTimerFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionFailedEventAttributes& GetStartChildWorkflowExecutionFailedEventAttributes() const{ return m_startChildWorkflowExecutionFailedEventAttributes; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline bool StartChildWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionFailedEventAttributes(const StartChildWorkflowExecutionFailedEventAttributes& value) { m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionFailedEventAttributes = value; }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline void SetStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributes&& value) { m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionFailedEventAttributes = std::move(value); }

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionFailedEventAttributes(const StartChildWorkflowExecutionFailedEventAttributes& value) { SetStartChildWorkflowExecutionFailedEventAttributes(value); return *this;}

    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributes&& value) { SetStartChildWorkflowExecutionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionScheduledEventAttributes& GetLambdaFunctionScheduledEventAttributes() const{ return m_lambdaFunctionScheduledEventAttributes; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline bool LambdaFunctionScheduledEventAttributesHasBeenSet() const { return m_lambdaFunctionScheduledEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionScheduledEventAttributes(const LambdaFunctionScheduledEventAttributes& value) { m_lambdaFunctionScheduledEventAttributesHasBeenSet = true; m_lambdaFunctionScheduledEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributes&& value) { m_lambdaFunctionScheduledEventAttributesHasBeenSet = true; m_lambdaFunctionScheduledEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionScheduledEventAttributes(const LambdaFunctionScheduledEventAttributes& value) { SetLambdaFunctionScheduledEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributes&& value) { SetLambdaFunctionScheduledEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionStartedEventAttributes& GetLambdaFunctionStartedEventAttributes() const{ return m_lambdaFunctionStartedEventAttributes; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline bool LambdaFunctionStartedEventAttributesHasBeenSet() const { return m_lambdaFunctionStartedEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionStartedEventAttributes(const LambdaFunctionStartedEventAttributes& value) { m_lambdaFunctionStartedEventAttributesHasBeenSet = true; m_lambdaFunctionStartedEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributes&& value) { m_lambdaFunctionStartedEventAttributesHasBeenSet = true; m_lambdaFunctionStartedEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionStartedEventAttributes(const LambdaFunctionStartedEventAttributes& value) { SetLambdaFunctionStartedEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributes&& value) { SetLambdaFunctionStartedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionCompletedEventAttributes& GetLambdaFunctionCompletedEventAttributes() const{ return m_lambdaFunctionCompletedEventAttributes; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline bool LambdaFunctionCompletedEventAttributesHasBeenSet() const { return m_lambdaFunctionCompletedEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionCompletedEventAttributes(const LambdaFunctionCompletedEventAttributes& value) { m_lambdaFunctionCompletedEventAttributesHasBeenSet = true; m_lambdaFunctionCompletedEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributes&& value) { m_lambdaFunctionCompletedEventAttributesHasBeenSet = true; m_lambdaFunctionCompletedEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionCompletedEventAttributes(const LambdaFunctionCompletedEventAttributes& value) { SetLambdaFunctionCompletedEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributes&& value) { SetLambdaFunctionCompletedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline const LambdaFunctionFailedEventAttributes& GetLambdaFunctionFailedEventAttributes() const{ return m_lambdaFunctionFailedEventAttributes; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline bool LambdaFunctionFailedEventAttributesHasBeenSet() const { return m_lambdaFunctionFailedEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline void SetLambdaFunctionFailedEventAttributes(const LambdaFunctionFailedEventAttributes& value) { m_lambdaFunctionFailedEventAttributesHasBeenSet = true; m_lambdaFunctionFailedEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline void SetLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributes&& value) { m_lambdaFunctionFailedEventAttributesHasBeenSet = true; m_lambdaFunctionFailedEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionFailedEventAttributes(const LambdaFunctionFailedEventAttributes& value) { SetLambdaFunctionFailedEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributes&& value) { SetLambdaFunctionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionTimedOutEventAttributes& GetLambdaFunctionTimedOutEventAttributes() const{ return m_lambdaFunctionTimedOutEventAttributes; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline bool LambdaFunctionTimedOutEventAttributesHasBeenSet() const { return m_lambdaFunctionTimedOutEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionTimedOutEventAttributes(const LambdaFunctionTimedOutEventAttributes& value) { m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true; m_lambdaFunctionTimedOutEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributes&& value) { m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true; m_lambdaFunctionTimedOutEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionTimedOutEventAttributes(const LambdaFunctionTimedOutEventAttributes& value) { SetLambdaFunctionTimedOutEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributes&& value) { SetLambdaFunctionTimedOutEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline const ScheduleLambdaFunctionFailedEventAttributes& GetScheduleLambdaFunctionFailedEventAttributes() const{ return m_scheduleLambdaFunctionFailedEventAttributes; }

    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline bool ScheduleLambdaFunctionFailedEventAttributesHasBeenSet() const { return m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline void SetScheduleLambdaFunctionFailedEventAttributes(const ScheduleLambdaFunctionFailedEventAttributes& value) { m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true; m_scheduleLambdaFunctionFailedEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline void SetScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributes&& value) { m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true; m_scheduleLambdaFunctionFailedEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline HistoryEvent& WithScheduleLambdaFunctionFailedEventAttributes(const ScheduleLambdaFunctionFailedEventAttributes& value) { SetScheduleLambdaFunctionFailedEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline HistoryEvent& WithScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributes&& value) { SetScheduleLambdaFunctionFailedEventAttributes(std::move(value)); return *this;}


    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline const StartLambdaFunctionFailedEventAttributes& GetStartLambdaFunctionFailedEventAttributes() const{ return m_startLambdaFunctionFailedEventAttributes; }

    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline bool StartLambdaFunctionFailedEventAttributesHasBeenSet() const { return m_startLambdaFunctionFailedEventAttributesHasBeenSet; }

    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetStartLambdaFunctionFailedEventAttributes(const StartLambdaFunctionFailedEventAttributes& value) { m_startLambdaFunctionFailedEventAttributesHasBeenSet = true; m_startLambdaFunctionFailedEventAttributes = value; }

    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline void SetStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributes&& value) { m_startLambdaFunctionFailedEventAttributesHasBeenSet = true; m_startLambdaFunctionFailedEventAttributes = std::move(value); }

    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithStartLambdaFunctionFailedEventAttributes(const StartLambdaFunctionFailedEventAttributes& value) { SetStartLambdaFunctionFailedEventAttributes(value); return *this;}

    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline HistoryEvent& WithStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributes&& value) { SetStartLambdaFunctionFailedEventAttributes(std::move(value)); return *this;}

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
