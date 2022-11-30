/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelCardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelCardRequest::CreateModelCardRequest() : 
    m_modelCardNameHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateModelCardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_securityConfigHasBeenSet)
  {
   payload.WithObject("SecurityConfig", m_securityConfig.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
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

Aws::Http::HeaderValueCollection CreateModelCardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelCard"));
  return headers;

}




