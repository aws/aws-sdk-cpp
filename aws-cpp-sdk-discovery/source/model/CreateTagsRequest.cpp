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

#include <aws/discovery/model/CreateTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTagsRequest::CreateTagsRequest() : 
    m_configurationIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationIdsHasBeenSet)
  {
   Array<JsonValue> configurationIdsJsonList(m_configurationIds.size());
   for(unsigned configurationIdsIndex = 0; configurationIdsIndex < configurationIdsJsonList.GetLength(); ++configurationIdsIndex)
   {
     configurationIdsJsonList[configurationIdsIndex].AsString(m_configurationIds[configurationIdsIndex]);
   }
   payload.WithArray("configurationIds", std::move(configurationIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.CreateTags"));
  return headers;

}




