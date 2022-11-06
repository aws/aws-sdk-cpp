/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateTrialComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrialComponentRequest::UpdateTrialComponentRequest() : 
    m_trialComponentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_parametersToRemoveHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_inputArtifactsToRemoveHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_outputArtifactsToRemoveHasBeenSet(false)
{
}

Aws::String UpdateTrialComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trialComponentNameHasBeenSet)
  {
   payload.WithString("TrialComponentName", m_trialComponentName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_parametersToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersToRemoveJsonList(m_parametersToRemove.size());
   for(unsigned parametersToRemoveIndex = 0; parametersToRemoveIndex < parametersToRemoveJsonList.GetLength(); ++parametersToRemoveIndex)
   {
     parametersToRemoveJsonList[parametersToRemoveIndex].AsString(m_parametersToRemove[parametersToRemoveIndex]);
   }
   payload.WithArray("ParametersToRemove", std::move(parametersToRemoveJsonList));

  }

  if(m_inputArtifactsHasBeenSet)
  {
   JsonValue inputArtifactsJsonMap;
   for(auto& inputArtifactsItem : m_inputArtifacts)
   {
     inputArtifactsJsonMap.WithObject(inputArtifactsItem.first, inputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("InputArtifacts", std::move(inputArtifactsJsonMap));

  }

  if(m_inputArtifactsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputArtifactsToRemoveJsonList(m_inputArtifactsToRemove.size());
   for(unsigned inputArtifactsToRemoveIndex = 0; inputArtifactsToRemoveIndex < inputArtifactsToRemoveJsonList.GetLength(); ++inputArtifactsToRemoveIndex)
   {
     inputArtifactsToRemoveJsonList[inputArtifactsToRemoveIndex].AsString(m_inputArtifactsToRemove[inputArtifactsToRemoveIndex]);
   }
   payload.WithArray("InputArtifactsToRemove", std::move(inputArtifactsToRemoveJsonList));

  }

  if(m_outputArtifactsHasBeenSet)
  {
   JsonValue outputArtifactsJsonMap;
   for(auto& outputArtifactsItem : m_outputArtifacts)
   {
     outputArtifactsJsonMap.WithObject(outputArtifactsItem.first, outputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("OutputArtifacts", std::move(outputArtifactsJsonMap));

  }

  if(m_outputArtifactsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputArtifactsToRemoveJsonList(m_outputArtifactsToRemove.size());
   for(unsigned outputArtifactsToRemoveIndex = 0; outputArtifactsToRemoveIndex < outputArtifactsToRemoveJsonList.GetLength(); ++outputArtifactsToRemoveIndex)
   {
     outputArtifactsToRemoveJsonList[outputArtifactsToRemoveIndex].AsString(m_outputArtifactsToRemove[outputArtifactsToRemoveIndex]);
   }
   payload.WithArray("OutputArtifactsToRemove", std::move(outputArtifactsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrialComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateTrialComponent"));
  return headers;

}




