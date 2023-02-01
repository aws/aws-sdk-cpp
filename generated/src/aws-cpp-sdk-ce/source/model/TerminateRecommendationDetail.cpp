/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/TerminateRecommendationDetail.h>
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

TerminateRecommendationDetail::TerminateRecommendationDetail() : 
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
}

TerminateRecommendationDetail::TerminateRecommendationDetail(JsonView jsonValue) : 
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

TerminateRecommendationDetail& TerminateRecommendationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetString("EstimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue TerminateRecommendationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavings", m_estimatedMonthlySavings);

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
