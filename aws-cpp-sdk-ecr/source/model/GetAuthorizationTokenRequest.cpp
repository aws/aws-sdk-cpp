/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAuthorizationTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.GetAuthorizationToken"));
  return headers;

}




