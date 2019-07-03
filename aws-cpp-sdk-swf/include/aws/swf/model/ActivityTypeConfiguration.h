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
   * <p>Configuration settings registered with the activity type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ActivityTypeConfiguration
  {
  public:
    ActivityTypeConfiguration();
    ActivityTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ActivityTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::move(value); }

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}


    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskHeartbeatTimeout() const{ return m_defaultTaskHeartbeatTimeout; }

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline bool DefaultTaskHeartbeatTimeoutHasBeenSet() const { return m_defaultTaskHeartbeatTimeoutHasBeenSet; }

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(const Aws::String& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = value; }

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(Aws::String&& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = std::move(value); }

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskHeartbeatTimeout(const char* value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout.assign(value); }

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskHeartbeatTimeout(const Aws::String& value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskHeartbeatTimeout(Aws::String&& value) { SetDefaultTaskHeartbeatTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskHeartbeatTimeout(const char* value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}


    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }

    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }

    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::move(value); }

    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(std::move(value)); return *this;}


    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::move(value); }

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(std::move(value)); return *this;}

    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}


    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToStartTimeout() const{ return m_defaultTaskScheduleToStartTimeout; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool DefaultTaskScheduleToStartTimeoutHasBeenSet() const { return m_defaultTaskScheduleToStartTimeoutHasBeenSet; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(const Aws::String& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = value; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(Aws::String&& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = std::move(value); }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToStartTimeout(const char* value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout.assign(value); }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToStartTimeout(const Aws::String& value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToStartTimeout(Aws::String&& value) { SetDefaultTaskScheduleToStartTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToStartTimeout(const char* value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}


    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToCloseTimeout() const{ return m_defaultTaskScheduleToCloseTimeout; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool DefaultTaskScheduleToCloseTimeoutHasBeenSet() const { return m_defaultTaskScheduleToCloseTimeoutHasBeenSet; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = value; }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = std::move(value); }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskScheduleToCloseTimeout(const char* value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout.assign(value); }

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { SetDefaultTaskScheduleToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline ActivityTypeConfiguration& WithDefaultTaskScheduleToCloseTimeout(const char* value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}

  private:

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
