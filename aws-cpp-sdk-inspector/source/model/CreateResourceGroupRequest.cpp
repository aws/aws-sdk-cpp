﻿/*
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

#include <aws/inspector/model/CreateResourceGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceGroupRequest::CreateResourceGroupRequest() : 
    m_resourceGroupTagsHasBeenSet(false)
{
}

Aws::String CreateResourceGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupTagsHasBeenSet)
  {
   Array<JsonValue> resourceGroupTagsJsonList(m_resourceGroupTags.size());
   for(unsigned resourceGroupTagsIndex = 0; resourceGroupTagsIndex < resourceGroupTagsJsonList.GetLength(); ++resourceGroupTagsIndex)
   {
     resourceGroupTagsJsonList[resourceGroupTagsIndex].AsObject(m_resourceGroupTags[resourceGroupTagsIndex].Jsonize());
   }
   payload.WithArray("resourceGroupTags", std::move(resourceGroupTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResourceGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateResourceGroup"));
  return headers;

}




