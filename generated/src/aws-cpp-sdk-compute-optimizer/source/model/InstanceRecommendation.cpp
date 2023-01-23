/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceRecommendation.h>
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

InstanceRecommendation::InstanceRecommendation() : 
    m_instanceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_currentInstanceTypeHasBeenSet(false),
    m_finding(Finding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_recommendationOptionsHasBeenSet(false),
    m_recommendationSourcesHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false),
    m_effectiveRecommendationPreferencesHasBeenSet(false),
    m_inferredWorkloadTypesHasBeenSet(false)
{
}

InstanceRecommendation::InstanceRecommendation(JsonView jsonValue) : 
    m_instanceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_currentInstanceTypeHasBeenSet(false),
    m_finding(Finding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_recommendationOptionsHasBeenSet(false),
    m_recommendationSourcesHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false),
    m_effectiveRecommendationPreferencesHasBeenSet(false),
    m_inferredWorkloadTypesHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceRecommendation& InstanceRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentInstanceType"))
  {
    m_currentInstanceType = jsonValue.GetString("currentInstanceType");

    m_currentInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = FindingMapper::GetFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> findingReasonCodesJsonList = jsonValue.GetArray("findingReasonCodes");
    for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
    {
      m_findingReasonCodes.push_back(InstanceRecommendationFindingReasonCodeMapper::GetInstanceRecommendationFindingReasonCodeForName(findingReasonCodesJsonList[findingReasonCodesIndex].AsString()));
    }
    m_findingReasonCodesHasBeenSet = true;
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

  if(jsonValue.ValueExists("recommendationOptions"))
  {
    Aws::Utils::Array<JsonView> recommendationOptionsJsonList = jsonValue.GetArray("recommendationOptions");
    for(unsigned recommendationOptionsIndex = 0; recommendationOptionsIndex < recommendationOptionsJsonList.GetLength(); ++recommendationOptionsIndex)
    {
      m_recommendationOptions.push_back(recommendationOptionsJsonList[recommendationOptionsIndex].AsObject());
    }
    m_recommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationSources"))
  {
    Aws::Utils::Array<JsonView> recommendationSourcesJsonList = jsonValue.GetArray("recommendationSources");
    for(unsigned recommendationSourcesIndex = 0; recommendationSourcesIndex < recommendationSourcesJsonList.GetLength(); ++recommendationSourcesIndex)
    {
      m_recommendationSources.push_back(recommendationSourcesJsonList[recommendationSourcesIndex].AsObject());
    }
    m_recommendationSourcesHasBeenSet = true;
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

  if(jsonValue.ValueExists("effectiveRecommendationPreferences"))
  {
    m_effectiveRecommendationPreferences = jsonValue.GetObject("effectiveRecommendationPreferences");

    m_effectiveRecommendationPreferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferredWorkloadTypes"))
  {
    Aws::Utils::Array<JsonView> inferredWorkloadTypesJsonList = jsonValue.GetArray("inferredWorkloadTypes");
    for(unsigned inferredWorkloadTypesIndex = 0; inferredWorkloadTypesIndex < inferredWorkloadTypesJsonList.GetLength(); ++inferredWorkloadTypesIndex)
    {
      m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(inferredWorkloadTypesJsonList[inferredWorkloadTypesIndex].AsString()));
    }
    m_inferredWorkloadTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_currentInstanceTypeHasBeenSet)
  {
   payload.WithString("currentInstanceType", m_currentInstanceType);

  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", FindingMapper::GetNameForFinding(m_finding));
  }

  if(m_findingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingReasonCodesJsonList(m_findingReasonCodes.size());
   for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
   {
     findingReasonCodesJsonList[findingReasonCodesIndex].AsString(InstanceRecommendationFindingReasonCodeMapper::GetNameForInstanceRecommendationFindingReasonCode(m_findingReasonCodes[findingReasonCodesIndex]));
   }
   payload.WithArray("findingReasonCodes", std::move(findingReasonCodesJsonList));

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

  if(m_recommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationOptionsJsonList(m_recommendationOptions.size());
   for(unsigned recommendationOptionsIndex = 0; recommendationOptionsIndex < recommendationOptionsJsonList.GetLength(); ++recommendationOptionsIndex)
   {
     recommendationOptionsJsonList[recommendationOptionsIndex].AsObject(m_recommendationOptions[recommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("recommendationOptions", std::move(recommendationOptionsJsonList));

  }

  if(m_recommendationSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationSourcesJsonList(m_recommendationSources.size());
   for(unsigned recommendationSourcesIndex = 0; recommendationSourcesIndex < recommendationSourcesJsonList.GetLength(); ++recommendationSourcesIndex)
   {
     recommendationSourcesJsonList[recommendationSourcesIndex].AsObject(m_recommendationSources[recommendationSourcesIndex].Jsonize());
   }
   payload.WithArray("recommendationSources", std::move(recommendationSourcesJsonList));

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_currentPerformanceRiskHasBeenSet)
  {
   payload.WithString("currentPerformanceRisk", CurrentPerformanceRiskMapper::GetNameForCurrentPerformanceRisk(m_currentPerformanceRisk));
  }

  if(m_effectiveRecommendationPreferencesHasBeenSet)
  {
   payload.WithObject("effectiveRecommendationPreferences", m_effectiveRecommendationPreferences.Jsonize());

  }

  if(m_inferredWorkloadTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferredWorkloadTypesJsonList(m_inferredWorkloadTypes.size());
   for(unsigned inferredWorkloadTypesIndex = 0; inferredWorkloadTypesIndex < inferredWorkloadTypesJsonList.GetLength(); ++inferredWorkloadTypesIndex)
   {
     inferredWorkloadTypesJsonList[inferredWorkloadTypesIndex].AsString(InferredWorkloadTypeMapper::GetNameForInferredWorkloadType(m_inferredWorkloadTypes[inferredWorkloadTypesIndex]));
   }
   payload.WithArray("inferredWorkloadTypes", std::move(inferredWorkloadTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
