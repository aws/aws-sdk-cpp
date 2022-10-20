/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEC2InstanceRecommendationsRequest::GetEC2InstanceRecommendationsRequest() : 
    m_instanceArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_recommendationPreferencesHasBeenSet(false)
{
}

Aws::String GetEC2InstanceRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceArnsJsonList(m_instanceArns.size());
   for(unsigned instanceArnsIndex = 0; instanceArnsIndex < instanceArnsJsonList.GetLength(); ++instanceArnsIndex)
   {
     instanceArnsJsonList[instanceArnsIndex].AsString(m_instanceArns[instanceArnsIndex]);
   }
   payload.WithArray("instanceArns", std::move(instanceArnsJsonList));

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

  if(m_recommendationPreferencesHasBeenSet)
  {
   payload.WithObject("recommendationPreferences", m_recommendationPreferences.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEC2InstanceRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.GetEC2InstanceRecommendations"));
  return headers;

}




