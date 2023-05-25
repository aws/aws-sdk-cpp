/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEBSVolumeRecommendationsRequest::GetEBSVolumeRecommendationsRequest() : 
    m_volumeArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_accountIdsHasBeenSet(false)
{
}

Aws::String GetEBSVolumeRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeArnsJsonList(m_volumeArns.size());
   for(unsigned volumeArnsIndex = 0; volumeArnsIndex < volumeArnsJsonList.GetLength(); ++volumeArnsIndex)
   {
     volumeArnsJsonList[volumeArnsIndex].AsString(m_volumeArns[volumeArnsIndex]);
   }
   payload.WithArray("volumeArns", std::move(volumeArnsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

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

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEBSVolumeRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.GetEBSVolumeRecommendations"));
  return headers;

}




