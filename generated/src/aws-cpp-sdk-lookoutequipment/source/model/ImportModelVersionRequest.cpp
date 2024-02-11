/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ImportModelVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportModelVersionRequest::ImportModelVersionRequest() : 
    m_sourceModelVersionArnHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_labelsInputConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_serverSideKmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_inferenceDataImportStrategy(InferenceDataImportStrategy::NOT_SET),
    m_inferenceDataImportStrategyHasBeenSet(false)
{
}

Aws::String ImportModelVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceModelVersionArnHasBeenSet)
  {
   payload.WithString("SourceModelVersionArn", m_sourceModelVersionArn);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_labelsInputConfigurationHasBeenSet)
  {
   payload.WithObject("LabelsInputConfiguration", m_labelsInputConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

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

  if(m_inferenceDataImportStrategyHasBeenSet)
  {
   payload.WithString("InferenceDataImportStrategy", InferenceDataImportStrategyMapper::GetNameForInferenceDataImportStrategy(m_inferenceDataImportStrategy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportModelVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ImportModelVersion"));
  return headers;

}




