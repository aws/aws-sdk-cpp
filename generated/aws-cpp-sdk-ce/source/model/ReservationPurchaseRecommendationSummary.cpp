/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservationPurchaseRecommendationSummary.h>
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

ReservationPurchaseRecommendationSummary::ReservationPurchaseRecommendationSummary() : 
    m_totalEstimatedMonthlySavingsAmountHasBeenSet(false),
    m_totalEstimatedMonthlySavingsPercentageHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
}

ReservationPurchaseRecommendationSummary::ReservationPurchaseRecommendationSummary(JsonView jsonValue) : 
    m_totalEstimatedMonthlySavingsAmountHasBeenSet(false),
    m_totalEstimatedMonthlySavingsPercentageHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPurchaseRecommendationSummary& ReservationPurchaseRecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalEstimatedMonthlySavingsAmount"))
  {
    m_totalEstimatedMonthlySavingsAmount = jsonValue.GetString("TotalEstimatedMonthlySavingsAmount");

    m_totalEstimatedMonthlySavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalEstimatedMonthlySavingsPercentage"))
  {
    m_totalEstimatedMonthlySavingsPercentage = jsonValue.GetString("TotalEstimatedMonthlySavingsPercentage");

    m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationPurchaseRecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalEstimatedMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("TotalEstimatedMonthlySavingsAmount", m_totalEstimatedMonthlySavingsAmount);

  }

  if(m_totalEstimatedMonthlySavingsPercentageHasBeenSet)
  {
   payload.WithString("TotalEstimatedMonthlySavingsPercentage", m_totalEstimatedMonthlySavingsPercentage);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
