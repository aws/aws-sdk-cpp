/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRecommendationPreferencesRequest::DeleteRecommendationPreferencesRequest() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_recommendationPreferenceNamesHasBeenSet(false)
{
}

Aws::String DeleteRecommendationPreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  if(m_recommendationPreferenceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationPreferenceNamesJsonList(m_recommendationPreferenceNames.size());
   for(unsigned recommendationPreferenceNamesIndex = 0; recommendationPreferenceNamesIndex < recommendationPreferenceNamesJsonList.GetLength(); ++recommendationPreferenceNamesIndex)
   {
     recommendationPreferenceNamesJsonList[recommendationPreferenceNamesIndex].AsString(RecommendationPreferenceNameMapper::GetNameForRecommendationPreferenceName(m_recommendationPreferenceNames[recommendationPreferenceNamesIndex]));
   }
   payload.WithArray("recommendationPreferenceNames", std::move(recommendationPreferenceNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRecommendationPreferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.DeleteRecommendationPreferences"));
  return headers;

}




