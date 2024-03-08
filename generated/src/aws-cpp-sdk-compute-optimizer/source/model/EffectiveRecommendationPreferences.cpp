/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EffectiveRecommendationPreferences.h>
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

EffectiveRecommendationPreferences::EffectiveRecommendationPreferences() : 
    m_cpuVendorArchitecturesHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false),
    m_inferredWorkloadTypes(InferredWorkloadTypesPreference::NOT_SET),
    m_inferredWorkloadTypesHasBeenSet(false),
    m_externalMetricsPreferenceHasBeenSet(false),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET),
    m_lookBackPeriodHasBeenSet(false),
    m_utilizationPreferencesHasBeenSet(false),
    m_preferredResourcesHasBeenSet(false),
    m_savingsEstimationModeHasBeenSet(false)
{
}

EffectiveRecommendationPreferences::EffectiveRecommendationPreferences(JsonView jsonValue) : 
    m_cpuVendorArchitecturesHasBeenSet(false),
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_enhancedInfrastructureMetricsHasBeenSet(false),
    m_inferredWorkloadTypes(InferredWorkloadTypesPreference::NOT_SET),
    m_inferredWorkloadTypesHasBeenSet(false),
    m_externalMetricsPreferenceHasBeenSet(false),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET),
    m_lookBackPeriodHasBeenSet(false),
    m_utilizationPreferencesHasBeenSet(false),
    m_preferredResourcesHasBeenSet(false),
    m_savingsEstimationModeHasBeenSet(false)
{
  *this = jsonValue;
}

EffectiveRecommendationPreferences& EffectiveRecommendationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuVendorArchitectures"))
  {
    Aws::Utils::Array<JsonView> cpuVendorArchitecturesJsonList = jsonValue.GetArray("cpuVendorArchitectures");
    for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
    {
      m_cpuVendorArchitectures.push_back(CpuVendorArchitectureMapper::GetCpuVendorArchitectureForName(cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString()));
    }
    m_cpuVendorArchitecturesHasBeenSet = true;
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
    m_savingsEstimationMode = jsonValue.GetObject("savingsEstimationMode");

    m_savingsEstimationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectiveRecommendationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_cpuVendorArchitecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cpuVendorArchitecturesJsonList(m_cpuVendorArchitectures.size());
   for(unsigned cpuVendorArchitecturesIndex = 0; cpuVendorArchitecturesIndex < cpuVendorArchitecturesJsonList.GetLength(); ++cpuVendorArchitecturesIndex)
   {
     cpuVendorArchitecturesJsonList[cpuVendorArchitecturesIndex].AsString(CpuVendorArchitectureMapper::GetNameForCpuVendorArchitecture(m_cpuVendorArchitectures[cpuVendorArchitecturesIndex]));
   }
   payload.WithArray("cpuVendorArchitectures", std::move(cpuVendorArchitecturesJsonList));

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
   payload.WithObject("savingsEstimationMode", m_savingsEstimationMode.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
