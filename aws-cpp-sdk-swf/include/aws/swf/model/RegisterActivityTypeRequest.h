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
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API RegisterActivityTypeRequest : public SWFRequest
  {
  public:
    RegisterActivityTypeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline RegisterActivityTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline RegisterActivityTypeRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline RegisterActivityTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not start or end with whitespace. It must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the
     * literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the activity type.</p> <note>The activity type consists of the
     * name and version, the combination of which must be unique within the
     * domain.</note> <p>The specified string must not start or end with whitespace. It
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters (\u0000-\u001f | \u007f
     * - \u009f). Also, it must not contain the literal string quotarnquot.</p>
     */
    inline RegisterActivityTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline RegisterActivityTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline RegisterActivityTypeRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description of the activity type.</p>
     */
    inline RegisterActivityTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskHeartbeatTimeout() const{ return m_defaultTaskHeartbeatTimeout; }

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(const Aws::String& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = value; }

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(Aws::String&& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = value; }

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(const char* value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(const Aws::String& value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(Aws::String&& value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> decision. If the
     * activity worker subsequently attempts to record a heartbeat or returns a result,
     * the activity worker receives an <code>UnknownResource</code> fault. In this
     * case, Amazon SWF no longer considers the activity task to be valid; the activity
     * worker should clean up the activity task.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(const char* value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list is not provided
     * when a task is scheduled through the <code>ScheduleActivityTask</code>
     * decision.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }

    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list is not provided
     * when a task is scheduled through the <code>ScheduleActivityTask</code>
     * decision.</p>
     */
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list is not provided
     * when a task is scheduled through the <code>ScheduleActivityTask</code>
     * decision.</p>
     */
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list is not provided
     * when a task is scheduled through the <code>ScheduleActivityTask</code>
     * decision.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list is not provided
     * when a task is scheduled through the <code>ScheduleActivityTask</code>
     * decision.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToStartTimeout() const{ return m_defaultTaskScheduleToStartTimeout; }

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(const Aws::String& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(Aws::String&& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(const char* value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(const Aws::String& value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(Aws::String&& value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * decision.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(const char* value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToCloseTimeout() const{ return m_defaultTaskScheduleToCloseTimeout; }

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(const char* value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> decision.</p> <p>The duration is specified in
     * seconds; an integer greater than or equal to 0. The value "NONE" can be used to
     * specify unlimited duration.</p>
     */
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(const char* value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_defaultTaskStartToCloseTimeout;
    bool m_defaultTaskStartToCloseTimeoutHasBeenSet;
    Aws::String m_defaultTaskHeartbeatTimeout;
    bool m_defaultTaskHeartbeatTimeoutHasBeenSet;
    TaskList m_defaultTaskList;
    bool m_defaultTaskListHasBeenSet;
    Aws::String m_defaultTaskPriority;
    bool m_defaultTaskPriorityHasBeenSet;
    Aws::String m_defaultTaskScheduleToStartTimeout;
    bool m_defaultTaskScheduleToStartTimeoutHasBeenSet;
    Aws::String m_defaultTaskScheduleToCloseTimeout;
    bool m_defaultTaskScheduleToCloseTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
