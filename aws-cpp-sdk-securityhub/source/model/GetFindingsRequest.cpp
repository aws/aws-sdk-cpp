/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> sortCriteriaJsonList(m_sortCriteria.size());
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




