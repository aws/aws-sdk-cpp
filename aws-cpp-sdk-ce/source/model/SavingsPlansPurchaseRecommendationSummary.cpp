/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansPurchaseRecommendationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

SavingsPlansPurchaseRecommendationSummary::SavingsPlansPurchaseRecommendationSummary() : 
    m_estimatedROIHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedTotalCostHasBeenSet(false),
    m_currentOnDemandSpendHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_totalRecommendationCountHasBeenSet(false),
    m_dailyCommitmentToPurchaseHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false)
{
}

SavingsPlansPurchaseRecommendationSummary::SavingsPlansPurchaseRecommendationSummary(JsonView jsonValue) : 
    m_estimatedROIHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedTotalCostHasBeenSet(false),
    m_currentOnDemandSpendHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_totalRecommendationCountHasBeenSet(false),
    m_dailyCommitmentToPurchaseHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansPurchaseRecommendationSummary& SavingsPlansPurchaseRecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedROI"))
  {
    m_estimatedROI = jsonValue.GetString("EstimatedROI");

    m_estimatedROIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedTotalCost"))
  {
    m_estimatedTotalCost = jsonValue.GetString("EstimatedTotalCost");

    m_estimatedTotalCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentOnDemandSpend"))
  {
    m_currentOnDemandSpend = jsonValue.GetString("CurrentOnDemandSpend");

    m_currentOnDemandSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedSavingsAmount"))
  {
    m_estimatedSavingsAmount = jsonValue.GetString("EstimatedSavingsAmount");

    m_estimatedSavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalRecommendationCount"))
  {
    m_totalRecommendationCount = jsonValue.GetString("TotalRecommendationCount");

    m_totalRecommendationCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyCommitmentToPurchase"))
  {
    m_dailyCommitmentToPurchase = jsonValue.GetString("DailyCommitmentToPurchase");

    m_dailyCommitmentToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HourlyCommitmentToPurchase"))
  {
    m_hourlyCommitmentToPurchase = jsonValue.GetString("HourlyCommitmentToPurchase");

    m_hourlyCommitmentToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedSavingsPercentage"))
  {
    m_estimatedSavingsPercentage = jsonValue.GetString("EstimatedSavingsPercentage");

    m_estimatedSavingsPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlySavingsAmount"))
  {
    m_estimatedMonthlySavingsAmount = jsonValue.GetString("EstimatedMonthlySavingsAmount");

    m_estimatedMonthlySavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedOnDemandCostWithCurrentCommitment"))
  {
    m_estimatedOnDemandCostWithCurrentCommitment = jsonValue.GetString("EstimatedOnDemandCostWithCurrentCommitment");

    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansPurchaseRecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedROIHasBeenSet)
  {
   payload.WithString("EstimatedROI", m_estimatedROI);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_estimatedTotalCostHasBeenSet)
  {
   payload.WithString("EstimatedTotalCost", m_estimatedTotalCost);

  }

  if(m_currentOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentOnDemandSpend", m_currentOnDemandSpend);

  }

  if(m_estimatedSavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedSavingsAmount", m_estimatedSavingsAmount);

  }

  if(m_totalRecommendationCountHasBeenSet)
  {
   payload.WithString("TotalRecommendationCount", m_totalRecommendationCount);

  }

  if(m_dailyCommitmentToPurchaseHasBeenSet)
  {
   payload.WithString("DailyCommitmentToPurchase", m_dailyCommitmentToPurchase);

  }

  if(m_hourlyCommitmentToPurchaseHasBeenSet)
  {
   payload.WithString("HourlyCommitmentToPurchase", m_hourlyCommitmentToPurchase);

  }

  if(m_estimatedSavingsPercentageHasBeenSet)
  {
   payload.WithString("EstimatedSavingsPercentage", m_estimatedSavingsPercentage);

  }

  if(m_estimatedMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavingsAmount", m_estimatedMonthlySavingsAmount);

  }

  if(m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCostWithCurrentCommitment", m_estimatedOnDemandCostWithCurrentCommitment);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
