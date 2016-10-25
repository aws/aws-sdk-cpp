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
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/ChildPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
   * <p>Provides details of the <code>StartChildWorkflowExecutionInitiated</code>
   * event.</p>
   */
  class AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes
  {
  public:
    StartChildWorkflowExecutionInitiatedEventAttributes();
    StartChildWorkflowExecutionInitiatedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    StartChildWorkflowExecutionInitiatedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(Aws::String&& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks. This data is not sent to the activity.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs provided to the child workflow execution (if any).</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution is not closed within this duration, it will be timed out and force
     * terminated.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(value); return *this;}

    /**
     * <p><i>Optional.</i> The priority assigned for the decision tasks for this
     * workflow execution. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }

    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }

    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li><b>TERMINATE:</b> the child executions will be terminated.</li>
     * <li><b>REQUEST_CANCEL:</b> a request to cancel will be attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</li> <li><b>ABANDON:</b> no
     * action will be taken. The child executions will continue to run.</li> </ul>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds; an integer greater than
     * or equal to 0. The value "NONE" can be used to specify unlimited duration.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

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
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(Aws::String&& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role attached to this workflow execution to use when invoking AWS
     * Lambda functions.</p>
     */
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}

  private:
    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;
    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;
    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet;
    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;
    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
