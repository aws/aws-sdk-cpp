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
#include <aws/swf/model/ChildPolicy.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/WorkflowExecution.h>
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
   * <p>Provides details of <code>WorkflowExecutionStarted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecutionStartedEventAttributes
  {
  public:
    WorkflowExecutionStartedEventAttributes();
    WorkflowExecutionStartedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    WorkflowExecutionStartedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::move(value); }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}


    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::move(value); }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}


    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = std::move(value); }

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline WorkflowExecutionStartedEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline WorkflowExecutionStartedEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}


    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}

    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}


    /**
     * <p>The workflow type of this execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }


    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline const Aws::String& GetContinuedExecutionRunId() const{ return m_continuedExecutionRunId; }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline bool ContinuedExecutionRunIdHasBeenSet() const { return m_continuedExecutionRunIdHasBeenSet; }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline void SetContinuedExecutionRunId(const Aws::String& value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId = value; }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline void SetContinuedExecutionRunId(Aws::String&& value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId = std::move(value); }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline void SetContinuedExecutionRunId(const char* value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId.assign(value); }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(const Aws::String& value) { SetContinuedExecutionRunId(value); return *this;}

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(Aws::String&& value) { SetContinuedExecutionRunId(std::move(value)); return *this;}

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(const char* value) { SetContinuedExecutionRunId(value); return *this;}


    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline const WorkflowExecution& GetParentWorkflowExecution() const{ return m_parentWorkflowExecution; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline bool ParentWorkflowExecutionHasBeenSet() const { return m_parentWorkflowExecutionHasBeenSet; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline void SetParentWorkflowExecution(const WorkflowExecution& value) { m_parentWorkflowExecutionHasBeenSet = true; m_parentWorkflowExecution = value; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline void SetParentWorkflowExecution(WorkflowExecution&& value) { m_parentWorkflowExecutionHasBeenSet = true; m_parentWorkflowExecution = std::move(value); }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentWorkflowExecution(const WorkflowExecution& value) { SetParentWorkflowExecution(value); return *this;}

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentWorkflowExecution(WorkflowExecution&& value) { SetParentWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetParentInitiatedEventId() const{ return m_parentInitiatedEventId; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline bool ParentInitiatedEventIdHasBeenSet() const { return m_parentInitiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetParentInitiatedEventId(long long value) { m_parentInitiatedEventIdHasBeenSet = true; m_parentInitiatedEventId = value; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentInitiatedEventId(long long value) { SetParentInitiatedEventId(value); return *this;}


    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::move(value); }

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithLambdaRole(Aws::String&& value) { SetLambdaRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet;

    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;

    TaskList m_taskList;
    bool m_taskListHasBeenSet;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;

    Aws::String m_continuedExecutionRunId;
    bool m_continuedExecutionRunIdHasBeenSet;

    WorkflowExecution m_parentWorkflowExecution;
    bool m_parentWorkflowExecutionHasBeenSet;

    long long m_parentInitiatedEventId;
    bool m_parentInitiatedEventIdHasBeenSet;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
