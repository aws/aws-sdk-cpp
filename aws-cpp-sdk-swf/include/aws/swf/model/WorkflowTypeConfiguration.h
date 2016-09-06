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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/ChildPolicy.h>

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
   * <p>The configuration settings of a workflow type.</p>
   */
  class AWS_SWF_API WorkflowTypeConfiguration
  {
  public:
    WorkflowTypeConfiguration();
    WorkflowTypeConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowTypeConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, that a decision task for executions of this workflow type might
     * take before returning completion or failure. If the task does not close in the
     * specified time then the task is automatically timed out and rescheduled. If the
     * decider eventually reports a completion or failure, it is ignored. This default
     * can be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultExecutionStartToCloseTimeout() const{ return m_defaultExecutionStartToCloseTimeout; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const Aws::String& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = value; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(Aws::String&& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = value; }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const char* value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout.assign(value); }

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(const Aws::String& value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(Aws::String&& value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default maximum duration, specified when registering the
     * workflow type, for executions of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(const char* value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p><i>Optional.</i> The default task list, specified when registering the
     * workflow type, for decisions tasks scheduled for workflow executions of this
     * type. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }

    /**
     * <p><i>Optional.</i> The default task list, specified when registering the
     * workflow type, for decisions tasks scheduled for workflow executions of this
     * type. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p>
     */
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p><i>Optional.</i> The default task list, specified when registering the
     * workflow type, for decisions tasks scheduled for workflow executions of this
     * type. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p>
     */
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p><i>Optional.</i> The default task list, specified when registering the
     * workflow type, for decisions tasks scheduled for workflow executions of this
     * type. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p><i>Optional.</i> The default task list, specified when registering the
     * workflow type, for decisions tasks scheduled for workflow executions of this
     * type. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> The default task priority, specified when registering the
     * workflow type, for all decision tasks of this workflow type. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> The default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The supported child
     * policies are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline const ChildPolicy& GetDefaultChildPolicy() const{ return m_defaultChildPolicy; }

    /**
     * <p><i>Optional.</i> The default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The supported child
     * policies are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline void SetDefaultChildPolicy(const ChildPolicy& value) { m_defaultChildPolicyHasBeenSet = true; m_defaultChildPolicy = value; }

    /**
     * <p><i>Optional.</i> The default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The supported child
     * policies are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline void SetDefaultChildPolicy(ChildPolicy&& value) { m_defaultChildPolicyHasBeenSet = true; m_defaultChildPolicy = value; }

    /**
     * <p><i>Optional.</i> The default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The supported child
     * policies are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline WorkflowTypeConfiguration& WithDefaultChildPolicy(const ChildPolicy& value) { SetDefaultChildPolicy(value); return *this;}

    /**
     * <p><i>Optional.</i> The default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The supported child
     * policies are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline WorkflowTypeConfiguration& WithDefaultChildPolicy(ChildPolicy&& value) { SetDefaultChildPolicy(value); return *this;}

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline const Aws::String& GetDefaultLambdaRole() const{ return m_defaultLambdaRole; }

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline void SetDefaultLambdaRole(const Aws::String& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = value; }

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline void SetDefaultLambdaRole(Aws::String&& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = value; }

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline void SetDefaultLambdaRole(const char* value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole.assign(value); }

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultLambdaRole(const Aws::String& value) { SetDefaultLambdaRole(value); return *this;}

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
     */
    inline WorkflowTypeConfiguration& WithDefaultLambdaRole(Aws::String&& value) { SetDefaultLambdaRole(value); return *this;}

    /**
     * <p>The default IAM role to use when a workflow execution invokes a AWS Lambda
     * function.</p>
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
