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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides the details of the <code>ContinueAsNewWorkflowExecution</code>
   * decision.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
   * control this decision's access to Amazon SWF resources as follows:</p> <ul> <li>
   * <p>Use a <code>Resource</code> element with the domain name to limit the action
   * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
   * to allow or deny permission to call this action.</p> </li> <li> <p>Constrain the
   * following parameters by using a <code>Condition</code> element with the
   * appropriate keys.</p> <ul> <li> <p> <code>tag</code> – A tag used to identify
   * the workflow execution</p> </li> <li> <p> <code>taskList</code> – String
   * constraint. The key is <code>swf:taskList.name</code>.</p> </li> <li> <p>
   * <code>workflowType.version</code> – String constraint. The key is
   * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
   * caller doesn't have sufficient permissions to invoke the action, or the
   * parameter values fall outside the specified constraints, the action fails. The
   * associated event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ContinueAsNewWorkflowExecutionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ContinueAsNewWorkflowExecutionDecisionAttributes
  {
  public:
    ContinueAsNewWorkflowExecutionDecisionAttributes();
    ContinueAsNewWorkflowExecutionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    ContinueAsNewWorkflowExecutionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::move(value); }

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}


    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }

    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }

    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}


    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}

    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}


    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::move(value); }

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p> <note> <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}


    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = std::move(value); }

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul> <note> <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(std::move(value)); return *this;}


    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }


    /**
     * <p>The version of the workflow to start.</p>
     */
    inline const Aws::String& GetWorkflowTypeVersion() const{ return m_workflowTypeVersion; }

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline bool WorkflowTypeVersionHasBeenSet() const { return m_workflowTypeVersionHasBeenSet; }

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline void SetWorkflowTypeVersion(const Aws::String& value) { m_workflowTypeVersionHasBeenSet = true; m_workflowTypeVersion = value; }

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline void SetWorkflowTypeVersion(Aws::String&& value) { m_workflowTypeVersionHasBeenSet = true; m_workflowTypeVersion = std::move(value); }

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline void SetWorkflowTypeVersion(const char* value) { m_workflowTypeVersionHasBeenSet = true; m_workflowTypeVersion.assign(value); }

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithWorkflowTypeVersion(const Aws::String& value) { SetWorkflowTypeVersion(value); return *this;}

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithWorkflowTypeVersion(Aws::String&& value) { SetWorkflowTypeVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the workflow to start.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithWorkflowTypeVersion(const char* value) { SetWorkflowTypeVersion(value); return *this;}


    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::move(value); }

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithLambdaRole(Aws::String&& value) { SetLambdaRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet;

    TaskList m_taskList;
    bool m_taskListHasBeenSet;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet;

    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;

    Aws::String m_workflowTypeVersion;
    bool m_workflowTypeVersionHasBeenSet;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
