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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Detailed information about an the execution state of an Automation
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StepExecution">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API StepExecution
  {
  public:
    StepExecution();
    StepExecution(const Aws::Utils::Json::JsonValue& jsonValue);
    StepExecution& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of this execution step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p>The name of this execution step.</p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p>The name of this execution step.</p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p>The name of this execution step.</p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p>The name of this execution step.</p>
     */
    inline StepExecution& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p>The name of this execution step.</p>
     */
    inline StepExecution& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p>The name of this execution step.</p>
     */
    inline StepExecution& WithStepName(const char* value) { SetStepName(value); return *this;}

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline StepExecution& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline StepExecution& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action this step performs. The action determines the behavior of the
     * step.</p>
     */
    inline StepExecution& WithAction(const char* value) { SetAction(value); return *this;}

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in <code>Pending</code> status, this field is not populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in <code>Pending</code> status, this field is not populated.</p>
     */
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in <code>Pending</code> status, this field is not populated.</p>
     */
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in <code>Pending</code> status, this field is not populated.</p>
     */
    inline StepExecution& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in <code>Pending</code> status, this field is not populated.</p>
     */
    inline StepExecution& WithExecutionStartTime(Aws::Utils::DateTime&& value) { SetExecutionStartTime(std::move(value)); return *this;}

    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step has not yet concluded, this field is not populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const{ return m_executionEndTime; }

    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step has not yet concluded, this field is not populated.</p>
     */
    inline void SetExecutionEndTime(const Aws::Utils::DateTime& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = value; }

    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step has not yet concluded, this field is not populated.</p>
     */
    inline void SetExecutionEndTime(Aws::Utils::DateTime&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::move(value); }

    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step has not yet concluded, this field is not populated.</p>
     */
    inline StepExecution& WithExecutionEndTime(const Aws::Utils::DateTime& value) { SetExecutionEndTime(value); return *this;}

    /**
     * <p>If a step has finished execution, this contains the time the execution ended.
     * If the step has not yet concluded, this field is not populated.</p>
     */
    inline StepExecution& WithExecutionEndTime(Aws::Utils::DateTime&& value) { SetExecutionEndTime(std::move(value)); return *this;}

    /**
     * <p>The execution status for this step. Valid values include:
     * <code>Pending</code>, <code>InProgress</code>, <code>Success</code>,
     * <code>Cancelled</code>, <code>Failed</code>, and <code>TimedOut</code>.</p>
     */
    inline const AutomationExecutionStatus& GetStepStatus() const{ return m_stepStatus; }

    /**
     * <p>The execution status for this step. Valid values include:
     * <code>Pending</code>, <code>InProgress</code>, <code>Success</code>,
     * <code>Cancelled</code>, <code>Failed</code>, and <code>TimedOut</code>.</p>
     */
    inline void SetStepStatus(const AutomationExecutionStatus& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }

    /**
     * <p>The execution status for this step. Valid values include:
     * <code>Pending</code>, <code>InProgress</code>, <code>Success</code>,
     * <code>Cancelled</code>, <code>Failed</code>, and <code>TimedOut</code>.</p>
     */
    inline void SetStepStatus(AutomationExecutionStatus&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }

    /**
     * <p>The execution status for this step. Valid values include:
     * <code>Pending</code>, <code>InProgress</code>, <code>Success</code>,
     * <code>Cancelled</code>, <code>Failed</code>, and <code>TimedOut</code>.</p>
     */
    inline StepExecution& WithStepStatus(const AutomationExecutionStatus& value) { SetStepStatus(value); return *this;}

    /**
     * <p>The execution status for this step. Valid values include:
     * <code>Pending</code>, <code>InProgress</code>, <code>Success</code>,
     * <code>Cancelled</code>, <code>Failed</code>, and <code>TimedOut</code>.</p>
     */
    inline StepExecution& WithStepStatus(AutomationExecutionStatus&& value) { SetStepStatus(std::move(value)); return *this;}

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline void SetResponseCode(const Aws::String& value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline void SetResponseCode(Aws::String&& value) { m_responseCodeHasBeenSet = true; m_responseCode = std::move(value); }

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline void SetResponseCode(const char* value) { m_responseCodeHasBeenSet = true; m_responseCode.assign(value); }

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline StepExecution& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline StepExecution& WithResponseCode(Aws::String&& value) { SetResponseCode(std::move(value)); return *this;}

    /**
     * <p>The response code returned by the execution of the step.</p>
     */
    inline StepExecution& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline void SetInputs(const Aws::Map<Aws::String, Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline void SetInputs(Aws::Map<Aws::String, Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& WithInputs(const Aws::Map<Aws::String, Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& WithInputs(Aws::Map<Aws::String, Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(const Aws::String& key, const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, value); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(Aws::String&& key, const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(const Aws::String& key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(Aws::String&& key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(const char* key, Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(Aws::String&& key, const char* value) { m_inputsHasBeenSet = true; m_inputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Fully-resolved values passed into the step before execution.</p>
     */
    inline StepExecution& AddInputs(const char* key, const char* value) { m_inputsHasBeenSet = true; m_inputs.emplace(key, value); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Returned values from the execution of the step.</p>
     */
    inline StepExecution& AddOutputs(const char* key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline const Aws::String& GetResponse() const{ return m_response; }

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline void SetResponse(const Aws::String& value) { m_responseHasBeenSet = true; m_response = value; }

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline void SetResponse(Aws::String&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline void SetResponse(const char* value) { m_responseHasBeenSet = true; m_response.assign(value); }

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline StepExecution& WithResponse(const Aws::String& value) { SetResponse(value); return *this;}

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline StepExecution& WithResponse(Aws::String&& value) { SetResponse(std::move(value)); return *this;}

    /**
     * <p>A message associated with the response code for an execution.</p>
     */
    inline StepExecution& WithResponse(const char* value) { SetResponse(value); return *this;}

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline StepExecution& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline StepExecution& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>If a step failed, this message explains why the execution failed.</p>
     */
    inline StepExecution& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:
    Aws::String m_stepName;
    bool m_stepNameHasBeenSet;
    Aws::String m_action;
    bool m_actionHasBeenSet;
    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet;
    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet;
    AutomationExecutionStatus m_stepStatus;
    bool m_stepStatusHasBeenSet;
    Aws::String m_responseCode;
    bool m_responseCodeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_inputs;
    bool m_inputsHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet;
    Aws::String m_response;
    bool m_responseHasBeenSet;
    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
