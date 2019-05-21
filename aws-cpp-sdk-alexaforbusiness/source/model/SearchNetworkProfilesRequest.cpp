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

#include <aws/alexaforbusiness/model/SearchNetworkProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchNetworkProfilesRequest::SearchNetworkProfilesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false)
{
}

Aws::String SearchNetworkProfilesRequest::SerializePayload() const
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
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchNetworkProfilesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.SearchNetworkProfiles"));
  return headers;

}




