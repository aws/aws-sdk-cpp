﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationSummary.h>
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

RecommendationSummary::RecommendationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendationSummary& RecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("summaries"))
  {
    Aws::Utils::Array<JsonView> summariesJsonList = jsonValue.GetArray("summaries");
    for(unsigned summariesIndex = 0; summariesIndex < summariesJsonList.GetLength(); ++summariesIndex)
    {
      m_summaries.push_back(summariesJsonList[summariesIndex].AsObject());
    }
    m_summariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleSummaries"))
  {
    Aws::Utils::Array<JsonView> idleSummariesJsonList = jsonValue.GetArray("idleSummaries");
    for(unsigned idleSummariesIndex = 0; idleSummariesIndex < idleSummariesJsonList.GetLength(); ++idleSummariesIndex)
    {
      m_idleSummaries.push_back(idleSummariesJsonList[idleSummariesIndex].AsObject());
    }
    m_idleSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendationResourceType"))
  {
    m_recommendationResourceType = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(jsonValue.GetString("recommendationResourceType"));
    m_recommendationResourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");
    m_savingsOpportunityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleSavingsOpportunity"))
  {
    m_idleSavingsOpportunity = jsonValue.GetObject("idleSavingsOpportunity");
    m_idleSavingsOpportunityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedSavingsOpportunity"))
  {
    m_aggregatedSavingsOpportunity = jsonValue.GetObject("aggregatedSavingsOpportunity");
    m_aggregatedSavingsOpportunityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentPerformanceRiskRatings"))
  {
    m_currentPerformanceRiskRatings = jsonValue.GetObject("currentPerformanceRiskRatings");
    m_currentPerformanceRiskRatingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferredWorkloadSavings"))
  {
    Aws::Utils::Array<JsonView> inferredWorkloadSavingsJsonList = jsonValue.GetArray("inferredWorkloadSavings");
    for(unsigned inferredWorkloadSavingsIndex = 0; inferredWorkloadSavingsIndex < inferredWorkloadSavingsJsonList.GetLength(); ++inferredWorkloadSavingsIndex)
    {
      m_inferredWorkloadSavings.push_back(inferredWorkloadSavingsJsonList[inferredWorkloadSavingsIndex].AsObject());
    }
    m_inferredWorkloadSavingsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_summariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> summariesJsonList(m_summaries.size());
   for(unsigned summariesIndex = 0; summariesIndex < summariesJsonList.GetLength(); ++summariesIndex)
   {
     summariesJsonList[summariesIndex].AsObject(m_summaries[summariesIndex].Jsonize());
   }
   payload.WithArray("summaries", std::move(summariesJsonList));

  }

  if(m_idleSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idleSummariesJsonList(m_idleSummaries.size());
   for(unsigned idleSummariesIndex = 0; idleSummariesIndex < idleSummariesJsonList.GetLength(); ++idleSummariesIndex)
   {
     idleSummariesJsonList[idleSummariesIndex].AsObject(m_idleSummaries[idleSummariesIndex].Jsonize());
   }
   payload.WithArray("idleSummaries", std::move(idleSummariesJsonList));

  }

  if(m_recommendationResourceTypeHasBeenSet)
  {
   payload.WithString("recommendationResourceType", RecommendationSourceTypeMapper::GetNameForRecommendationSourceType(m_recommendationResourceType));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

  }

  if(m_idleSavingsOpportunityHasBeenSet)
  {
   payload.WithObject("idleSavingsOpportunity", m_idleSavingsOpportunity.Jsonize());

  }

  if(m_aggregatedSavingsOpportunityHasBeenSet)
  {
   payload.WithObject("aggregatedSavingsOpportunity", m_aggregatedSavingsOpportunity.Jsonize());

  }

  if(m_currentPerformanceRiskRatingsHasBeenSet)
  {
   payload.WithObject("currentPerformanceRiskRatings", m_currentPerformanceRiskRatings.Jsonize());

  }

  if(m_inferredWorkloadSavingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferredWorkloadSavingsJsonList(m_inferredWorkloadSavings.size());
   for(unsigned inferredWorkloadSavingsIndex = 0; inferredWorkloadSavingsIndex < inferredWorkloadSavingsJsonList.GetLength(); ++inferredWorkloadSavingsIndex)
   {
     inferredWorkloadSavingsJsonList[inferredWorkloadSavingsIndex].AsObject(m_inferredWorkloadSavings[inferredWorkloadSavingsIndex].Jsonize());
   }
   payload.WithArray("inferredWorkloadSavings", std::move(inferredWorkloadSavingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
