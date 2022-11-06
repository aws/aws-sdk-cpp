/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DescribeClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeClustersRequest::DescribeClustersRequest() : 
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> stringsJsonList(filtersItem.second.size());
     for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
     {
       stringsJsonList[stringsIndex].AsString(filtersItem.second[stringsIndex]);
     }
     filtersJsonMap.WithArray(filtersItem.first, std::move(stringsJsonList));
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

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

Aws::Http::HeaderValueCollection DescribeClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.DescribeClusters"));
  return headers;

}




