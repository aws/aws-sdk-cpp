/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/VolumeRecommendation.h>
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

VolumeRecommendation::VolumeRecommendation() : 
    m_volumeArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentConfigurationHasBeenSet(false),
    m_finding(EBSFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_volumeRecommendationOptionsHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
}

VolumeRecommendation::VolumeRecommendation(JsonView jsonValue) : 
    m_volumeArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentConfigurationHasBeenSet(false),
    m_finding(EBSFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_volumeRecommendationOptionsHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeRecommendation& VolumeRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeArn"))
  {
    m_volumeArn = jsonValue.GetString("volumeArn");

    m_volumeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentConfiguration"))
  {
    m_currentConfiguration = jsonValue.GetObject("currentConfiguration");

    m_currentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = EBSFindingMapper::GetEBSFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utilizationMetrics"))
  {
    Aws::Utils::Array<JsonView> utilizationMetricsJsonList = jsonValue.GetArray("utilizationMetrics");
    for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
    {
      m_utilizationMetrics.push_back(utilizationMetricsJsonList[utilizationMetricsIndex].AsObject());
    }
    m_utilizationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lookBackPeriodInDays"))
  {
    m_lookBackPeriodInDays = jsonValue.GetDouble("lookBackPeriodInDays");

    m_lookBackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> volumeRecommendationOptionsJsonList = jsonValue.GetArray("volumeRecommendationOptions");
    for(unsigned volumeRecommendationOptionsIndex = 0; volumeRecommendationOptionsIndex < volumeRecommendationOptionsJsonList.GetLength(); ++volumeRecommendationOptionsIndex)
    {
      m_volumeRecommendationOptions.push_back(volumeRecommendationOptionsJsonList[volumeRecommendationOptionsIndex].AsObject());
    }
    m_volumeRecommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentPerformanceRisk"))
  {
    m_currentPerformanceRisk = CurrentPerformanceRiskMapper::GetCurrentPerformanceRiskForName(jsonValue.GetString("currentPerformanceRisk"));

    m_currentPerformanceRiskHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_volumeArnHasBeenSet)
  {
   payload.WithString("volumeArn", m_volumeArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_currentConfigurationHasBeenSet)
  {
   payload.WithObject("currentConfiguration", m_currentConfiguration.Jsonize());

  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", EBSFindingMapper::GetNameForEBSFinding(m_finding));
  }

  if(m_utilizationMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> utilizationMetricsJsonList(m_utilizationMetrics.size());
   for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
   {
     utilizationMetricsJsonList[utilizationMetricsIndex].AsObject(m_utilizationMetrics[utilizationMetricsIndex].Jsonize());
   }
   payload.WithArray("utilizationMetrics", std::move(utilizationMetricsJsonList));

  }

  if(m_lookBackPeriodInDaysHasBeenSet)
  {
   payload.WithDouble("lookBackPeriodInDays", m_lookBackPeriodInDays);

  }

  if(m_volumeRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeRecommendationOptionsJsonList(m_volumeRecommendationOptions.size());
   for(unsigned volumeRecommendationOptionsIndex = 0; volumeRecommendationOptionsIndex < volumeRecommendationOptionsJsonList.GetLength(); ++volumeRecommendationOptionsIndex)
   {
     volumeRecommendationOptionsJsonList[volumeRecommendationOptionsIndex].AsObject(m_volumeRecommendationOptions[volumeRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("volumeRecommendationOptions", std::move(volumeRecommendationOptionsJsonList));

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_currentPerformanceRiskHasBeenSet)
  {
   payload.WithString("currentPerformanceRisk", CurrentPerformanceRiskMapper::GetNameForCurrentPerformanceRisk(m_currentPerformanceRisk));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
