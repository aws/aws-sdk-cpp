/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListFindingAggregationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFindingAggregationsRequest::ListFindingAggregationsRequest() : 
    m_accountIdsHasBeenSet(false),
    m_aggregationRequestHasBeenSet(false),
    m_aggregationType(AggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListFindingAggregationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsObject(m_accountIds[accountIdsIndex].Jsonize());
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_aggregationRequestHasBeenSet)
  {
   payload.WithObject("aggregationRequest", m_aggregationRequest.Jsonize());

  }

  if(m_aggregationTypeHasBeenSet)
  {
   payload.WithString("aggregationType", AggregationTypeMapper::GetNameForAggregationType(m_aggregationType));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




