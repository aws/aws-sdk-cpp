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
#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
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
   * <p>Provides the details of the <code>ChildWorkflowExecutionTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ChildWorkflowExecutionTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ChildWorkflowExecutionTimedOutEventAttributes
  {
  public:
    ChildWorkflowExecutionTimedOutEventAttributes();
    ChildWorkflowExecutionTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ChildWorkflowExecutionTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }

    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }

    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = value; }

    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::move(value); }

    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}

    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline const WorkflowExecutionTimeoutType& GetTimeoutType() const{ return m_timeoutType; }

    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }

    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline void SetTimeoutType(const WorkflowExecutionTimeoutType& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline void SetTimeoutType(WorkflowExecutionTimeoutType&& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = std::move(value); }

    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithTimeoutType(const WorkflowExecutionTimeoutType& value) { SetTimeoutType(value); return *this;}

    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithTimeoutType(WorkflowExecutionTimeoutType&& value) { SetTimeoutType(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}


    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;

    WorkflowExecutionTimeoutType m_timeoutType;
    bool m_timeoutTypeHasBeenSet;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
