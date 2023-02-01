/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/PutRecommendationPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecommendationPreferencesRequest::PutRecommendationPreferencesRequest() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false),
    m_inferredWorkloadTypes(InferredWorkloadTypesPreference::NOT_SET),
    m_inferredWorkloadTypesHasBeenSet(false),
    m_externalMetricsPreferenceHasBeenSet(false)
{
}

Aws::String PutRecommendationPreferencesRequest::SerializePayload() const
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

  if(m_enhancedInfrastructureMetricsHasBeenSet)
  {
   payload.WithString("enhancedInfrastructureMetrics", EnhancedInfrastructureMetricsMapper::GetNameForEnhancedInfrastructureMetrics(m_enhancedInfrastructureMetrics));
  }

  if(m_inferredWorkloadTypesHasBeenSet)
  {
   payload.WithString("inferredWorkloadTypes", InferredWorkloadTypesPreferenceMapper::GetNameForInferredWorkloadTypesPreference(m_inferredWorkloadTypes));
  }

  if(m_externalMetricsPreferenceHasBeenSet)
  {
   payload.WithObject("externalMetricsPreference", m_externalMetricsPreference.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRecommendationPreferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.PutRecommendationPreferences"));
  return headers;

}




