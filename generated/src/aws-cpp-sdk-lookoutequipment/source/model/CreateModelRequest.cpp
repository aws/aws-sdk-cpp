/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CreateModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelRequest::CreateModelRequest() : 
    m_modelNameHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetSchemaHasBeenSet(false),
    m_labelsInputConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_trainingDataStartTimeHasBeenSet(false),
    m_trainingDataEndTimeHasBeenSet(false),
    m_evaluationDataStartTimeHasBeenSet(false),
    m_evaluationDataEndTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataPreProcessingConfigurationHasBeenSet(false),
    m_serverSideKmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_offConditionHasBeenSet(false)
{
}

Aws::String CreateModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetSchemaHasBeenSet)
  {
   payload.WithObject("DatasetSchema", m_datasetSchema.Jsonize());

  }

  if(m_labelsInputConfigurationHasBeenSet)
  {
   payload.WithObject("LabelsInputConfiguration", m_labelsInputConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_trainingDataStartTimeHasBeenSet)
  {
   payload.WithDouble("TrainingDataStartTime", m_trainingDataStartTime.SecondsWithMSPrecision());
  }

  if(m_trainingDataEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingDataEndTime", m_trainingDataEndTime.SecondsWithMSPrecision());
  }

  if(m_evaluationDataStartTimeHasBeenSet)
  {
   payload.WithDouble("EvaluationDataStartTime", m_evaluationDataStartTime.SecondsWithMSPrecision());
  }

  if(m_evaluationDataEndTimeHasBeenSet)
  {
   payload.WithDouble("EvaluationDataEndTime", m_evaluationDataEndTime.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_dataPreProcessingConfigurationHasBeenSet)
  {
   payload.WithObject("DataPreProcessingConfiguration", m_dataPreProcessingConfiguration.Jsonize());

  }

  if(m_serverSideKmsKeyIdHasBeenSet)
  {
   payload.WithString("ServerSideKmsKeyId", m_serverSideKmsKeyId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_offConditionHasBeenSet)
  {
   payload.WithString("OffCondition", m_offCondition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.CreateModel"));
  return headers;

}




