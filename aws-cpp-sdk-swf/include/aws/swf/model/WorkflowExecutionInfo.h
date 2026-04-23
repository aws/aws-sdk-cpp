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
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/swf/model/ExecutionStatus.h>
#include <aws/swf/model/CloseStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a workflow execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecutionInfo
  {
  public:
    WorkflowExecutionInfo();
    WorkflowExecutionInfo(Aws::Utils::Json::JsonView jsonValue);
    WorkflowExecutionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline const WorkflowExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }

    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline void SetExecution(const WorkflowExecution& value) { m_executionHasBeenSet = true; m_execution = value; }

    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline void SetExecution(WorkflowExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }

    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline WorkflowExecutionInfo& WithExecution(const WorkflowExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>The workflow execution this information is about.</p>
     */
    inline WorkflowExecutionInfo& WithExecution(WorkflowExecution&& value) { SetExecution(std::move(value)); return *this;}


    /**
     * <p>The type of the workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of the workflow execution.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The type of the workflow execution.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The type of the workflow execution.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The type of the workflow execution.</p>
     */
    inline WorkflowExecutionInfo& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of the workflow execution.</p>
     */
    inline WorkflowExecutionInfo& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The time when the execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The time when the execution was started.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The time when the execution was started.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The time when the execution was started.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The time when the execution was started.</p>
     */
    inline WorkflowExecutionInfo& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The time when the execution was started.</p>
     */
    inline WorkflowExecutionInfo& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline const Aws::Utils::DateTime& GetCloseTimestamp() const{ return m_closeTimestamp; }

    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline bool CloseTimestampHasBeenSet() const { return m_closeTimestampHasBeenSet; }

    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline void SetCloseTimestamp(const Aws::Utils::DateTime& value) { m_closeTimestampHasBeenSet = true; m_closeTimestamp = value; }

    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline void SetCloseTimestamp(Aws::Utils::DateTime&& value) { m_closeTimestampHasBeenSet = true; m_closeTimestamp = std::move(value); }

    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline WorkflowExecutionInfo& WithCloseTimestamp(const Aws::Utils::DateTime& value) { SetCloseTimestamp(value); return *this;}

    /**
     * <p>The time when the workflow execution was closed. Set only if the execution
     * status is CLOSED.</p>
     */
    inline WorkflowExecutionInfo& WithCloseTimestamp(Aws::Utils::DateTime&& value) { SetCloseTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current status of the execution.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p>The current status of the execution.</p>
     */
    inline WorkflowExecutionInfo& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>The current status of the execution.</p>
     */
    inline WorkflowExecutionInfo& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline const CloseStatus& GetCloseStatus() const{ return m_closeStatus; }

    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline bool CloseStatusHasBeenSet() const { return m_closeStatusHasBeenSet; }

    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline void SetCloseStatus(const CloseStatus& value) { m_closeStatusHasBeenSet = true; m_closeStatus = value; }

    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline void SetCloseStatus(CloseStatus&& value) { m_closeStatusHasBeenSet = true; m_closeStatus = std::move(value); }

    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline WorkflowExecutionInfo& WithCloseStatus(const CloseStatus& value) { SetCloseStatus(value); return *this;}

    /**
     * <p>If the execution status is closed then this specifies how the execution was
     * closed:</p> <ul> <li> <p> <code>COMPLETED</code> – the execution was
     * successfully completed.</p> </li> <li> <p> <code>CANCELED</code> – the execution
     * was canceled.Cancellation allows the implementation to gracefully clean up
     * before the execution is closed.</p> </li> <li> <p> <code>TERMINATED</code> – the
     * execution was force terminated.</p> </li> <li> <p> <code>FAILED</code> – the
     * execution failed to complete.</p> </li> <li> <p> <code>TIMED_OUT</code> – the
     * execution did not complete in the alloted time and was automatically timed
     * out.</p> </li> <li> <p> <code>CONTINUED_AS_NEW</code> – the execution is
     * logically continued. This means the current execution was completed and a new
     * execution was started to carry on the workflow.</p> </li> </ul>
     */
    inline WorkflowExecutionInfo& WithCloseStatus(CloseStatus&& value) { SetCloseStatus(std::move(value)); return *this;}


    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline const WorkflowExecution& GetParent() const{ return m_parent; }

    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }

    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline void SetParent(const WorkflowExecution& value) { m_parentHasBeenSet = true; m_parent = value; }

    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline void SetParent(WorkflowExecution&& value) { m_parentHasBeenSet = true; m_parent = std::move(value); }

    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline WorkflowExecutionInfo& WithParent(const WorkflowExecution& value) { SetParent(value); return *this;}

    /**
     * <p>If this workflow execution is a child of another execution then contains the
     * workflow execution that started this execution.</p>
     */
    inline WorkflowExecutionInfo& WithParent(WorkflowExecution&& value) { SetParent(std::move(value)); return *this;}


    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline WorkflowExecutionInfo& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline WorkflowExecutionInfo& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline WorkflowExecutionInfo& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline WorkflowExecutionInfo& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workflow execution. Tags can be used to
     * identify and list workflow executions of interest through the visibility APIs. A
     * workflow execution can have a maximum of 5 tags.</p>
     */
    inline WorkflowExecutionInfo& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }


    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline bool GetCancelRequested() const{ return m_cancelRequested; }

    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline bool CancelRequestedHasBeenSet() const { return m_cancelRequestedHasBeenSet; }

    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline void SetCancelRequested(bool value) { m_cancelRequestedHasBeenSet = true; m_cancelRequested = value; }

    /**
     * <p>Set to true if a cancellation is requested for this workflow execution.</p>
     */
    inline WorkflowExecutionInfo& WithCancelRequested(bool value) { SetCancelRequested(value); return *this;}

  private:

    WorkflowExecution m_execution;
    bool m_executionHasBeenSet;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet;

    Aws::Utils::DateTime m_closeTimestamp;
    bool m_closeTimestampHasBeenSet;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet;

    CloseStatus m_closeStatus;
    bool m_closeStatusHasBeenSet;

    WorkflowExecution m_parent;
    bool m_parentHasBeenSet;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet;

    bool m_cancelRequested;
    bool m_cancelRequestedHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
