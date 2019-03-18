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
   * <p>Provides the details of the <code>ExternalWorkflowExecutionSignaled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ExternalWorkflowExecutionSignaledEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ExternalWorkflowExecutionSignaledEventAttributes
  {
  public:
    ExternalWorkflowExecutionSignaledEventAttributes();
    ExternalWorkflowExecutionSignaledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ExternalWorkflowExecutionSignaledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }

    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }

    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = value; }

    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::move(value); }

    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline ExternalWorkflowExecutionSignaledEventAttributes& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}

    /**
     * <p>The external workflow execution that the signal was delivered to.</p>
     */
    inline ExternalWorkflowExecutionSignaledEventAttributes& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline ExternalWorkflowExecutionSignaledEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}

  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
