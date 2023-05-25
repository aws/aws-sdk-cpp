/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionRecommendation.h>
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

LambdaFunctionRecommendation::LambdaFunctionRecommendation() : 
    m_functionArnHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentMemorySize(0),
    m_currentMemorySizeHasBeenSet(false),
    m_numberOfInvocations(0),
    m_numberOfInvocationsHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(LambdaFunctionRecommendationFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_memorySizeRecommendationOptionsHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
}

LambdaFunctionRecommendation::LambdaFunctionRecommendation(JsonView jsonValue) : 
    m_functionArnHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currentMemorySize(0),
    m_currentMemorySizeHasBeenSet(false),
    m_numberOfInvocations(0),
    m_numberOfInvocationsHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookbackPeriodInDays(0.0),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_finding(LambdaFunctionRecommendationFinding::NOT_SET),
    m_findingHasBeenSet(false),
    m_findingReasonCodesHasBeenSet(false),
    m_memorySizeRecommendationOptionsHasBeenSet(false),
    m_currentPerformanceRisk(CurrentPerformanceRisk::NOT_SET),
    m_currentPerformanceRiskHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionRecommendation& LambdaFunctionRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionArn"))
  {
    m_functionArn = jsonValue.GetString("functionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionVersion"))
  {
    m_functionVersion = jsonValue.GetString("functionVersion");

    m_functionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentMemorySize"))
  {
    m_currentMemorySize = jsonValue.GetInteger("currentMemorySize");

    m_currentMemorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfInvocations"))
  {
    m_numberOfInvocations = jsonValue.GetInt64("numberOfInvocations");

    m_numberOfInvocationsHasBeenSet = true;
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

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = LambdaFunctionRecommendationFindingMapper::GetLambdaFunctionRecommendationFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> findingReasonCodesJsonList = jsonValue.GetArray("findingReasonCodes");
    for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
    {
      m_findingReasonCodes.push_back(LambdaFunctionRecommendationFindingReasonCodeMapper::GetLambdaFunctionRecommendationFindingReasonCodeForName(findingReasonCodesJsonList[findingReasonCodesIndex].AsString()));
    }
    m_findingReasonCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memorySizeRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> memorySizeRecommendationOptionsJsonList = jsonValue.GetArray("memorySizeRecommendationOptions");
    for(unsigned memorySizeRecommendationOptionsIndex = 0; memorySizeRecommendationOptionsIndex < memorySizeRecommendationOptionsJsonList.GetLength(); ++memorySizeRecommendationOptionsIndex)
    {
      m_memorySizeRecommendationOptions.push_back(memorySizeRecommendationOptionsJsonList[memorySizeRecommendationOptionsIndex].AsObject());
    }
    m_memorySizeRecommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentPerformanceRisk"))
  {
    m_currentPerformanceRisk = CurrentPerformanceRiskMapper::GetCurrentPerformanceRiskForName(jsonValue.GetString("currentPerformanceRisk"));

    m_currentPerformanceRiskHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("functionArn", m_functionArn);

  }

  if(m_functionVersionHasBeenSet)
  {
   payload.WithString("functionVersion", m_functionVersion);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_currentMemorySizeHasBeenSet)
  {
   payload.WithInteger("currentMemorySize", m_currentMemorySize);

  }

  if(m_numberOfInvocationsHasBeenSet)
  {
   payload.WithInt64("numberOfInvocations", m_numberOfInvocations);

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

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", LambdaFunctionRecommendationFindingMapper::GetNameForLambdaFunctionRecommendationFinding(m_finding));
  }

  if(m_findingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingReasonCodesJsonList(m_findingReasonCodes.size());
   for(unsigned findingReasonCodesIndex = 0; findingReasonCodesIndex < findingReasonCodesJsonList.GetLength(); ++findingReasonCodesIndex)
   {
     findingReasonCodesJsonList[findingReasonCodesIndex].AsString(LambdaFunctionRecommendationFindingReasonCodeMapper::GetNameForLambdaFunctionRecommendationFindingReasonCode(m_findingReasonCodes[findingReasonCodesIndex]));
   }
   payload.WithArray("findingReasonCodes", std::move(findingReasonCodesJsonList));

  }

  if(m_memorySizeRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memorySizeRecommendationOptionsJsonList(m_memorySizeRecommendationOptions.size());
   for(unsigned memorySizeRecommendationOptionsIndex = 0; memorySizeRecommendationOptionsIndex < memorySizeRecommendationOptionsJsonList.GetLength(); ++memorySizeRecommendationOptionsIndex)
   {
     memorySizeRecommendationOptionsJsonList[memorySizeRecommendationOptionsIndex].AsObject(m_memorySizeRecommendationOptions[memorySizeRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("memorySizeRecommendationOptions", std::move(memorySizeRecommendationOptionsJsonList));

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
