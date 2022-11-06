/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CreateInferenceSchedulerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInferenceSchedulerRequest::CreateInferenceSchedulerRequest() : 
    m_modelNameHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_dataDelayOffsetInMinutes(0),
    m_dataDelayOffsetInMinutesHasBeenSet(false),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_dataUploadFrequencyHasBeenSet(false),
    m_dataInputConfigurationHasBeenSet(false),
    m_dataOutputConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_serverSideKmsKeyIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateInferenceSchedulerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_inferenceSchedulerNameHasBeenSet)
  {
   payload.WithString("InferenceSchedulerName", m_inferenceSchedulerName);

  }

  if(m_dataDelayOffsetInMinutesHasBeenSet)
  {
   payload.WithInt64("DataDelayOffsetInMinutes", m_dataDelayOffsetInMinutes);

  }

  if(m_dataUploadFrequencyHasBeenSet)
  {
   payload.WithString("DataUploadFrequency", DataUploadFrequencyMapper::GetNameForDataUploadFrequency(m_dataUploadFrequency));
  }

  if(m_dataInputConfigurationHasBeenSet)
  {
   payload.WithObject("DataInputConfiguration", m_dataInputConfiguration.Jsonize());

  }

  if(m_dataOutputConfigurationHasBeenSet)
  {
   payload.WithObject("DataOutputConfiguration", m_dataOutputConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_serverSideKmsKeyIdHasBeenSet)
  {
   payload.WithString("ServerSideKmsKeyId", m_serverSideKmsKeyId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInferenceSchedulerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.CreateInferenceScheduler"));
  return headers;

}




