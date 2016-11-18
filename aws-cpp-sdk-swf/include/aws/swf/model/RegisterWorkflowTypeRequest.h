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
#include <aws/swf/model/ChildPolicy.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API RegisterWorkflowTypeRequest : public SWFRequest
  {
  public:
    RegisterWorkflowTypeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not start or
     * end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the workflow type.</p> <note>The workflow type consists of the
     * name and version, the combination of which must be unique within the domain. To
     * get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</note> <p>The specified string must not start
     * or end with whitespace. It must not contain a <code>:</code> (colon),
     * <code>/</code> (slash), <code>|</code> (vertical bar), or any control characters
     * (\u0000-\u001f | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterWorkflowTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. The value "NONE"
     * can be used to specify unlimited duration.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline const Aws::String& GetDefaultExecutionStartToCloseTimeout() const{ return m_defaultExecutionStartToCloseTimeout; }

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const Aws::String& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(Aws::String&& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = value; }

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline void SetDefaultExecutionStartToCloseTimeout(const char* value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout.assign(value); }

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultExecutionStartToCloseTimeout(const Aws::String& value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultExecutionStartToCloseTimeout(Aws::String&& value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> action or
     * <code>StartChildWorkflowExecution</code> decision.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit will always
     * cause the workflow execution to time out.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultExecutionStartToCloseTimeout(const char* value) { SetDefaultExecutionStartToCloseTimeout(value); return *this;}

    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * is not provided when starting the execution through the
     * <a>StartWorkflowExecution</a> action or <code>StartChildWorkflowExecution</code>
     * decision.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }

    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * is not provided when starting the execution through the
     * <a>StartWorkflowExecution</a> action or <code>StartChildWorkflowExecution</code>
     * decision.</p>
     */
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * is not provided when starting the execution through the
     * <a>StartWorkflowExecution</a> action or <code>StartChildWorkflowExecution</code>
     * decision.</p>
     */
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }

    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * is not provided when starting the execution through the
     * <a>StartWorkflowExecution</a> action or <code>StartChildWorkflowExecution</code>
     * decision.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * is not provided when starting the execution through the
     * <a>StartWorkflowExecution</a> action or <code>StartChildWorkflowExecution</code>
     * decision.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(value); return *this;}

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then "0" will be used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon Simple Workflow Developer Guide</i>.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}

    /**
     * <p>If set, specifies the default policy to use for the child workflow executions
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
     * <p>If set, specifies the default policy to use for the child workflow executions
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
     * <p>If set, specifies the default policy to use for the child workflow executions
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
     * <p>If set, specifies the default policy to use for the child workflow executions
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
    inline RegisterWorkflowTypeRequest& WithDefaultChildPolicy(const ChildPolicy& value) { SetDefaultChildPolicy(value); return *this;}

    /**
     * <p>If set, specifies the default policy to use for the child workflow executions
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
    inline RegisterWorkflowTypeRequest& WithDefaultChildPolicy(ChildPolicy&& value) { SetDefaultChildPolicy(value); return *this;}

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline const Aws::String& GetDefaultLambdaRole() const{ return m_defaultLambdaRole; }

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline void SetDefaultLambdaRole(const Aws::String& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = value; }

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline void SetDefaultLambdaRole(Aws::String&& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = value; }

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline void SetDefaultLambdaRole(const char* value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole.assign(value); }

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultLambdaRole(const Aws::String& value) { SetDefaultLambdaRole(value); return *this;}

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultLambdaRole(Aws::String&& value) { SetDefaultLambdaRole(value); return *this;}

    /**
     * <p>The ARN of the default IAM role to use when a workflow execution of this type
     * invokes AWS Lambda functions.</p> <p>This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> and
     * <code>ContinueAsNewWorkflowExecution</code> decision.</p>
     */
    inline RegisterWorkflowTypeRequest& WithDefaultLambdaRole(const char* value) { SetDefaultLambdaRole(value); return *this;}

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
