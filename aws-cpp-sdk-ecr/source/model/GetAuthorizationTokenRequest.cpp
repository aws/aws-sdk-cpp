/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/GetAuthorizationTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAuthorizationTokenRequest::GetAuthorizationTokenRequest() : 
    m_registryIdsHasBeenSet(false)
{
}

Aws::String GetAuthorizationTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdsHasBeenSet)
  {
   Array<JsonValue> registryIdsJsonList(m_registryIds.size());
   for(unsigned registryIdsIndex = 0; registryIdsIndex < registryIdsJsonList.GetLength(); ++registryIdsIndex)
   {
     registryIdsJsonList[registryIdsIndex].AsString(m_registryIds[registryIdsIndex]);
   }
   payload.WithArray("registryIds", std::move(registryIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetAuthorizationTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.GetAuthorizationToken"));
  return headers;

}



