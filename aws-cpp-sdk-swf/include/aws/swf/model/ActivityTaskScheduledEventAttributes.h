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
#include <aws/swf/model/ActivityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
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
   * <p>Provides the details of the <code>ActivityTaskScheduled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskScheduledEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ActivityTaskScheduledEventAttributes
  {
  public:
    ActivityTaskScheduledEventAttributes();
    ActivityTaskScheduledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ActivityTaskScheduledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the activity task.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The type of the activity task.</p>
     */
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }

    /**
     * <p>The type of the activity task.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The type of the activity task.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }

    /**
     * <p>The type of the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The type of the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}


    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}


    /**
     * <p>The input provided to the activity task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}


    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetScheduleToStartTimeout() const{ return m_scheduleToStartTimeout; }

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline bool ScheduleToStartTimeoutHasBeenSet() const { return m_scheduleToStartTimeoutHasBeenSet; }

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline void SetScheduleToStartTimeout(const Aws::String& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline void SetScheduleToStartTimeout(Aws::String&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = std::move(value); }

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline void SetScheduleToStartTimeout(const char* value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout.assign(value); }

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(const Aws::String& value) { SetScheduleToStartTimeout(value); return *this;}

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(Aws::String&& value) { SetScheduleToStartTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(const char* value) { SetScheduleToStartTimeout(value); return *this;}


    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline const Aws::String& GetScheduleToCloseTimeout() const{ return m_scheduleToCloseTimeout; }

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline bool ScheduleToCloseTimeoutHasBeenSet() const { return m_scheduleToCloseTimeoutHasBeenSet; }

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline void SetScheduleToCloseTimeout(const Aws::String& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = value; }

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline void SetScheduleToCloseTimeout(Aws::String&& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = std::move(value); }

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline void SetScheduleToCloseTimeout(const char* value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout.assign(value); }

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(const Aws::String& value) { SetScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(Aws::String&& value) { SetScheduleToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(const char* value) { SetScheduleToCloseTimeout(value); return *this;}


    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}


    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }

    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }

    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}


    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}

    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}


    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline const Aws::String& GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline void SetHeartbeatTimeout(const Aws::String& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline void SetHeartbeatTimeout(Aws::String&& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = std::move(value); }

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline void SetHeartbeatTimeout(const char* value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout.assign(value); }

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(const Aws::String& value) { SetHeartbeatTimeout(value); return *this;}

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(Aws::String&& value) { SetHeartbeatTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(const char* value) { SetHeartbeatTimeout(value); return *this;}

  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_control;
    bool m_controlHasBeenSet;

    Aws::String m_scheduleToStartTimeout;
    bool m_scheduleToStartTimeoutHasBeenSet;

    Aws::String m_scheduleToCloseTimeout;
    bool m_scheduleToCloseTimeoutHasBeenSet;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet;

    TaskList m_taskList;
    bool m_taskListHasBeenSet;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;

    Aws::String m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
