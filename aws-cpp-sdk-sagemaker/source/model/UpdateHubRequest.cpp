/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateHubRequest::UpdateHubRequest() : 
    m_hubNameHasBeenSet(false),
    m_hubDescriptionHasBeenSet(false),
    m_hubDisplayNameHasBeenSet(false),
    m_hubSearchKeywordsHasBeenSet(false)
{
}

Aws::String UpdateHubRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubDescriptionHasBeenSet)
  {
   payload.WithString("HubDescription", m_hubDescription);

  }

  if(m_hubDisplayNameHasBeenSet)
  {
   payload.WithString("HubDisplayName", m_hubDisplayName);

  }

  if(m_hubSearchKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hubSearchKeywordsJsonList(m_hubSearchKeywords.size());
   for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
   {
     hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString(m_hubSearchKeywords[hubSearchKeywordsIndex]);
   }
   payload.WithArray("HubSearchKeywords", std::move(hubSearchKeywordsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateHubRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateHub"));
  return headers;

}




