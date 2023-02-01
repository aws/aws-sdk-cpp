/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFindingsRequest::ListFindingsRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithObject(filterItem.first, filterItem.second.Jsonize());
   }
   payload.WithObject("filter", std::move(filterJsonMap));

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("sort", m_sort.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




