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
   * <p>Provides details of the
   * <code>RequestCancelExternalWorkflowExecutionInitiated</code> event.</p>
   */
  class AWS_SWF_API RequestCancelExternalWorkflowExecutionInitiatedEventAttributes
  {
  public:
    RequestCancelExternalWorkflowExecutionInitiatedEventAttributes();
    RequestCancelExternalWorkflowExecutionInitiatedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution to be
     * canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(Aws::String&& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution to be canceled.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(const char* value) { SetRunId(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the
     * <code>RequestCancelExternalWorkflowExecution</code> decision for this
     * cancellation request. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the
     * <code>RequestCancelExternalWorkflowExecution</code> decision for this
     * cancellation request. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the
     * <code>RequestCancelExternalWorkflowExecution</code> decision for this
     * cancellation request. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithControl(Aws::String&& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent workflow tasks.</p>
     */
    inline RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:
    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;
    Aws::String m_runId;
    bool m_runIdHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
