/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSEffectiveRecommendationPreferences.h>
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

RDSEffectiveRecommendationPreferences::RDSEffectiveRecommendationPreferences(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSEffectiveRecommendationPreferences& RDSEffectiveRecommendationPreferences::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("lookBackPeriod"))
  {
    m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(jsonValue.GetString("lookBackPeriod"));
    m_lookBackPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = jsonValue.GetObject("savingsEstimationMode");
    m_savingsEstimationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSEffectiveRecommendationPreferences::Jsonize() const
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

  if(m_lookBackPeriodHasBeenSet)
  {
   payload.WithString("lookBackPeriod", LookBackPeriodPreferenceMapper::GetNameForLookBackPeriodPreference(m_lookBackPeriod));
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
