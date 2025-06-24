/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateCustomModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCustomModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  if(m_modelSourceConfigHasBeenSet)
  {
   payload.WithObject("modelSourceConfig", m_modelSourceConfig.Jsonize());

  }

  if(m_modelKmsKeyArnHasBeenSet)
  {
   payload.WithString("modelKmsKeyArn", m_modelKmsKeyArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_modelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelTagsJsonList(m_modelTags.size());
   for(unsigned modelTagsIndex = 0; modelTagsIndex < modelTagsJsonList.GetLength(); ++modelTagsIndex)
   {
     modelTagsJsonList[modelTagsIndex].AsObject(m_modelTags[modelTagsIndex].Jsonize());
   }
   payload.WithArray("modelTags", std::move(modelTagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




