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
#include <aws/swf/model/ChildPolicy.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/WorkflowExecution.h>

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
   * <p>Provides details of <code>WorkflowExecutionStarted</code> event.</p>
   */
  class AWS_SWF_API WorkflowExecutionStartedEventAttributes
  {
  public:
    WorkflowExecutionStartedEventAttributes();
    WorkflowExecutionStartedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowExecutionStartedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the workflow execution (if any).</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds; an integer greater than or equal to 0. The
     * value "NONE" can be used to specify unlimited duration.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}

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
    inline WorkflowExecutionStartedEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

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
    inline WorkflowExecutionStartedEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type of this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(value); return *this;}

    
    inline WorkflowExecutionStartedEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}

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
    inline void SetContinuedExecutionRunId(const Aws::String& value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId = value; }

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline void SetContinuedExecutionRunId(Aws::String&& value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId = value; }

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
    inline WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(Aws::String&& value) { SetContinuedExecutionRunId(value); return *this;}

    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(const char* value) { SetContinuedExecutionRunId(value); return *this;}

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member is not set if the workflow execution was not started by a workflow.</p>
     */
    inline const WorkflowExecution& GetParentWorkflowExecution() const{ return m_parentWorkflowExecution; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member is not set if the workflow execution was not started by a workflow.</p>
     */
    inline void SetParentWorkflowExecution(const WorkflowExecution& value) { m_parentWorkflowExecutionHasBeenSet = true; m_parentWorkflowExecution = value; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member is not set if the workflow execution was not started by a workflow.</p>
     */
    inline void SetParentWorkflowExecution(WorkflowExecution&& value) { m_parentWorkflowExecutionHasBeenSet = true; m_parentWorkflowExecution = value; }

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member is not set if the workflow execution was not started by a workflow.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentWorkflowExecution(const WorkflowExecution& value) { SetParentWorkflowExecution(value); return *this;}

    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member is not set if the workflow execution was not started by a workflow.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentWorkflowExecution(WorkflowExecution&& value) { SetParentWorkflowExecution(value); return *this;}

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetParentInitiatedEventId() const{ return m_parentInitiatedEventId; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetParentInitiatedEventId(long long value) { m_parentInitiatedEventIdHasBeenSet = true; m_parentInitiatedEventId = value; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithParentInitiatedEventId(long long value) { SetParentInitiatedEventId(value); return *this;}

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline WorkflowExecutionStartedEventAttributes& WithLambdaRole(Aws::String&& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
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
    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;
    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;
    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;
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
