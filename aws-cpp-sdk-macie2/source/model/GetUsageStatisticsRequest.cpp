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
    m_sortByHasBeenSet(false)
{
}

Aws::String GetUsageStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByHasBeenSet)
  {
   Array<JsonValue> filterByJsonList(m_filterBy.size());
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

  return payload.View().WriteReadable();
}




