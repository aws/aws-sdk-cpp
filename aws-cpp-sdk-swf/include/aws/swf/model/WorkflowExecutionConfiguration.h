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
   * <p>The configuration settings for a workflow execution including timeout values,
   * tasklist etc. These configuration settings are determined from the defaults
   * specified when registering the workflow type and those specified when starting
   * the workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecutionConfiguration
  {
  public:
    WorkflowExecutionConfiguration();
    WorkflowExecutionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionConfiguration& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskPriority(Aws::String&& value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline WorkflowExecutionConfiguration& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline WorkflowExecutionConfiguration& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li><b>TERMINATE:</b> the child executions will be
     * terminated.</li> <li><b>REQUEST_CANCEL:</b> a request to cancel will be
     * attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</li> <li><b>ABANDON:</b> no action will be taken. The child
     * executions will continue to run.</li> </ul>
     */
    inline WorkflowExecutionConfiguration& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline WorkflowExecutionConfiguration& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline WorkflowExecutionConfiguration& WithLambdaRole(Aws::String&& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role used by this workflow execution when invoking AWS Lambda
     * functions.</p>
     */
    inline WorkflowExecutionConfiguration& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}

  private:
    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet;
    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;
    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;
    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
