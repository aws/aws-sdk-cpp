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
   * <p>Provides details of the <code>SignalExternalWorkflowExecution</code>
   * decision.</p> <p><b>Access Control</b></p> <p>You can use IAM policies to
   * control this decision's access to Amazon SWF resources as follows:</p> <ul>
   * <li>Use a <code>Resource</code> element with the domain name to limit the action
   * to only specified domains.</li> <li>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</li> <li>You cannot use an IAM policy to
   * constrain this action's parameters.</li> </ul> <p>If the caller does not have
   * sufficient permissions to invoke the action, or the parameter values fall
   * outside the specified constraints, the action fails. The associated event
   * attribute's <b>cause</b> parameter will be set to OPERATION_NOT_PERMITTED. For
   * details and example IAM policies, see <a
   * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a>.</p>
   */
  class AWS_SWF_API SignalExternalWorkflowExecutionDecisionAttributes
  {
  public:
    SignalExternalWorkflowExecutionDecisionAttributes();
    SignalExternalWorkflowExecutionDecisionAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    SignalExternalWorkflowExecutionDecisionAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(value); return *this;}

    /**
     * <p><b>Required.</b> The <code>workflowId</code> of the workflow execution to be
     * signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithRunId(Aws::String&& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the workflow execution to be signaled.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithRunId(const char* value) { SetRunId(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = value; }

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithSignalName(Aws::String&& value) { SetSignalName(value); return *this;}

    /**
     * <p><b>Required.</b> The name of the signal.The target workflow execution will
     * use the signal name and input to process the signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithSignalName(const char* value) { SetSignalName(value); return *this;}

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p><i>Optional.</i> Input data to be provided with the signal. The target
     * workflow execution will use the signal name and input data to process the
     * signal.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithControl(Aws::String&& value) { SetControl(value); return *this;}

    /**
     * <p><i>Optional.</i> Data attached to the event that can be used by the decider
     * in subsequent decision tasks.</p>
     */
    inline SignalExternalWorkflowExecutionDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:
    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;
    Aws::String m_runId;
    bool m_runIdHasBeenSet;
    Aws::String m_signalName;
    bool m_signalNameHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
