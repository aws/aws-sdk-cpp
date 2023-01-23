/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetUsageStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUsageStatisticsRequest::GetUsageStatisticsRequest() : 
    m_filterByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_timeRange(TimeRange::NOT_SET),
    m_timeRangeHasBeenSet(false)
{
}

Aws::String GetUsageStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterByJsonList(m_filterBy.size());
   for(unsigned filterByIndex = 0; filterByIndex < filterByJsonList.GetLength(); ++filterByIndex)
   {
     filterByJsonList[filterByIndex].AsObject(m_filterBy[filterByIndex].Jsonize());
   }
   payload.WithArray("filterBy", std::move(filterByJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithObject("sortBy", m_sortBy.Jsonize());

  }

  if(m_timeRangeHasBeenSet)
  {
   payload.WithString("timeRange", TimeRangeMapper::GetNameForTimeRange(m_timeRange));
  }

  return payload.View().WriteReadable();
}




