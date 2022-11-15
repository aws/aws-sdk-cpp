/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateCodeRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCodeRepositoryRequest::CreateCodeRepositoryRequest() : 
    m_codeRepositoryNameHasBeenSet(false),
    m_gitConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCodeRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codeRepositoryNameHasBeenSet)
  {
   payload.WithString("CodeRepositoryName", m_codeRepositoryName);

  }

  if(m_gitConfigHasBeenSet)
  {
   payload.WithObject("GitConfig", m_gitConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateCodeRepositoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateCodeRepository"));
  return headers;

}




