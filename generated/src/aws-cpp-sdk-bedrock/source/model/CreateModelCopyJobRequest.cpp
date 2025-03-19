/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateModelCopyJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateModelCopyJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceModelArnHasBeenSet)
  {
   payload.WithString("sourceModelArn", m_sourceModelArn);

  }

  if(m_targetModelNameHasBeenSet)
  {
   payload.WithString("targetModelName", m_targetModelName);

  }

  if(m_modelKmsKeyIdHasBeenSet)
  {
   payload.WithString("modelKmsKeyId", m_modelKmsKeyId);

  }

  if(m_targetModelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetModelTagsJsonList(m_targetModelTags.size());
   for(unsigned targetModelTagsIndex = 0; targetModelTagsIndex < targetModelTagsJsonList.GetLength(); ++targetModelTagsIndex)
   {
     targetModelTagsJsonList[targetModelTagsIndex].AsObject(m_targetModelTags[targetModelTagsIndex].Jsonize());
   }
   payload.WithArray("targetModelTags", std::move(targetModelTagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




