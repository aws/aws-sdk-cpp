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
    m_externalMetricsPreferenceHasBeenSet(false),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET),
    m_lookBackPeriodHasBeenSet(false),
    m_utilizationPreferencesHasBeenSet(false),
    m_preferredResourcesHasBeenSet(false),
    m_savingsEstimationMode(SavingsEstimationMode::NOT_SET),
    m_savingsEstimationModeHasBeenSet(false)
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
    m_externalMetricsPreferenceHasBeenSet(false),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET),
    m_lookBackPeriodHasBeenSet(false),
    m_utilizationPreferencesHasBeenSet(false),
    m_preferredResourcesHasBeenSet(false),
    m_savingsEstimationMode(SavingsEstimationMode::NOT_SET),
    m_savingsEstimationModeHasBeenSet(false)
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

  if(jsonValue.ValueExists("lookBackPeriod"))
  {
    m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(jsonValue.GetString("lookBackPeriod"));

    m_lookBackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utilizationPreferences"))
  {
    Aws::Utils::Array<JsonView> utilizationPreferencesJsonList = jsonValue.GetArray("utilizationPreferences");
    for(unsigned utilizationPreferencesIndex = 0; utilizationPreferencesIndex < utilizationPreferencesJsonList.GetLength(); ++utilizationPreferencesIndex)
    {
      m_utilizationPreferences.push_back(utilizationPreferencesJsonList[utilizationPreferencesIndex].AsObject());
    }
    m_utilizationPreferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preferredResources"))
  {
    Aws::Utils::Array<JsonView> preferredResourcesJsonList = jsonValue.GetArray("preferredResources");
    for(unsigned preferredResourcesIndex = 0; preferredResourcesIndex < preferredResourcesJsonList.GetLength(); ++preferredResourcesIndex)
    {
      m_preferredResources.push_back(preferredResourcesJsonList[preferredResourcesIndex].AsObject());
    }
    m_preferredResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(jsonValue.GetString("savingsEstimationMode"));

    m_savingsEstimationModeHasBeenSet = true;
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

  if(m_lookBackPeriodHasBeenSet)
  {
   payload.WithString("lookBackPeriod", LookBackPeriodPreferenceMapper::GetNameForLookBackPeriodPreference(m_lookBackPeriod));
  }

  if(m_utilizationPreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> utilizationPreferencesJsonList(m_utilizationPreferences.size());
   for(unsigned utilizationPreferencesIndex = 0; utilizationPreferencesIndex < utilizationPreferencesJsonList.GetLength(); ++utilizationPreferencesIndex)
   {
     utilizationPreferencesJsonList[utilizationPreferencesIndex].AsObject(m_utilizationPreferences[utilizationPreferencesIndex].Jsonize());
   }
   payload.WithArray("utilizationPreferences", std::move(utilizationPreferencesJsonList));

  }

  if(m_preferredResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> preferredResourcesJsonList(m_preferredResources.size());
   for(unsigned preferredResourcesIndex = 0; preferredResourcesIndex < preferredResourcesJsonList.GetLength(); ++preferredResourcesIndex)
   {
     preferredResourcesJsonList[preferredResourcesIndex].AsObject(m_preferredResources[preferredResourcesIndex].Jsonize());
   }
   payload.WithArray("preferredResources", std::move(preferredResourcesJsonList));

  }

  if(m_savingsEstimationModeHasBeenSet)
  {
   payload.WithString("savingsEstimationMode", SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
