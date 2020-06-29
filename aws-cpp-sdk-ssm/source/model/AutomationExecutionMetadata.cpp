/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_targetMapsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_automationType(AutomationType::NOT_SET),
    m_automationTypeHasBeenSet(false)
{
}

AutomationExecutionMetadata::AutomationExecutionMetadata(JsonView jsonValue) : 
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
    m_targetMapsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_automationType(AutomationType::NOT_SET),
    m_automationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationExecutionMetadata& AutomationExecutionMetadata::operator =(JsonView jsonValue)
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
    Aws::Map<Aws::String, JsonView> outputsJsonMap = jsonValue.GetObject("Outputs").GetAllObjects();
    for(auto& outputsItem : outputsJsonMap)
    {
      Array<JsonView> automationParameterValueListJsonList = outputsItem.second.AsArray();
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
    Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetMaps"))
  {
    Array<JsonView> targetMapsJsonList = jsonValue.GetArray("TargetMaps");
    for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
    {
      Aws::Map<Aws::String, JsonView> targetMapJsonMap = targetMapsJsonList[targetMapsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> targetMapMap;
      for(auto& targetMapItem : targetMapJsonMap)
      {
        Array<JsonView> targetMapValueListJsonList = targetMapItem.second.AsArray();
        Aws::Vector<Aws::String> targetMapValueListList;
        targetMapValueListList.reserve((size_t)targetMapValueListJsonList.GetLength());
        for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
        {
          targetMapValueListList.push_back(targetMapValueListJsonList[targetMapValueListIndex].AsString());
        }
        targetMapMap[targetMapItem.first] = std::move(targetMapValueListList);
      }
      m_targetMaps.push_back(std::move(targetMapMap));
    }
    m_targetMapsHasBeenSet = true;
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

  if(jsonValue.ValueExists("AutomationType"))
  {
    m_automationType = AutomationTypeMapper::GetAutomationTypeForName(jsonValue.GetString("AutomationType"));

    m_automationTypeHasBeenSet = true;
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

  if(m_targetMapsHasBeenSet)
  {
   Array<JsonValue> targetMapsJsonList(m_targetMaps.size());
   for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
   {
     JsonValue targetMapJsonMap;
     for(auto& targetMapItem : m_targetMaps[targetMapsIndex])
     {
       Array<JsonValue> targetMapValueListJsonList(targetMapItem.second.size());
       for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
       {
         targetMapValueListJsonList[targetMapValueListIndex].AsString(targetMapItem.second[targetMapValueListIndex]);
       }
       targetMapJsonMap.WithArray(targetMapItem.first, std::move(targetMapValueListJsonList));
     }
     targetMapsJsonList[targetMapsIndex].AsObject(std::move(targetMapJsonMap));
   }
   payload.WithArray("TargetMaps", std::move(targetMapsJsonList));

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

  if(m_automationTypeHasBeenSet)
  {
   payload.WithString("AutomationType", AutomationTypeMapper::GetNameForAutomationType(m_automationType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
