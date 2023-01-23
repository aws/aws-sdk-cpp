/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservationPurchaseRecommendationDetail.h>
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

ReservationPurchaseRecommendationDetail::ReservationPurchaseRecommendationDetail() : 
    m_accountIdHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_recommendedNumberOfInstancesToPurchaseHasBeenSet(false),
    m_recommendedNormalizedUnitsToPurchaseHasBeenSet(false),
    m_minimumNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_minimumNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_maximumNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_maximumNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_averageNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_averageNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_averageUtilizationHasBeenSet(false),
    m_estimatedBreakEvenInMonthsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedMonthlySavingsPercentageHasBeenSet(false),
    m_estimatedMonthlyOnDemandCostHasBeenSet(false),
    m_estimatedReservationCostForLookbackPeriodHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_recurringStandardMonthlyCostHasBeenSet(false)
{
}

ReservationPurchaseRecommendationDetail::ReservationPurchaseRecommendationDetail(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_recommendedNumberOfInstancesToPurchaseHasBeenSet(false),
    m_recommendedNormalizedUnitsToPurchaseHasBeenSet(false),
    m_minimumNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_minimumNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_maximumNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_maximumNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_averageNumberOfInstancesUsedPerHourHasBeenSet(false),
    m_averageNormalizedUnitsUsedPerHourHasBeenSet(false),
    m_averageUtilizationHasBeenSet(false),
    m_estimatedBreakEvenInMonthsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_estimatedMonthlySavingsAmountHasBeenSet(false),
    m_estimatedMonthlySavingsPercentageHasBeenSet(false),
    m_estimatedMonthlyOnDemandCostHasBeenSet(false),
    m_estimatedReservationCostForLookbackPeriodHasBeenSet(false),
    m_upfrontCostHasBeenSet(false),
    m_recurringStandardMonthlyCostHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPurchaseRecommendationDetail& ReservationPurchaseRecommendationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceDetails"))
  {
    m_instanceDetails = jsonValue.GetObject("InstanceDetails");

    m_instanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendedNumberOfInstancesToPurchase"))
  {
    m_recommendedNumberOfInstancesToPurchase = jsonValue.GetString("RecommendedNumberOfInstancesToPurchase");

    m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendedNormalizedUnitsToPurchase"))
  {
    m_recommendedNormalizedUnitsToPurchase = jsonValue.GetString("RecommendedNormalizedUnitsToPurchase");

    m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumNumberOfInstancesUsedPerHour"))
  {
    m_minimumNumberOfInstancesUsedPerHour = jsonValue.GetString("MinimumNumberOfInstancesUsedPerHour");

    m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumNormalizedUnitsUsedPerHour"))
  {
    m_minimumNormalizedUnitsUsedPerHour = jsonValue.GetString("MinimumNormalizedUnitsUsedPerHour");

    m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumNumberOfInstancesUsedPerHour"))
  {
    m_maximumNumberOfInstancesUsedPerHour = jsonValue.GetString("MaximumNumberOfInstancesUsedPerHour");

    m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumNormalizedUnitsUsedPerHour"))
  {
    m_maximumNormalizedUnitsUsedPerHour = jsonValue.GetString("MaximumNormalizedUnitsUsedPerHour");

    m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageNumberOfInstancesUsedPerHour"))
  {
    m_averageNumberOfInstancesUsedPerHour = jsonValue.GetString("AverageNumberOfInstancesUsedPerHour");

    m_averageNumberOfInstancesUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageNormalizedUnitsUsedPerHour"))
  {
    m_averageNormalizedUnitsUsedPerHour = jsonValue.GetString("AverageNormalizedUnitsUsedPerHour");

    m_averageNormalizedUnitsUsedPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageUtilization"))
  {
    m_averageUtilization = jsonValue.GetString("AverageUtilization");

    m_averageUtilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedBreakEvenInMonths"))
  {
    m_estimatedBreakEvenInMonths = jsonValue.GetString("EstimatedBreakEvenInMonths");

    m_estimatedBreakEvenInMonthsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlySavingsAmount"))
  {
    m_estimatedMonthlySavingsAmount = jsonValue.GetString("EstimatedMonthlySavingsAmount");

    m_estimatedMonthlySavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlySavingsPercentage"))
  {
    m_estimatedMonthlySavingsPercentage = jsonValue.GetString("EstimatedMonthlySavingsPercentage");

    m_estimatedMonthlySavingsPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlyOnDemandCost"))
  {
    m_estimatedMonthlyOnDemandCost = jsonValue.GetString("EstimatedMonthlyOnDemandCost");

    m_estimatedMonthlyOnDemandCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedReservationCostForLookbackPeriod"))
  {
    m_estimatedReservationCostForLookbackPeriod = jsonValue.GetString("EstimatedReservationCostForLookbackPeriod");

    m_estimatedReservationCostForLookbackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("UpfrontCost");

    m_upfrontCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecurringStandardMonthlyCost"))
  {
    m_recurringStandardMonthlyCost = jsonValue.GetString("RecurringStandardMonthlyCost");

    m_recurringStandardMonthlyCostHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationPurchaseRecommendationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_instanceDetailsHasBeenSet)
  {
   payload.WithObject("InstanceDetails", m_instanceDetails.Jsonize());

  }

  if(m_recommendedNumberOfInstancesToPurchaseHasBeenSet)
  {
   payload.WithString("RecommendedNumberOfInstancesToPurchase", m_recommendedNumberOfInstancesToPurchase);

  }

  if(m_recommendedNormalizedUnitsToPurchaseHasBeenSet)
  {
   payload.WithString("RecommendedNormalizedUnitsToPurchase", m_recommendedNormalizedUnitsToPurchase);

  }

  if(m_minimumNumberOfInstancesUsedPerHourHasBeenSet)
  {
   payload.WithString("MinimumNumberOfInstancesUsedPerHour", m_minimumNumberOfInstancesUsedPerHour);

  }

  if(m_minimumNormalizedUnitsUsedPerHourHasBeenSet)
  {
   payload.WithString("MinimumNormalizedUnitsUsedPerHour", m_minimumNormalizedUnitsUsedPerHour);

  }

  if(m_maximumNumberOfInstancesUsedPerHourHasBeenSet)
  {
   payload.WithString("MaximumNumberOfInstancesUsedPerHour", m_maximumNumberOfInstancesUsedPerHour);

  }

  if(m_maximumNormalizedUnitsUsedPerHourHasBeenSet)
  {
   payload.WithString("MaximumNormalizedUnitsUsedPerHour", m_maximumNormalizedUnitsUsedPerHour);

  }

  if(m_averageNumberOfInstancesUsedPerHourHasBeenSet)
  {
   payload.WithString("AverageNumberOfInstancesUsedPerHour", m_averageNumberOfInstancesUsedPerHour);

  }

  if(m_averageNormalizedUnitsUsedPerHourHasBeenSet)
  {
   payload.WithString("AverageNormalizedUnitsUsedPerHour", m_averageNormalizedUnitsUsedPerHour);

  }

  if(m_averageUtilizationHasBeenSet)
  {
   payload.WithString("AverageUtilization", m_averageUtilization);

  }

  if(m_estimatedBreakEvenInMonthsHasBeenSet)
  {
   payload.WithString("EstimatedBreakEvenInMonths", m_estimatedBreakEvenInMonths);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_estimatedMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavingsAmount", m_estimatedMonthlySavingsAmount);

  }

  if(m_estimatedMonthlySavingsPercentageHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavingsPercentage", m_estimatedMonthlySavingsPercentage);

  }

  if(m_estimatedMonthlyOnDemandCostHasBeenSet)
  {
   payload.WithString("EstimatedMonthlyOnDemandCost", m_estimatedMonthlyOnDemandCost);

  }

  if(m_estimatedReservationCostForLookbackPeriodHasBeenSet)
  {
   payload.WithString("EstimatedReservationCostForLookbackPeriod", m_estimatedReservationCostForLookbackPeriod);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("UpfrontCost", m_upfrontCost);

  }

  if(m_recurringStandardMonthlyCostHasBeenSet)
  {
   payload.WithString("RecurringStandardMonthlyCost", m_recurringStandardMonthlyCost);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
