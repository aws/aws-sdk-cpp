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

#include <aws/config/model/BatchGetResourceConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetResourceConfigRequest::BatchGetResourceConfigRequest() : 
    m_resourceKeysHasBeenSet(false)
{
}

Aws::String BatchGetResourceConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceKeysHasBeenSet)
  {
   Array<JsonValue> resourceKeysJsonList(m_resourceKeys.size());
   for(unsigned resourceKeysIndex = 0; resourceKeysIndex < resourceKeysJsonList.GetLength(); ++resourceKeysIndex)
   {
     resourceKeysJsonList[resourceKeysIndex].AsObject(m_resourceKeys[resourceKeysIndex].Jsonize());
   }
   payload.WithArray("resourceKeys", std::move(resourceKeysJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetResourceConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.BatchGetResourceConfig"));
  return headers;

}




