/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansPurchaseAnalysisDetails.h>
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

SavingsPlansPurchaseAnalysisDetails::SavingsPlansPurchaseAnalysisDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SavingsPlansPurchaseAnalysisDetails& SavingsPlansPurchaseAnalysisDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LookbackPeriodInHours"))
  {
    m_lookbackPeriodInHours = jsonValue.GetString("LookbackPeriodInHours");
    m_lookbackPeriodInHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentAverageCoverage"))
  {
    m_currentAverageCoverage = jsonValue.GetString("CurrentAverageCoverage");
    m_currentAverageCoverageHasBeenSet = true;
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
  if(jsonValue.ValueExists("CurrentOnDemandSpend"))
  {
    m_currentOnDemandSpend = jsonValue.GetString("CurrentOnDemandSpend");
    m_currentOnDemandSpendHasBeenSet = true;
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
  if(jsonValue.ValueExists("EstimatedAverageCoverage"))
  {
    m_estimatedAverageCoverage = jsonValue.GetString("EstimatedAverageCoverage");
    m_estimatedAverageCoverageHasBeenSet = true;
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
  if(jsonValue.ValueExists("EstimatedCommitmentCost"))
  {
    m_estimatedCommitmentCost = jsonValue.GetString("EstimatedCommitmentCost");
    m_estimatedCommitmentCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestUsageTimestamp"))
  {
    m_latestUsageTimestamp = jsonValue.GetString("LatestUsageTimestamp");
    m_latestUsageTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("UpfrontCost");
    m_upfrontCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalMetadata"))
  {
    m_additionalMetadata = jsonValue.GetString("AdditionalMetadata");
    m_additionalMetadataHasBeenSet = true;
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

JsonValue SavingsPlansPurchaseAnalysisDetails::Jsonize() const
{
  JsonValue payload;

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_lookbackPeriodInHoursHasBeenSet)
  {
   payload.WithString("LookbackPeriodInHours", m_lookbackPeriodInHours);

  }

  if(m_currentAverageCoverageHasBeenSet)
  {
   payload.WithString("CurrentAverageCoverage", m_currentAverageCoverage);

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

  if(m_currentOnDemandSpendHasBeenSet)
  {
   payload.WithString("CurrentOnDemandSpend", m_currentOnDemandSpend);

  }

  if(m_existingHourlyCommitmentHasBeenSet)
  {
   payload.WithString("ExistingHourlyCommitment", m_existingHourlyCommitment);

  }

  if(m_hourlyCommitmentToPurchaseHasBeenSet)
  {
   payload.WithString("HourlyCommitmentToPurchase", m_hourlyCommitmentToPurchase);

  }

  if(m_estimatedAverageCoverageHasBeenSet)
  {
   payload.WithString("EstimatedAverageCoverage", m_estimatedAverageCoverage);

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

  if(m_estimatedSavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedSavingsAmount", m_estimatedSavingsAmount);

  }

  if(m_estimatedSavingsPercentageHasBeenSet)
  {
   payload.WithString("EstimatedSavingsPercentage", m_estimatedSavingsPercentage);

  }

  if(m_estimatedCommitmentCostHasBeenSet)
  {
   payload.WithString("EstimatedCommitmentCost", m_estimatedCommitmentCost);

  }

  if(m_latestUsageTimestampHasBeenSet)
  {
   payload.WithString("LatestUsageTimestamp", m_latestUsageTimestamp);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("UpfrontCost", m_upfrontCost);

  }

  if(m_additionalMetadataHasBeenSet)
  {
   payload.WithString("AdditionalMetadata", m_additionalMetadata);

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
