﻿/*
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
#include <aws/ssm/model/FailureDetails.h>
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
     * <p>The timeout seconds of the step.</p>
     */
    inline long long GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>The timeout seconds of the step.</p>
     */
    inline void SetTimeoutSeconds(long long value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>The timeout seconds of the step.</p>
     */
    inline StepExecution& WithTimeoutSeconds(long long value) { SetTimeoutSeconds(value); return *this;}


    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline const Aws::String& GetOnFailure() const{ return m_onFailure; }

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline void SetOnFailure(const Aws::String& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline void SetOnFailure(Aws::String&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline void SetOnFailure(const char* value) { m_onFailureHasBeenSet = true; m_onFailure.assign(value); }

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline StepExecution& WithOnFailure(const Aws::String& value) { SetOnFailure(value); return *this;}

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline StepExecution& WithOnFailure(Aws::String&& value) { SetOnFailure(std::move(value)); return *this;}

    /**
     * <p>The action to take if the step fails. The default value is Abort.</p>
     */
    inline StepExecution& WithOnFailure(const char* value) { SetOnFailure(value); return *this;}


    /**
     * <p>The maximum number of tries to run the action of the step. The default value
     * is 1.</p>
     */
    inline int GetMaxAttempts() const{ return m_maxAttempts; }

    /**
     * <p>The maximum number of tries to run the action of the step. The default value
     * is 1.</p>
     */
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }

    /**
     * <p>The maximum number of tries to run the action of the step. The default value
     * is 1.</p>
     */
    inline StepExecution& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}


    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field is not populated.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field is not populated.</p>
     */
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field is not populated.</p>
     */
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field is not populated.</p>
     */
    inline StepExecution& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}

    /**
     * <p>If a step has begun execution, this contains the time the step started. If
     * the step is in Pending status, this field is not populated.</p>
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
     * <p>The execution status for this step. Valid values include: Pending,
     * InProgress, Success, Cancelled, Failed, and TimedOut.</p>
     */
    inline const AutomationExecutionStatus& GetStepStatus() const{ return m_stepStatus; }

    /**
     * <p>The execution status for this step. Valid values include: Pending,
     * InProgress, Success, Cancelled, Failed, and TimedOut.</p>
     */
    inline void SetStepStatus(const AutomationExecutionStatus& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }

    /**
     * <p>The execution status for this step. Valid values include: Pending,
     * InProgress, Success, Cancelled, Failed, and TimedOut.</p>
     */
    inline void SetStepStatus(AutomationExecutionStatus&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }

    /**
     * <p>The execution status for this step. Valid values include: Pending,
     * InProgress, Success, Cancelled, Failed, and TimedOut.</p>
     */
    inline StepExecution& WithStepStatus(const AutomationExecutionStatus& value) { SetStepStatus(value); return *this;}

    /**
     * <p>The execution status for this step. Valid values include: Pending,
     * InProgress, Success, Cancelled, Failed, and TimedOut.</p>
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


    /**
     * <p>Information about the Automation failure.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Information about the Automation failure.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Information about the Automation failure.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Information about the Automation failure.</p>
     */
    inline StepExecution& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Information about the Automation failure.</p>
     */
    inline StepExecution& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline StepExecution& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline StepExecution& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline StepExecution& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}


    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOverriddenParameters() const{ return m_overriddenParameters; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline void SetOverriddenParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters = value; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline void SetOverriddenParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters = std::move(value); }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& WithOverriddenParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOverriddenParameters(value); return *this;}

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& WithOverriddenParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOverriddenParameters(std::move(value)); return *this;}

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, value); return *this; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A user-specified list of parameters to override when executing a step.</p>
     */
    inline StepExecution& AddOverriddenParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_overriddenParametersHasBeenSet = true; m_overriddenParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    long long m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;

    Aws::String m_onFailure;
    bool m_onFailureHasBeenSet;

    int m_maxAttempts;
    bool m_maxAttemptsHasBeenSet;

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

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_overriddenParameters;
    bool m_overriddenParametersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
