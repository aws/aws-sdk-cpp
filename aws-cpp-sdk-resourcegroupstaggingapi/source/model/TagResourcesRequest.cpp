/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/resourcegroupstaggingapi/model/TagResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TagResourcesRequest::TagResourcesRequest() : 
    m_resourceARNListHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String TagResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceARNListHasBeenSet)
  {
   Array<JsonValue> resourceARNListJsonList(m_resourceARNList.size());
   for(unsigned resourceARNListIndex = 0; resourceARNListIndex < resourceARNListJsonList.GetLength(); ++resourceARNListIndex)
   {
     resourceARNListJsonList[resourceARNListIndex].AsString(m_resourceARNList[resourceARNListIndex]);
   }
   payload.WithArray("ResourceARNList", std::move(resourceARNListJsonList));

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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TagResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.TagResources"));
  return headers;

}




