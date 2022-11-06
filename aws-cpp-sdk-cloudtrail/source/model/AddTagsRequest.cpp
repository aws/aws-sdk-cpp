/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddTagsRequest::AddTagsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_tagsListHasBeenSet(false)
{
}

Aws::String AddTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_tagsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsListJsonList(m_tagsList.size());
   for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
   {
     tagsListJsonList[tagsListIndex].AsObject(m_tagsList[tagsListIndex].Jsonize());
   }
   payload.WithArray("TagsList", std::move(tagsListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.AddTags"));
  return headers;

}




