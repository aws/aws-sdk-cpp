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
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/TaskList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/ChildPolicy.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API StartWorkflowExecutionRequest : public SWFRequest
  {
  public:
    StartWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWorkflowExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline StartWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline StartWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain in which the workflow execution is created.</p>
     */
    inline StartWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline StartWorkflowExecutionRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline StartWorkflowExecutionRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The user defined identifier associated with the workflow execution. You can
     * use this to associate a custom identifier with the workflow execution. You may
     * specify the same identifier if a workflow execution is logically a
     * <i>restart</i> of a previous execution. You cannot have two open workflow
     * executions with the same <code>workflowId</code> at the same time within the
     * same domain.</p> <p>The specified string must not start or end with whitespace.
     * It must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must not
     * <i>be</i> the literal string <code>arn</code>.</p>
     */
    inline StartWorkflowExecutionRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The type of the workflow to start.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of the workflow to start.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The type of the workflow to start.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The type of the workflow to start.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The type of the workflow to start.</p>
     */
    inline StartWorkflowExecutionRequest& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of the workflow to start.</p>
     */
    inline StartWorkflowExecutionRequest& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }

    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }

    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The task list to use for the decision tasks generated for this workflow
     * execution. This overrides the <code>defaultTaskList</code> specified when
     * registering the workflow type.</p> <note> <p>A task list for this workflow
     * execution must be specified either as a default for the workflow type or through
     * this parameter. If neither this parameter is set nor a default task list was
     * specified at registration time then a fault is returned.</p> </note> <p>The
     * specified string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must not <i>be</i> the literal string
     * <code>arn</code>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}


    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}

    /**
     * <p>The task priority to use for this workflow execution. This overrides any
     * default priority that was assigned when the workflow type was registered. If not
     * set, then the default task priority for the workflow type is used. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}


    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline StartWorkflowExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline StartWorkflowExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input for the workflow execution. This is a free form string which should
     * be meaningful to the workflow you are starting. This <code>input</code> is made
     * available to the new workflow execution in the
     * <code>WorkflowExecutionStarted</code> history event.</p>
     */
    inline StartWorkflowExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::move(value); }

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline StartWorkflowExecutionRequest& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline StartWorkflowExecutionRequest& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>The total duration for this workflow execution. This overrides the
     * defaultExecutionStartToCloseTimeout specified when registering the workflow
     * type.</p> <p>The duration is specified in seconds; an integer greater than or
     * equal to <code>0</code>. Exceeding this limit causes the workflow execution to
     * time out. Unlike some of the other timeout parameters in Amazon SWF, you cannot
     * specify a value of "NONE" for this timeout; there is a one-year max limit on the
     * time that a workflow execution can run.</p> <note> <p>An execution
     * start-to-close timeout must be specified either through this parameter or as a
     * default when the workflow type is registered. If neither this parameter nor a
     * default execution start-to-close timeout is specified, a fault is returned.</p>
     * </note>
     */
    inline StartWorkflowExecutionRequest& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}


    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline StartWorkflowExecutionRequest& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline StartWorkflowExecutionRequest& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline StartWorkflowExecutionRequest& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags to associate with the workflow execution. You can specify a
     * maximum of 5 tags. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline StartWorkflowExecutionRequest& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }


    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::move(value); }

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(std::move(value)); return *this;}

    /**
     * <p>Specifies the maximum duration of decision tasks for this workflow execution.
     * This parameter overrides the <code>defaultTaskStartToCloseTimout</code>
     * specified when registering the workflow type using
     * <a>RegisterWorkflowType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p> <note> <p>A task start-to-close timeout for
     * this workflow execution must be specified either as a default for the workflow
     * type or through this parameter. If neither this parameter is set nor a default
     * task start-to-close timeout was specified at registration time then a fault is
     * returned.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}


    /**
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
    inline StartWorkflowExecutionRequest& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}

    /**
     * <p>If set, specifies the policy to use for the child workflow executions of this
     * workflow execution if it is terminated, by calling the
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
    inline StartWorkflowExecutionRequest& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(std::move(value)); return *this;}


    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::move(value); }

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithLambdaRole(Aws::String&& value) { SetLambdaRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role to attach to this workflow execution.</p> <note> <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * attach an IAM role, any attempt to schedule a Lambda task fails. This results in
     * a <code>ScheduleLambdaFunctionFailed</code> history event. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> </note>
     */
    inline StartWorkflowExecutionRequest& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;

    TaskList m_taskList;
    bool m_taskListHasBeenSet;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet;

    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
