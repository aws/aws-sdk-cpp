/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StepExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

StepExecution::StepExecution() : 
    m_stepNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_onFailureHasBeenSet(false),
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_stepStatus(AutomationExecutionStatus::NOT_SET),
    m_stepStatusHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_stepExecutionIdHasBeenSet(false),
    m_overriddenParametersHasBeenSet(false),
    m_isEnd(false),
    m_isEndHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_isCritical(false),
    m_isCriticalHasBeenSet(false),
    m_validNextStepsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_targetLocationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
}

StepExecution::StepExecution(JsonView jsonValue) : 
    m_stepNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_onFailureHasBeenSet(false),
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_stepStatus(AutomationExecutionStatus::NOT_SET),
    m_stepStatusHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_stepExecutionIdHasBeenSet(false),
    m_overriddenParametersHasBeenSet(false),
    m_isEnd(false),
    m_isEndHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_isCritical(false),
    m_isCriticalHasBeenSet(false),
    m_validNextStepsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_targetLocationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
  *this = jsonValue;
}

StepExecution& StepExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepName"))
  {
    m_stepName = jsonValue.GetString("StepName");

    m_stepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInt64("TimeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnFailure"))
  {
    m_onFailure = jsonValue.GetString("OnFailure");

    m_onFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAttempts"))
  {
    m_maxAttempts = jsonValue.GetInteger("MaxAttempts");

    m_maxAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionStartTime"))
  {
    m_executionStartTime = jsonValue.GetDouble("ExecutionStartTime");

    m_executionStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionEndTime"))
  {
    m_executionEndTime = jsonValue.GetDouble("ExecutionEndTime");

    m_executionEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepStatus"))
  {
    m_stepStatus = AutomationExecutionStatusMapper::GetAutomationExecutionStatusForName(jsonValue.GetString("StepStatus"));

    m_stepStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetString("ResponseCode");

    m_responseCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Map<Aws::String, JsonView> inputsJsonMap = jsonValue.GetObject("Inputs").GetAllObjects();
    for(auto& inputsItem : inputsJsonMap)
    {
      m_inputs[inputsItem.first] = inputsItem.second.AsString();
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Map<Aws::String, JsonView> outputsJsonMap = jsonValue.GetObject("Outputs").GetAllObjects();
    for(auto& outputsItem : outputsJsonMap)
    {
      Aws::Utils::Array<JsonView> automationParameterValueListJsonList = outputsItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueListList;
      automationParameterValueListList.reserve((size_t)automationParameterValueListJsonList.GetLength());
      for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
      {
        automationParameterValueListList.push_back(automationParameterValueListJsonList[automationParameterValueListIndex].AsString());
      }
      m_outputs[outputsItem.first] = std::move(automationParameterValueListList);
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Response"))
  {
    m_response = jsonValue.GetString("Response");

    m_responseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("StepExecutionId");

    m_stepExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverriddenParameters"))
  {
    Aws::Map<Aws::String, JsonView> overriddenParametersJsonMap = jsonValue.GetObject("OverriddenParameters").GetAllObjects();
    for(auto& overriddenParametersItem : overriddenParametersJsonMap)
    {
      Aws::Utils::Array<JsonView> automationParameterValueListJsonList = overriddenParametersItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueListList;
      automationParameterValueListList.reserve((size_t)automationParameterValueListJsonList.GetLength());
      for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
      {
        automationParameterValueListList.push_back(automationParameterValueListJsonList[automationParameterValueListIndex].AsString());
      }
      m_overriddenParameters[overriddenParametersItem.first] = std::move(automationParameterValueListList);
    }
    m_overriddenParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsEnd"))
  {
    m_isEnd = jsonValue.GetBool("IsEnd");

    m_isEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextStep"))
  {
    m_nextStep = jsonValue.GetString("NextStep");

    m_nextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsCritical"))
  {
    m_isCritical = jsonValue.GetBool("IsCritical");

    m_isCriticalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidNextSteps"))
  {
    Aws::Utils::Array<JsonView> validNextStepsJsonList = jsonValue.GetArray("ValidNextSteps");
    for(unsigned validNextStepsIndex = 0; validNextStepsIndex < validNextStepsJsonList.GetLength(); ++validNextStepsIndex)
    {
      m_validNextSteps.push_back(validNextStepsJsonList[validNextStepsIndex].AsString());
    }
    m_validNextStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocation"))
  {
    m_targetLocation = jsonValue.GetObject("TargetLocation");

    m_targetLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggeredAlarms"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmsJsonList = jsonValue.GetArray("TriggeredAlarms");
    for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
    {
      m_triggeredAlarms.push_back(triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject());
    }
    m_triggeredAlarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue StepExecution::Jsonize() const
{
  JsonValue payload;

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("StepName", m_stepName);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInt64("TimeoutSeconds", m_timeoutSeconds);

  }

  if(m_onFailureHasBeenSet)
  {
   payload.WithString("OnFailure", m_onFailure);

  }

  if(m_maxAttemptsHasBeenSet)
  {
   payload.WithInteger("MaxAttempts", m_maxAttempts);

  }

  if(m_executionStartTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionStartTime", m_executionStartTime.SecondsWithMSPrecision());
  }

  if(m_executionEndTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionEndTime", m_executionEndTime.SecondsWithMSPrecision());
  }

  if(m_stepStatusHasBeenSet)
  {
   payload.WithString("StepStatus", AutomationExecutionStatusMapper::GetNameForAutomationExecutionStatus(m_stepStatus));
  }

  if(m_responseCodeHasBeenSet)
  {
   payload.WithString("ResponseCode", m_responseCode);

  }

  if(m_inputsHasBeenSet)
  {
   JsonValue inputsJsonMap;
   for(auto& inputsItem : m_inputs)
   {
     inputsJsonMap.WithString(inputsItem.first, inputsItem.second);
   }
   payload.WithObject("Inputs", std::move(inputsJsonMap));

  }

  if(m_outputsHasBeenSet)
  {
   JsonValue outputsJsonMap;
   for(auto& outputsItem : m_outputs)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(outputsItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(outputsItem.second[automationParameterValueListIndex]);
     }
     outputsJsonMap.WithArray(outputsItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Outputs", std::move(outputsJsonMap));

  }

  if(m_responseHasBeenSet)
  {
   payload.WithString("Response", m_response);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_stepExecutionIdHasBeenSet)
  {
   payload.WithString("StepExecutionId", m_stepExecutionId);

  }

  if(m_overriddenParametersHasBeenSet)
  {
   JsonValue overriddenParametersJsonMap;
   for(auto& overriddenParametersItem : m_overriddenParameters)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(overriddenParametersItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(overriddenParametersItem.second[automationParameterValueListIndex]);
     }
     overriddenParametersJsonMap.WithArray(overriddenParametersItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("OverriddenParameters", std::move(overriddenParametersJsonMap));

  }

  if(m_isEndHasBeenSet)
  {
   payload.WithBool("IsEnd", m_isEnd);

  }

  if(m_nextStepHasBeenSet)
  {
   payload.WithString("NextStep", m_nextStep);

  }

  if(m_isCriticalHasBeenSet)
  {
   payload.WithBool("IsCritical", m_isCritical);

  }

  if(m_validNextStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validNextStepsJsonList(m_validNextSteps.size());
   for(unsigned validNextStepsIndex = 0; validNextStepsIndex < validNextStepsJsonList.GetLength(); ++validNextStepsIndex)
   {
     validNextStepsJsonList[validNextStepsIndex].AsString(m_validNextSteps[validNextStepsIndex]);
   }
   payload.WithArray("ValidNextSteps", std::move(validNextStepsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_targetLocationHasBeenSet)
  {
   payload.WithObject("TargetLocation", m_targetLocation.Jsonize());

  }

  if(m_triggeredAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggeredAlarmsJsonList(m_triggeredAlarms.size());
   for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
   {
     triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject(m_triggeredAlarms[triggeredAlarmsIndex].Jsonize());
   }
   payload.WithArray("TriggeredAlarms", std::move(triggeredAlarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
