/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateWorkloadIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkloadIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_allowedResourceOauth2ReturnUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedResourceOauth2ReturnUrlsJsonList(m_allowedResourceOauth2ReturnUrls.size());
   for(unsigned allowedResourceOauth2ReturnUrlsIndex = 0; allowedResourceOauth2ReturnUrlsIndex < allowedResourceOauth2ReturnUrlsJsonList.GetLength(); ++allowedResourceOauth2ReturnUrlsIndex)
   {
     allowedResourceOauth2ReturnUrlsJsonList[allowedResourceOauth2ReturnUrlsIndex].AsString(m_allowedResourceOauth2ReturnUrls[allowedResourceOauth2ReturnUrlsIndex]);
   }
   payload.WithArray("allowedResourceOauth2ReturnUrls", std::move(allowedResourceOauth2ReturnUrlsJsonList));

  }

  return payload.View().WriteReadable();
}




