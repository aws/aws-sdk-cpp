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
   * <p>Provides the details of the
   * <code>SignalExternalWorkflowExecutionInitiated</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalExternalWorkflowExecutionInitiatedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API SignalExternalWorkflowExecutionInitiatedEventAttributes
  {
  public:
    SignalExternalWorkflowExecutionInitiatedEventAttributes();
    SignalExternalWorkflowExecutionInitiatedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    SignalExternalWorkflowExecutionInitiatedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution to send the signal
     * to.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The name of the signal.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }

    /**
     * <p>The name of the signal.</p>
     */
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = std::move(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithSignalName(Aws::String&& value) { SetSignalName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithSignalName(const char* value) { SetSignalName(value); return *this;}


    /**
     * <p>The input provided to the signal.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The input provided to the signal.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The input provided to the signal.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The input provided to the signal.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The input provided to the signal.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The input provided to the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The input provided to the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The input provided to the signal.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}


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
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

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
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}


    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionInitiatedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;

    Aws::String m_control;
    bool m_controlHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
