﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/StartTargetedSentimentDetectionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTargetedSentimentDetectionJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

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

Aws::Http::HeaderValueCollection StartTargetedSentimentDetectionJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.StartTargetedSentimentDetectionJob"));
  return headers;

}




