/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateStreamProcessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStreamProcessorRequest::CreateStreamProcessorRequest() : 
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_notificationChannelHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_regionsOfInterestHasBeenSet(false),
    m_dataSharingPreferenceHasBeenSet(false)
{
}

Aws::String CreateStreamProcessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("Output", m_output.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_notificationChannelHasBeenSet)
  {
   payload.WithObject("NotificationChannel", m_notificationChannel.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_regionsOfInterestHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsOfInterestJsonList(m_regionsOfInterest.size());
   for(unsigned regionsOfInterestIndex = 0; regionsOfInterestIndex < regionsOfInterestJsonList.GetLength(); ++regionsOfInterestIndex)
   {
     regionsOfInterestJsonList[regionsOfInterestIndex].AsObject(m_regionsOfInterest[regionsOfInterestIndex].Jsonize());
   }
   payload.WithArray("RegionsOfInterest", std::move(regionsOfInterestJsonList));

  }

  if(m_dataSharingPreferenceHasBeenSet)
  {
   payload.WithObject("DataSharingPreference", m_dataSharingPreference.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStreamProcessorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CreateStreamProcessor"));
  return headers;

}




