/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationPreferencesDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RecommendationPreferencesDetail::RecommendationPreferencesDetail() : 
    m_scopeHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false),
    m_inferredWorkloadTypes(InferredWorkloadTypesPreference::NOT_SET),
    m_inferredWorkloadTypesHasBeenSet(false),
    m_externalMetricsPreferenceHasBeenSet(false)
{
}

RecommendationPreferencesDetail::RecommendationPreferencesDetail(JsonView jsonValue) : 
    m_scopeHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false),
    m_inferredWorkloadTypes(InferredWorkloadTypesPreference::NOT_SET),
    m_inferredWorkloadTypesHasBeenSet(false),
    m_externalMetricsPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationPreferencesDetail& RecommendationPreferencesDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scope"))
  {
    m_scope = jsonValue.GetObject("scope");

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedInfrastructureMetrics"))
  {
    m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(jsonValue.GetString("enhancedInfrastructureMetrics"));

    m_enhancedInfrastructureMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferredWorkloadTypes"))
  {
    m_inferredWorkloadTypes = InferredWorkloadTypesPreferenceMapper::GetInferredWorkloadTypesPreferenceForName(jsonValue.GetString("inferredWorkloadTypes"));

    m_inferredWorkloadTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalMetricsPreference"))
  {
    m_externalMetricsPreference = jsonValue.GetObject("externalMetricsPreference");

    m_externalMetricsPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationPreferencesDetail::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
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

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
