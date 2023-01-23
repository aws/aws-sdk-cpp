/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/RemoveTagsFromResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeyListHasBeenSet(false)
{
}

Aws::String RemoveTagsFromResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_tagKeyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeyListJsonList(m_tagKeyList.size());
   for(unsigned tagKeyListIndex = 0; tagKeyListIndex < tagKeyListJsonList.GetLength(); ++tagKeyListIndex)
   {
     tagKeyListJsonList[tagKeyListIndex].AsString(m_tagKeyList[tagKeyListIndex]);
   }
   payload.WithArray("TagKeyList", std::move(tagKeyListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveTagsFromResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.RemoveTagsFromResource"));
  return headers;

}




