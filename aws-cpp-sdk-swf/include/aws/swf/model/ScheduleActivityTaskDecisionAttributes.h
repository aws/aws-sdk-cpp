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
#include <aws/swf/model/ActivityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>

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
   * <p>Provides details of the <code>ScheduleActivityTask</code> decision.</p>
   * <p><b>Access Control</b></p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</li> <li>Use an <code>Action</code> element to allow or deny
   * permission to call this action.</li> <li>Constrain the following parameters by
   * using a <code>Condition</code> element with the appropriate keys. <ul>
   * <li><code>activityType.name</code>: String constraint. The key is
   * <code>swf:activityType.name</code>.</li> <li><code>activityType.version</code>:
   * String constraint. The key is <code>swf:activityType.version</code>.</li>
   * <li><code>taskList</code>: String constraint. The key is
   * <code>swf:taskList.name</code>.</li> </ul> </li> </ul> <p>If the caller does not
   * have sufficient permissions to invoke the action, or the parameter values fall
   * outside the specified constraints, the action fails. The associated event
   * attribute's <b>cause</b> parameter will be set to OPERATION_NOT_PERMITTED. For
   * details and example IAM policies, see <a
   * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a>.</p>
   */
  class AWS_SWF_API ScheduleActivityTaskDecisionAttributes
  {
  public:
    ScheduleActivityTaskDecisionAttributes();
    ScheduleActivityTaskDecisionAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    ScheduleActivityTaskDecisionAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><b>Required.</b> The type of the activity task to schedule.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p><b>Required.</b> The type of the activity task to schedule.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p><b>Required.</b> The type of the activity task to schedule.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p><b>Required.</b> The type of the activity task to schedule.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p><b>Required.</b> The type of the activity task to schedule.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithActivityType(ActivityType&& value) { SetActivityType(value); return *this;}

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(Aws::String&& value) { SetActivityId(value); return *this;}

    /**
     * <p><b>Required.</b> The <code>activityId</code> of the activity task.</p> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithControl(Aws::String&& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks. This data is not sent to the activity.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the activity task.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline const Aws::String& GetScheduleToCloseTimeout() const{ return m_scheduleToCloseTimeout; }

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToCloseTimeout(const Aws::String& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = value; }

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToCloseTimeout(Aws::String&& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = value; }

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToCloseTimeout(const char* value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(const Aws::String& value) { SetScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(Aws::String&& value) { SetScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds; an integer greater than or equal to 0. The value "NONE" can be used
     * to specify unlimited duration.</p> <note>A schedule-to-close timeout for this
     * activity task must be specified either as a default for the activity type or
     * through this field. If neither this field is set nor a default schedule-to-close
     * timeout was specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(const char* value) { SetScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type will be used.</p> <note>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault will be returned.</note> <p>The specified string must not
     * start or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type will be used.</p> <note>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault will be returned.</note> <p>The specified string must not
     * start or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type will be used.</p> <note>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault will be returned.</note> <p>The specified string must not
     * start or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type will be used.</p> <note>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault will be returned.</note> <p>The specified string must not
     * start or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type will be used.</p> <note>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault will be returned.</note> <p>The specified string must not
     * start or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the priority with which the activity task
     * is to be assigned to a worker. This overrides the defaultTaskPriority specified
     * when registering the activity type using <a>RegisterActivityType</a>. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline const Aws::String& GetScheduleToStartTimeout() const{ return m_scheduleToStartTimeout; }

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToStartTimeout(const Aws::String& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToStartTimeout(Aws::String&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline void SetScheduleToStartTimeout(const char* value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout.assign(value); }

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(const Aws::String& value) { SetScheduleToStartTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(Aws::String&& value) { SetScheduleToStartTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> If set, specifies the maximum duration the activity task can
     * wait to be assigned to a worker. This overrides the default schedule-to-start
     * timeout specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds; an
     * integer greater than or equal to 0. The value "NONE" can be used to specify
     * unlimited duration.</p> <note>A schedule-to-start timeout for this activity task
     * must be specified either as a default for the activity type or through this
     * field. If neither this field is set nor a default schedule-to-start timeout was
     * specified at registration time then a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(const char* value) { SetScheduleToStartTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p> <note>A
     * start-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default start-to-close timeout was specified at registration time then
     * a fault will be returned.</note>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetHeartbeatTimeout(const Aws::String& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetHeartbeatTimeout(Aws::String&& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetHeartbeatTimeout(const char* value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout.assign(value); }

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(const Aws::String& value) { SetHeartbeatTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(Aws::String&& value) { SetHeartbeatTimeout(value); return *this;}

    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it will
     * be ignored. This overrides the default heartbeat timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(const char* value) { SetHeartbeatTimeout(value); return *this;}

  private:
    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;
    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
    Aws::String m_scheduleToCloseTimeout;
    bool m_scheduleToCloseTimeoutHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;
    Aws::String m_scheduleToStartTimeout;
    bool m_scheduleToStartTimeoutHasBeenSet;
    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet;
    Aws::String m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
