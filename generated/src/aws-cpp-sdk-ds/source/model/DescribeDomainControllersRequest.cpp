/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeDomainControllersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDomainControllersRequest::DescribeDomainControllersRequest() : 
    m_directoryIdHasBeenSet(false),
    m_domainControllerIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeDomainControllersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_domainControllerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainControllerIdsJsonList(m_domainControllerIds.size());
   for(unsigned domainControllerIdsIndex = 0; domainControllerIdsIndex < domainControllerIdsJsonList.GetLength(); ++domainControllerIdsIndex)
   {
     domainControllerIdsJsonList[domainControllerIdsIndex].AsString(m_domainControllerIds[domainControllerIdsIndex]);
   }
   payload.WithArray("DomainControllerIds", std::move(domainControllerIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDomainControllersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeDomainControllers"));
  return headers;

}




