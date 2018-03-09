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

#include <aws/ssm/model/AutomationExecutionMetadata.h>
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

AutomationExecutionMetadata::AutomationExecutionMetadata() : 
    m_automationExecutionIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_automationExecutionStatus(AutomationExecutionStatus::NOT_SET),
    m_automationExecutionStatusHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_executedByHasBeenSet(false),
    m_logFileHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_mode(ExecutionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_parentAutomationExecutionIdHasBeenSet(false),
    m_currentStepNameHasBeenSet(false),
    m_currentActionHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_targetParameterNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

AutomationExecutionMetadata::AutomationExecutionMetadata(const JsonValue& jsonValue) : 
    m_automationExecutionIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_automationExecutionStatus(AutomationExecutionStatus::NOT_SET),
    m_automationExecutionStatusHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_executedByHasBeenSet(false),
    m_logFileHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_mode(ExecutionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_parentAutomationExecutionIdHasBeenSet(false),
    m_currentStepNameHasBeenSet(false),
    m_currentActionHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_targetParameterNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationExecutionMetadata& AutomationExecutionMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AutomationExecutionId"))
  {
    m_automationExecutionId = jsonValue.GetString("AutomationExecutionId");

    m_automationExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomationExecutionStatus"))
  {
    m_automationExecutionStatus = AutomationExecutionStatusMapper::GetAutomationExecutionStatusForName(jsonValue.GetString("AutomationExecutionStatus"));

    m_automationExecutionStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("ExecutedBy"))
  {
    m_executedBy = jsonValue.GetString("ExecutedBy");

    m_executedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFile"))
  {
    m_logFile = jsonValue.GetString("LogFile");

    m_logFileHasBeenSet = true;
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

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentAutomationExecutionId"))
  {
    m_parentAutomationExecutionId = jsonValue.GetString("ParentAutomationExecutionId");

    m_parentAutomationExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentStepName"))
  {
    m_currentStepName = jsonValue.GetString("CurrentStepName");

    m_currentStepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentAction"))
  {
    m_currentAction = jsonValue.GetString("CurrentAction");

    m_currentActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetParameterName"))
  {
    m_targetParameterName = jsonValue.GetString("TargetParameterName");

    m_targetParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonValue> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedTargets"))
  {
    m_resolvedTargets = jsonValue.GetObject("ResolvedTargets");

    m_resolvedTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");

    m_maxErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationExecutionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_automationExecutionIdHasBeenSet)
  {
   payload.WithString("AutomationExecutionId", m_automationExecutionId);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_automationExecutionStatusHasBeenSet)
  {
   payload.WithString("AutomationExecutionStatus", AutomationExecutionStatusMapper::GetNameForAutomationExecutionStatus(m_automationExecutionStatus));
  }

  if(m_executionStartTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionStartTime", m_executionStartTime.SecondsWithMSPrecision());
  }

  if(m_executionEndTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionEndTime", m_executionEndTime.SecondsWithMSPrecision());
  }

  if(m_executedByHasBeenSet)
  {
   payload.WithString("ExecutedBy", m_executedBy);

  }

  if(m_logFileHasBeenSet)
  {
   payload.WithString("LogFile", m_logFile);

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

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ExecutionModeMapper::GetNameForExecutionMode(m_mode));
  }

  if(m_parentAutomationExecutionIdHasBeenSet)
  {
   payload.WithString("ParentAutomationExecutionId", m_parentAutomationExecutionId);

  }

  if(m_currentStepNameHasBeenSet)
  {
   payload.WithString("CurrentStepName", m_currentStepName);

  }

  if(m_currentActionHasBeenSet)
  {
   payload.WithString("CurrentAction", m_currentAction);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_targetParameterNameHasBeenSet)
  {
   payload.WithString("TargetParameterName", m_targetParameterName);

  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_resolvedTargetsHasBeenSet)
  {
   payload.WithObject("ResolvedTargets", m_resolvedTargets.Jsonize());

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
