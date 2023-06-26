/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansPurchaseRecommendationDetail.h>
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

SavingsPlansPurchaseRecommendationDetail::SavingsPlansPurchaseRecommendationDetail() : 
    m_savingsPlansDetailsHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_estimatedROIHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedSPCostHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_estimatedAverageUtilizationHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_currentMinimumHourlyOnDemandSpendHasBeenSet(false),
    m_currentMaximumHourlyOnDemandSpendHasBeenSet(false),
    m_currentAverageHourlyOnDemandSpendHasBeenSet(false)
{
}

SavingsPlansPurchaseRecommendationDetail::SavingsPlansPurchaseRecommendationDetail(JsonView jsonValue) : 
    m_savingsPlansDetailsHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_estimatedROIHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedSPCostHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_estimatedAverageUtilizationHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_currentMinimumHourlyOnDemandSpendHasBeenSet(false),
    m_currentMaximumHourlyOnDemandSpendHasBeenSet(false),
    m_currentAverageHourlyOnDemandSpendHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansPurchaseRecommendationDetail& SavingsPlansPurchaseRecommendationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SavingsPlansDetails"))
  {
    m_savingsPlansDetails = jsonValue.GetObject("SavingsPlansDetails");

    m_savingsPlansDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("UpfrontCost");

    m_upfrontCostHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("EstimatedSPCost"))
  {
    m_estimatedSPCost = jsonValue.GetString("EstimatedSPCost");

    m_estimatedSPCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedOnDemandCost"))
  {
    m_estimatedOnDemandCost = jsonValue.GetString("EstimatedOnDemandCost");

    m_estimatedOnDemandCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedOnDemandCostWithCurrentCommitment"))
  {
    m_estimatedOnDemandCostWithCurrentCommitment = jsonValue.GetString("EstimatedOnDemandCostWithCurrentCommitment");

    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedSavingsAmount"))
  {
    m_estimatedSavingsAmount = jsonValue.GetString("EstimatedSavingsAmount");

    m_estimatedSavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedSavingsPercentage"))
  {
    m_estimatedSavingsPercentage = jsonValue.GetString("EstimatedSavingsPercentage");

    m_estimatedSavingsPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HourlyCommitmentToPurchase"))
  {
    m_hourlyCommitmentToPurchase = jsonValue.GetString("HourlyCommitmentToPurchase");

    m_hourlyCommitmentToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedAverageUtilization"))
  {
    m_estimatedAverageUtilization = jsonValue.GetString("EstimatedAverageUtilization");

    m_estimatedAverageUtilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlySavingsAmount"))
  {
    m_estimatedMonthlySavingsAmount = jsonValue.GetString("EstimatedMonthlySavingsAmount");

    m_estimatedMonthlySavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentMinimumHourlyOnDemandSpend"))
  {
    m_currentMinimumHourlyOnDemandSpend = jsonValue.GetString("CurrentMinimumHourlyOnDemandSpend");

    m_currentMinimumHourlyOnDemandSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentMaximumHourlyOnDemandSpend"))
  {
    m_currentMaximumHourlyOnDemandSpend = jsonValue.GetString("CurrentMaximumHourlyOnDemandSpend");

    m_currentMaximumHourlyOnDemandSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentAverageHourlyOnDemandSpend"))
  {
    m_currentAverageHourlyOnDemandSpend = jsonValue.GetString("CurrentAverageHourlyOnDemandSpend");

    m_currentAverageHourlyOnDemandSpendHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansPurchaseRecommendationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlansDetailsHasBeenSet)
  {
   payload.WithObject("SavingsPlansDetails", m_savingsPlansDetails.Jsonize());

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("UpfrontCost", m_upfrontCost);

  }

  if(m_estimatedROIHasBeenSet)
  {
   payload.WithString("EstimatedROI", m_estimatedROI);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_estimatedSPCostHasBeenSet)
  {
   payload.WithString("EstimatedSPCost", m_estimatedSPCost);

  }

  if(m_estimatedOnDemandCostHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCost", m_estimatedOnDemandCost);

  }

  if(m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCostWithCurrentCommitment", m_estimatedOnDemandCostWithCurrentCommitment);

  }

  if(m_estimatedSavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedSavingsAmount", m_estimatedSavingsAmount);

  }

  if(m_estimatedSavingsPercentageHasBeenSet)
  {
   payload.WithString("EstimatedSavingsPercentage", m_estimatedSavingsPercentage);

  }

  if(m_hourlyCommitmentToPurchaseHasBeenSet)
  {
   payload.WithString("HourlyCommitmentToPurchase", m_hourlyCommitmentToPurchase);

  }

  if(m_estimatedAverageUtilizationHasBeenSet)
  {
   payload.WithString("EstimatedAverageUtilization", m_estimatedAverageUtilization);

  }

  if(m_estimatedMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavingsAmount", m_estimatedMonthlySavingsAmount);

  }

  if(m_currentMinimumHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentMinimumHourlyOnDemandSpend", m_currentMinimumHourlyOnDemandSpend);

  }

  if(m_currentMaximumHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentMaximumHourlyOnDemandSpend", m_currentMaximumHourlyOnDemandSpend);

  }

  if(m_currentAverageHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentAverageHourlyOnDemandSpend", m_currentAverageHourlyOnDemandSpend);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
