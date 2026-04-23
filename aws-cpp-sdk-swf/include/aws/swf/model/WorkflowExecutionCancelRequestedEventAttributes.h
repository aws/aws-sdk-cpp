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
#include <aws/swf/model/WorkflowExecutionCancelRequestedCause.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionCancelRequested</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionCancelRequestedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecutionCancelRequestedEventAttributes
  {
  public:
    WorkflowExecutionCancelRequestedEventAttributes();
    WorkflowExecutionCancelRequestedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    WorkflowExecutionCancelRequestedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline const WorkflowExecution& GetExternalWorkflowExecution() const{ return m_externalWorkflowExecution; }

    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline bool ExternalWorkflowExecutionHasBeenSet() const { return m_externalWorkflowExecutionHasBeenSet; }

    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline void SetExternalWorkflowExecution(const WorkflowExecution& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = value; }

    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline void SetExternalWorkflowExecution(WorkflowExecution&& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = std::move(value); }

    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline WorkflowExecutionCancelRequestedEventAttributes& WithExternalWorkflowExecution(const WorkflowExecution& value) { SetExternalWorkflowExecution(value); return *this;}

    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline WorkflowExecutionCancelRequestedEventAttributes& WithExternalWorkflowExecution(WorkflowExecution&& value) { SetExternalWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this workflow execution.The source event with this ID can be
     * found in the history of the source workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline long long GetExternalInitiatedEventId() const{ return m_externalInitiatedEventId; }

    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this workflow execution.The source event with this ID can be
     * found in the history of the source workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline bool ExternalInitiatedEventIdHasBeenSet() const { return m_externalInitiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this workflow execution.The source event with this ID can be
     * found in the history of the source workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline void SetExternalInitiatedEventId(long long value) { m_externalInitiatedEventIdHasBeenSet = true; m_externalInitiatedEventId = value; }

    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this workflow execution.The source event with this ID can be
     * found in the history of the source workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline WorkflowExecutionCancelRequestedEventAttributes& WithExternalInitiatedEventId(long long value) { SetExternalInitiatedEventId(value); return *this;}


    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline const WorkflowExecutionCancelRequestedCause& GetCause() const{ return m_cause; }

    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline void SetCause(const WorkflowExecutionCancelRequestedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline void SetCause(WorkflowExecutionCancelRequestedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline WorkflowExecutionCancelRequestedEventAttributes& WithCause(const WorkflowExecutionCancelRequestedCause& value) { SetCause(value); return *this;}

    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline WorkflowExecutionCancelRequestedEventAttributes& WithCause(WorkflowExecutionCancelRequestedCause&& value) { SetCause(std::move(value)); return *this;}

  private:

    WorkflowExecution m_externalWorkflowExecution;
    bool m_externalWorkflowExecutionHasBeenSet;

    long long m_externalInitiatedEventId;
    bool m_externalInitiatedEventIdHasBeenSet;

    WorkflowExecutionCancelRequestedCause m_cause;
    bool m_causeHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
