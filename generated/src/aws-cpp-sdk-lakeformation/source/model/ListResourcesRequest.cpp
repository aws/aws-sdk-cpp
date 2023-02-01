/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourcesRequest::ListResourcesRequest() : 
    m_filterConditionListHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterConditionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterConditionListJsonList(m_filterConditionList.size());
   for(unsigned filterConditionListIndex = 0; filterConditionListIndex < filterConditionListJsonList.GetLength(); ++filterConditionListIndex)
   {
     filterConditionListJsonList[filterConditionListIndex].AsObject(m_filterConditionList[filterConditionListIndex].Jsonize());
   }
   payload.WithArray("FilterConditionList", std::move(filterConditionListJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




