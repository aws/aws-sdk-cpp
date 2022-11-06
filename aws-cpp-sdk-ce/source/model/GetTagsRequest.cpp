/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTagsRequest::GetTagsRequest() : 
    m_searchStringHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

Aws::String GetTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_searchStringHasBeenSet)
  {
   payload.WithString("SearchString", m_searchString);

  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_sortByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortByJsonList(m_sortBy.size());
   for(unsigned sortByIndex = 0; sortByIndex < sortByJsonList.GetLength(); ++sortByIndex)
   {
     sortByJsonList[sortByIndex].AsObject(m_sortBy[sortByIndex].Jsonize());
   }
   payload.WithArray("SortBy", std::move(sortByJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetTags"));
  return headers;

}




