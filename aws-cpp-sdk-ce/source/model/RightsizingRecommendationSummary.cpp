/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RightsizingRecommendationSummary.h>
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

RightsizingRecommendationSummary::RightsizingRecommendationSummary() : 
    m_totalRecommendationCountHasBeenSet(false),
    m_estimatedTotalMonthlySavingsAmountHasBeenSet(false),
    m_savingsCurrencyCodeHasBeenSet(false),
    m_savingsPercentageHasBeenSet(false)
{
}

RightsizingRecommendationSummary::RightsizingRecommendationSummary(JsonView jsonValue) : 
    m_totalRecommendationCountHasBeenSet(false),
    m_estimatedTotalMonthlySavingsAmountHasBeenSet(false),
    m_savingsCurrencyCodeHasBeenSet(false),
    m_savingsPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

RightsizingRecommendationSummary& RightsizingRecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalRecommendationCount"))
  {
    m_totalRecommendationCount = jsonValue.GetString("TotalRecommendationCount");

    m_totalRecommendationCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedTotalMonthlySavingsAmount"))
  {
    m_estimatedTotalMonthlySavingsAmount = jsonValue.GetString("EstimatedTotalMonthlySavingsAmount");

    m_estimatedTotalMonthlySavingsAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsCurrencyCode"))
  {
    m_savingsCurrencyCode = jsonValue.GetString("SavingsCurrencyCode");

    m_savingsCurrencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SavingsPercentage"))
  {
    m_savingsPercentage = jsonValue.GetString("SavingsPercentage");

    m_savingsPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue RightsizingRecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalRecommendationCountHasBeenSet)
  {
   payload.WithString("TotalRecommendationCount", m_totalRecommendationCount);

  }

  if(m_estimatedTotalMonthlySavingsAmountHasBeenSet)
  {
   payload.WithString("EstimatedTotalMonthlySavingsAmount", m_estimatedTotalMonthlySavingsAmount);

  }

  if(m_savingsCurrencyCodeHasBeenSet)
  {
   payload.WithString("SavingsCurrencyCode", m_savingsCurrencyCode);

  }

  if(m_savingsPercentageHasBeenSet)
  {
   payload.WithString("SavingsPercentage", m_savingsPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
