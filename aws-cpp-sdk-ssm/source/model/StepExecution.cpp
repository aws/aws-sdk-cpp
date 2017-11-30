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
    m_overriddenParametersHasBeenSet(false)
{
}

StepExecution::StepExecution(const JsonValue& jsonValue) : 
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
    m_overriddenParametersHasBeenSet(false)
{
  *this = jsonValue;
}

StepExecution& StepExecution::operator =(const JsonValue& jsonValue)
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
    Aws::Map<Aws::String, JsonValue> inputsJsonMap = jsonValue.GetObject("Inputs").GetAllObjects();
    for(auto& inputsItem : inputsJsonMap)
    {
      m_inputs[inputsItem.first] = inputsItem.second.AsString();
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Map<Aws::String, JsonValue> outputsJsonMap = jsonValue.GetObject("Outputs").GetAllObjects();
    for(auto& outputsItem : outputsJsonMap)
    {
      Array<JsonValue> automationParameterValueListJsonList = outputsItem.second.AsArray();
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
    Aws::Map<Aws::String, JsonValue> overriddenParametersJsonMap = jsonValue.GetObject("OverriddenParameters").GetAllObjects();
    for(auto& overriddenParametersItem : overriddenParametersJsonMap)
    {
      Array<JsonValue> automationParameterValueListJsonList = overriddenParametersItem.second.AsArray();
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
     Array<JsonValue> automationParameterValueListJsonList(outputsItem.second.size());
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
     Array<JsonValue> automationParameterValueListJsonList(overriddenParametersItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(overriddenParametersItem.second[automationParameterValueListIndex]);
     }
     overriddenParametersJsonMap.WithArray(overriddenParametersItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("OverriddenParameters", std::move(overriddenParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
