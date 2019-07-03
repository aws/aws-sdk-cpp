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
#include <aws/swf/model/ChildPolicy.h>
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
   * <p>The configuration settings of a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowTypeConfiguration
  {
  public:
    WorkflowTypeConfiguration();
    WorkflowTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    WorkflowTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::move(value); }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}


    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultExecutionStartToCloseTimeout() const{ return m_defaultExecutionStartToCloseTimeout; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool DefaultExecutionStartToCloseTimeoutHasBeenSet() const { return m_defaultExecutionStartToCloseTimeoutHasBeenSet; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const Aws::String& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = value; }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(Aws::String&& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = std::move(value); }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const char* value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout.assign(value); }

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(const Aws::String& value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(Aws::String&& value) { SetDefaultExecutionStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(const char* value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}


    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }

    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }

    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::move(value); }

    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(std::move(value)); return *this;}


    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::move(value); }

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(std::move(value)); return *this;}

    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}


    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline const ChildPolicy& GetDefaultChildPolicy() const{ return m_defaultChildPolicy; }

    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline bool DefaultChildPolicyHasBeenSet() const { return m_defaultChildPolicyHasBeenSet; }

    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline void SetDefaultChildPolicy(const ChildPolicy& value) { m_defaultChildPolicyHasBeenSet = true; m_defaultChildPolicy = value; }

    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline void SetDefaultChildPolicy(ChildPolicy&& value) { m_defaultChildPolicyHasBeenSet = true; m_defaultChildPolicy = std::move(value); }

    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline WorkflowTypeConfiguration& WithDefaultChildPolicy(const ChildPolicy& value) { SetDefaultChildPolicy(value); return *this;}

    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline WorkflowTypeConfiguration& WithDefaultChildPolicy(ChildPolicy&& value) { SetDefaultChildPolicy(std::move(value)); return *this;}


    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline const Aws::String& GetDefaultLambdaRole() const{ return m_defaultLambdaRole; }

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline bool DefaultLambdaRoleHasBeenSet() const { return m_defaultLambdaRoleHasBeenSet; }

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetDefaultLambdaRole(const Aws::String& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = value; }

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetDefaultLambdaRole(Aws::String&& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = std::move(value); }

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetDefaultLambdaRole(const char* value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole.assign(value); }

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline WorkflowTypeConfiguration& WithDefaultLambdaRole(const Aws::String& value) { SetDefaultLambdaRole(value); return *this;}

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline WorkflowTypeConfiguration& WithDefaultLambdaRole(Aws::String&& value) { SetDefaultLambdaRole(std::move(value)); return *this;}

    /**
     * <p>The default IAM role attached to this workflow type.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline WorkflowTypeConfiguration& WithDefaultLambdaRole(const char* value) { SetDefaultLambdaRole(value); return *this;}

  private:

    Aws::String m_defaultTaskStartToCloseTimeout;
    bool m_defaultTaskStartToCloseTimeoutHasBeenSet;

    Aws::String m_defaultExecutionStartToCloseTimeout;
    bool m_defaultExecutionStartToCloseTimeoutHasBeenSet;

    TaskList m_defaultTaskList;
    bool m_defaultTaskListHasBeenSet;

    Aws::String m_defaultTaskPriority;
    bool m_defaultTaskPriorityHasBeenSet;

    ChildPolicy m_defaultChildPolicy;
    bool m_defaultChildPolicyHasBeenSet;

    Aws::String m_defaultLambdaRole;
    bool m_defaultLambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
