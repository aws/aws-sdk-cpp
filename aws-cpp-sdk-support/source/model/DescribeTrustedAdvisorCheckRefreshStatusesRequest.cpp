/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrustedAdvisorCheckRefreshStatusesRequest::DescribeTrustedAdvisorCheckRefreshStatusesRequest() : 
    m_checkIdsHasBeenSet(false)
{
}

Aws::String DescribeTrustedAdvisorCheckRefreshStatusesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checkIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> checkIdsJsonList(m_checkIds.size());
   for(unsigned checkIdsIndex = 0; checkIdsIndex < checkIdsJsonList.GetLength(); ++checkIdsIndex)
   {
     checkIdsJsonList[checkIdsIndex].AsString(m_checkIds[checkIdsIndex]);
   }
   payload.WithArray("checkIds", std::move(checkIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrustedAdvisorCheckRefreshStatusesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeTrustedAdvisorCheckRefreshStatuses"));
  return headers;

}




