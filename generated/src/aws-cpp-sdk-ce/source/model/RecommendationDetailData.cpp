/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RecommendationDetailData.h>
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

RecommendationDetailData::RecommendationDetailData() : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_savingsPlansType(SupportedSavingsPlansType::NOT_SET),
    m_savingsPlansTypeHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false),
    m_latestUsageTimestampHasBeenSet(false),
    m_currentAverageHourlyOnDemandSpendHasBeenSet(false),
    m_currentMaximumHourlyOnDemandSpendHasBeenSet(false),
    m_currentMinimumHourlyOnDemandSpendHasBeenSet(false),
    m_estimatedAverageUtilizationHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false),
    m_estimatedROIHasBeenSet(false),
    m_estimatedSPCostHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_existingHourlyCommitmentHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_currentAverageCoverageHasBeenSet(false),
    m_estimatedAverageCoverageHasBeenSet(false),
    m_metricsOverLookbackPeriodHasBeenSet(false)
{
}

RecommendationDetailData::RecommendationDetailData(JsonView jsonValue) : 
    m_accountScope(AccountScope::NOT_SET),
    m_accountScopeHasBeenSet(false),
    m_lookbackPeriodInDays(LookbackPeriodInDays::NOT_SET),
    m_lookbackPeriodInDaysHasBeenSet(false),
    m_savingsPlansType(SupportedSavingsPlansType::NOT_SET),
    m_savingsPlansTypeHasBeenSet(false),
    m_termInYears(TermInYears::NOT_SET),
    m_termInYearsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_generationTimestampHasBeenSet(false),
    m_latestUsageTimestampHasBeenSet(false),
    m_currentAverageHourlyOnDemandSpendHasBeenSet(false),
    m_currentMaximumHourlyOnDemandSpendHasBeenSet(false),
    m_currentMinimumHourlyOnDemandSpendHasBeenSet(false),
    m_estimatedAverageUtilizationHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet(false),
    m_estimatedROIHasBeenSet(false),
    m_estimatedSPCostHasBeenSet(false),
    m_estimatedSavingsAmountHasBeenSet(false),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_existingHourlyCommitmentHasBeenSet(false),
    m_hourlyCommitmentToPurchaseHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_currentAverageCoverageHasBeenSet(false),
    m_estimatedAverageCoverageHasBeenSet(false),
    m_metricsOverLookbackPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationDetailData& RecommendationDetailData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountScope"))
  {
    m_accountScope = AccountScopeMapper::GetAccountScopeForName(jsonValue.GetString("AccountScope"));

    m_accountScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = LookbackPeriodInDaysMapper::GetLookbackPeriodInDaysForName(jsonValue.GetString("LookbackPeriodInDays"));

    m_lookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPlansType"))
  {
    m_savingsPlansType = SupportedSavingsPlansTypeMapper::GetSupportedSavingsPlansTypeForName(jsonValue.GetString("SavingsPlansType"));

    m_savingsPlansTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TermInYears"))
  {
    m_termInYears = TermInYearsMapper::GetTermInYearsForName(jsonValue.GetString("TermInYears"));

    m_termInYearsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaymentOption"))
  {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceFamily"))
  {
    m_instanceFamily = jsonValue.GetString("InstanceFamily");

    m_instanceFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferingId"))
  {
    m_offeringId = jsonValue.GetString("OfferingId");

    m_offeringIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationTimestamp"))
  {
    m_generationTimestamp = jsonValue.GetString("GenerationTimestamp");

    m_generationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestUsageTimestamp"))
  {
    m_latestUsageTimestamp = jsonValue.GetString("LatestUsageTimestamp");

    m_latestUsageTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentAverageHourlyOnDemandSpend"))
  {
    m_currentAverageHourlyOnDemandSpend = jsonValue.GetString("CurrentAverageHourlyOnDemandSpend");

    m_currentAverageHourlyOnDemandSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentMaximumHourlyOnDemandSpend"))
  {
    m_currentMaximumHourlyOnDemandSpend = jsonValue.GetString("CurrentMaximumHourlyOnDemandSpend");

    m_currentMaximumHourlyOnDemandSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentMinimumHourlyOnDemandSpend"))
  {
    m_currentMinimumHourlyOnDemandSpend = jsonValue.GetString("CurrentMinimumHourlyOnDemandSpend");

    m_currentMinimumHourlyOnDemandSpendHasBeenSet = true;
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

  if(jsonValue.ValueExists("EstimatedROI"))
  {
    m_estimatedROI = jsonValue.GetString("EstimatedROI");

    m_estimatedROIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedSPCost"))
  {
    m_estimatedSPCost = jsonValue.GetString("EstimatedSPCost");

    m_estimatedSPCostHasBeenSet = true;
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

  if(jsonValue.ValueExists("ExistingHourlyCommitment"))
  {
    m_existingHourlyCommitment = jsonValue.GetString("ExistingHourlyCommitment");

    m_existingHourlyCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HourlyCommitmentToPurchase"))
  {
    m_hourlyCommitmentToPurchase = jsonValue.GetString("HourlyCommitmentToPurchase");

    m_hourlyCommitmentToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("UpfrontCost");

    m_upfrontCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentAverageCoverage"))
  {
    m_currentAverageCoverage = jsonValue.GetString("CurrentAverageCoverage");

    m_currentAverageCoverageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedAverageCoverage"))
  {
    m_estimatedAverageCoverage = jsonValue.GetString("EstimatedAverageCoverage");

    m_estimatedAverageCoverageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricsOverLookbackPeriod"))
  {
    Aws::Utils::Array<JsonView> metricsOverLookbackPeriodJsonList = jsonValue.GetArray("MetricsOverLookbackPeriod");
    for(unsigned metricsOverLookbackPeriodIndex = 0; metricsOverLookbackPeriodIndex < metricsOverLookbackPeriodJsonList.GetLength(); ++metricsOverLookbackPeriodIndex)
    {
      m_metricsOverLookbackPeriod.push_back(metricsOverLookbackPeriodJsonList[metricsOverLookbackPeriodIndex].AsObject());
    }
    m_metricsOverLookbackPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationDetailData::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("AccountScope", AccountScopeMapper::GetNameForAccountScope(m_accountScope));
  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithString("LookbackPeriodInDays", LookbackPeriodInDaysMapper::GetNameForLookbackPeriodInDays(m_lookbackPeriodInDays));
  }

  if(m_savingsPlansTypeHasBeenSet)
  {
   payload.WithString("SavingsPlansType", SupportedSavingsPlansTypeMapper::GetNameForSupportedSavingsPlansType(m_savingsPlansType));
  }

  if(m_termInYearsHasBeenSet)
  {
   payload.WithString("TermInYears", TermInYearsMapper::GetNameForTermInYears(m_termInYears));
  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_instanceFamilyHasBeenSet)
  {
   payload.WithString("InstanceFamily", m_instanceFamily);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("OfferingId", m_offeringId);

  }

  if(m_generationTimestampHasBeenSet)
  {
   payload.WithString("GenerationTimestamp", m_generationTimestamp);

  }

  if(m_latestUsageTimestampHasBeenSet)
  {
   payload.WithString("LatestUsageTimestamp", m_latestUsageTimestamp);

  }

  if(m_currentAverageHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentAverageHourlyOnDemandSpend", m_currentAverageHourlyOnDemandSpend);

  }

  if(m_currentMaximumHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentMaximumHourlyOnDemandSpend", m_currentMaximumHourlyOnDemandSpend);

  }

  if(m_currentMinimumHourlyOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentMinimumHourlyOnDemandSpend", m_currentMinimumHourlyOnDemandSpend);

  }

  if(m_estimatedAverageUtilizationHasBeenSet)
  {
   payload.WithString("EstimatedAverageUtilization", m_estimatedAverageUtilization);

  }

  if(m_estimatedMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavingsAmount", m_estimatedMonthlySavingsAmount);

  }

  if(m_estimatedOnDemandCostHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCost", m_estimatedOnDemandCost);

  }

  if(m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet)
  {
   payload.WithString("EstimatedOnDemandCostWithCurrentCommitment", m_estimatedOnDemandCostWithCurrentCommitment);

  }

  if(m_estimatedROIHasBeenSet)
  {
   payload.WithString("EstimatedROI", m_estimatedROI);

  }

  if(m_estimatedSPCostHasBeenSet)
  {
   payload.WithString("EstimatedSPCost", m_estimatedSPCost);

  }

  if(m_estimatedSavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedSavingsAmount", m_estimatedSavingsAmount);

  }

  if(m_estimatedSavingsPercentageHasBeenSet)
  {
   payload.WithString("EstimatedSavingsPercentage", m_estimatedSavingsPercentage);

  }

  if(m_existingHourlyCommitmentHasBeenSet)
  {
   payload.WithString("ExistingHourlyCommitment", m_existingHourlyCommitment);

  }

  if(m_hourlyCommitmentToPurchaseHasBeenSet)
  {
   payload.WithString("HourlyCommitmentToPurchase", m_hourlyCommitmentToPurchase);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("UpfrontCost", m_upfrontCost);

  }

  if(m_currentAverageCoverageHasBeenSet)
  {
   payload.WithString("CurrentAverageCoverage", m_currentAverageCoverage);

  }

  if(m_estimatedAverageCoverageHasBeenSet)
  {
   payload.WithString("EstimatedAverageCoverage", m_estimatedAverageCoverage);

  }

  if(m_metricsOverLookbackPeriodHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsOverLookbackPeriodJsonList(m_metricsOverLookbackPeriod.size());
   for(unsigned metricsOverLookbackPeriodIndex = 0; metricsOverLookbackPeriodIndex < metricsOverLookbackPeriodJsonList.GetLength(); ++metricsOverLookbackPeriodIndex)
   {
     metricsOverLookbackPeriodJsonList[metricsOverLookbackPeriodIndex].AsObject(m_metricsOverLookbackPeriod[metricsOverLookbackPeriodIndex].Jsonize());
   }
   payload.WithArray("MetricsOverLookbackPeriod", std::move(metricsOverLookbackPeriodJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
