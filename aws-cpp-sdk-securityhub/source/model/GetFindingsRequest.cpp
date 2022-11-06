/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingsRequest::GetFindingsRequest() : 
    m_filtersHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_sortCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortCriteriaJsonList(m_sortCriteria.size());
   for(unsigned sortCriteriaIndex = 0; sortCriteriaIndex < sortCriteriaJsonList.GetLength(); ++sortCriteriaIndex)
   {
     sortCriteriaJsonList[sortCriteriaIndex].AsObject(m_sortCriteria[sortCriteriaIndex].Jsonize());
   }
   payload.WithArray("SortCriteria", std::move(sortCriteriaJsonList));

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




