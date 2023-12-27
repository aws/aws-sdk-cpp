/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchContactsRequest::SearchContactsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_timeRangeHasBeenSet(false),
    m_searchCriteriaHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

Aws::String SearchContactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_timeRangeHasBeenSet)
  {
   payload.WithObject("TimeRange", m_timeRange.Jsonize());

  }

  if(m_searchCriteriaHasBeenSet)
  {
   payload.WithObject("SearchCriteria", m_searchCriteria.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  return payload.View().WriteReadable();
}




