/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchAllRelatedItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchAllRelatedItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_sortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortsJsonList(m_sorts.size());
   for(unsigned sortsIndex = 0; sortsIndex < sortsJsonList.GetLength(); ++sortsIndex)
   {
     sortsJsonList[sortsIndex].AsObject(m_sorts[sortsIndex].Jsonize());
   }
   payload.WithArray("sorts", std::move(sortsJsonList));

  }

  return payload.View().WriteReadable();
}




