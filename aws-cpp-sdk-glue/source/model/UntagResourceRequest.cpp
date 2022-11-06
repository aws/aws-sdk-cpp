/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagsToRemoveHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_tagsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsToRemoveJsonList(m_tagsToRemove.size());
   for(unsigned tagsToRemoveIndex = 0; tagsToRemoveIndex < tagsToRemoveJsonList.GetLength(); ++tagsToRemoveIndex)
   {
     tagsToRemoveJsonList[tagsToRemoveIndex].AsString(m_tagsToRemove[tagsToRemoveIndex]);
   }
   payload.WithArray("TagsToRemove", std::move(tagsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UntagResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UntagResource"));
  return headers;

}




