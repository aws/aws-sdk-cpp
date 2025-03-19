/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DescribeBackupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeBackupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

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

  if(m_sharedHasBeenSet)
  {
   payload.WithBool("Shared", m_shared);

  }

  if(m_sortAscendingHasBeenSet)
  {
   payload.WithBool("SortAscending", m_sortAscending);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBackupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.DescribeBackups"));
  return headers;

}




