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
#include <aws/swf/model/SignalExternalWorkflowExecutionFailedCause.h>

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
   * <p>Provides details of the <code>SignalExternalWorkflowExecutionFailed</code>
   * event.</p>
   */
  class AWS_SWF_API SignalExternalWorkflowExecutionFailedEventAttributes
  {
  public:
    SignalExternalWorkflowExecutionFailedEventAttributes();
    SignalExternalWorkflowExecutionFailedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    SignalExternalWorkflowExecutionFailedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(Aws::String&& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(const char* value) { SetRunId(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline const SignalExternalWorkflowExecutionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(const SignalExternalWorkflowExecutionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(SignalExternalWorkflowExecutionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithCause(const SignalExternalWorkflowExecutionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithCause(SignalExternalWorkflowExecutionFailedCause&& value) { SetCause(value); return *this;}

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
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

    
    inline const Aws::String& GetControl() const{ return m_control; }

    
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = value; }

    
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(Aws::String&& value) { SetControl(value); return *this;}

    
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:
    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;
    Aws::String m_runId;
    bool m_runIdHasBeenSet;
    SignalExternalWorkflowExecutionFailedCause m_cause;
    bool m_causeHasBeenSet;
    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
