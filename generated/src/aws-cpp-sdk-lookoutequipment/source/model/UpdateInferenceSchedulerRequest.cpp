/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UpdateInferenceSchedulerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInferenceSchedulerRequest::UpdateInferenceSchedulerRequest() : 
    m_inferenceSchedulerNameHasBeenSet(false),
    m_dataDelayOffsetInMinutes(0),
    m_dataDelayOffsetInMinutesHasBeenSet(false),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_dataUploadFrequencyHasBeenSet(false),
    m_dataInputConfigurationHasBeenSet(false),
    m_dataOutputConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateInferenceSchedulerRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInferenceSchedulerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.UpdateInferenceScheduler"));
  return headers;

}




