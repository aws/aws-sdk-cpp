/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendation.h>
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

ECSServiceRecommendation::ECSServiceRecommendation() : 
    m_serviceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentServiceConfigurationHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_launchType(ECSServiceLaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(ECSServiceRecommendationFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_serviceRecommendationOptionsHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
}

ECSServiceRecommendation::ECSServiceRecommendation(JsonView jsonValue) : 
    m_serviceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentServiceConfigurationHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_launchType(ECSServiceLaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(ECSServiceRecommendationFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_serviceRecommendationOptionsHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceRecommendation& ECSServiceRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentServiceConfiguration"))
  {
    m_currentServiceConfiguration = jsonValue.GetObject("currentServiceConfiguration");

    m_currentServiceConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("lookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = jsonValue.GetDouble("lookbackPeriodInDays");

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = ECSServiceLaunchTypeMapper::GetECSServiceLaunchTypeForName(jsonValue.GetString("launchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = ECSServiceRecommendationFindingMapper::GetECSServiceRecommendationFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> findingReasonCodesJsonList = jsonValue.GetArray("findingReasonCodes");
    for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
    {
      m_findingReasonCodes.push_back(ECSServiceRecommendationFindingReasonCodeMapper::GetECSServiceRecommendationFindingReasonCodeForName(findingReasonCodesJsonList[findingReasonCodesIndex].AsString()));
    }
    m_findingReasonCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> serviceRecommendationOptionsJsonList = jsonValue.GetArray("serviceRecommendationOptions");
    for(unsigned serviceRecommendationOptionsIndex = 0; serviceRecommendationOptionsIndex < serviceRecommendationOptionsJsonList.GetLength(); ++serviceRecommendationOptionsIndex)
    {
      m_serviceRecommendationOptions.push_back(serviceRecommendationOptionsJsonList[serviceRecommendationOptionsIndex].AsObject());
    }
    m_serviceRecommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentPerformanceRisk"))
  {
    m_currentPerformanceRisk = CurrentPerformanceRiskMapper::GetCurrentPerformanceRiskForName(jsonValue.GetString("currentPerformanceRisk"));

    m_currentPerformanceRiskHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_currentServiceConfigurationHasBeenSet)
  {
   payload.WithObject("currentServiceConfiguration", m_currentServiceConfiguration.Jsonize());

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

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithDouble("lookbackPeriodInDays", m_lookbackPeriodInDays);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", ECSServiceLaunchTypeMapper::GetNameForECSServiceLaunchType(m_launchType));
  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", ECSServiceRecommendationFindingMapper::GetNameForECSServiceRecommendationFinding(m_finding));
  }

  if(m_findingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingReasonCodesJsonList(m_findingReasonCodes.size());
   for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
   {
     findingReasonCodesJsonList[findingReasonCodesIndex].AsString(ECSServiceRecommendationFindingReasonCodeMapper::GetNameForECSServiceRecommendationFindingReasonCode(m_findingReasonCodes[findingReasonCodesIndex]));
   }
   payload.WithArray("findingReasonCodes", std::move(findingReasonCodesJsonList));

  }

  if(m_serviceRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceRecommendationOptionsJsonList(m_serviceRecommendationOptions.size());
   for(unsigned serviceRecommendationOptionsIndex = 0; serviceRecommendationOptionsIndex < serviceRecommendationOptionsJsonList.GetLength(); ++serviceRecommendationOptionsIndex)
   {
     serviceRecommendationOptionsJsonList[serviceRecommendationOptionsIndex].AsObject(m_serviceRecommendationOptions[serviceRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("serviceRecommendationOptions", std::move(serviceRecommendationOptionsJsonList));

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
