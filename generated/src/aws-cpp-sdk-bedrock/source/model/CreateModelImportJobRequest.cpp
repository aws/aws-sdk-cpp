/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateModelImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateModelImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_importedModelNameHasBeenSet)
  {
   payload.WithString("importedModelName", m_importedModelName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_modelDataSourceHasBeenSet)
  {
   payload.WithObject("modelDataSource", m_modelDataSource.Jsonize());

  }

  if(m_jobTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobTagsJsonList(m_jobTags.size());
   for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
   {
     jobTagsJsonList[jobTagsIndex].AsObject(m_jobTags[jobTagsIndex].Jsonize());
   }
   payload.WithArray("jobTags", std::move(jobTagsJsonList));

  }

  if(m_importedModelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> importedModelTagsJsonList(m_importedModelTags.size());
   for(unsigned importedModelTagsIndex = 0; importedModelTagsIndex < importedModelTagsJsonList.GetLength(); ++importedModelTagsIndex)
   {
     importedModelTagsJsonList[importedModelTagsIndex].AsObject(m_importedModelTags[importedModelTagsIndex].Jsonize());
   }
   payload.WithArray("importedModelTags", std::move(importedModelTagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_importedModelKmsKeyIdHasBeenSet)
  {
   payload.WithString("importedModelKmsKeyId", m_importedModelKmsKeyId);

  }

  return payload.View().WriteReadable();
}




