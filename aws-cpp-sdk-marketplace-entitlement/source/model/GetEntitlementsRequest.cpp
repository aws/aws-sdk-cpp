/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/model/GetEntitlementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceEntitlementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEntitlementsRequest::GetEntitlementsRequest() : 
    m_productCodeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetEntitlementsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     Aws::Utils::Array<JsonValue> filterValueListJsonList(filterItem.second.size());
     for(unsigned filterValueListIndex = 0; filterValueListIndex < filterValueListJsonList.GetLength(); ++filterValueListIndex)
     {
       filterValueListJsonList[filterValueListIndex].AsString(filterItem.second[filterValueListIndex]);
     }
     filterJsonMap.WithArray(GetEntitlementFilterNameMapper::GetNameForGetEntitlementFilterName(filterItem.first), std::move(filterValueListJsonList));
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEntitlementsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPEntitlementService.GetEntitlements"));
  return headers;

}




