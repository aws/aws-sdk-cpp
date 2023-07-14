/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/TrustedAdvisorCostOptimizingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCostOptimizingSummary::TrustedAdvisorCostOptimizingSummary() : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedPercentMonthlySavings(0.0),
    m_estimatedPercentMonthlySavingsHasBeenSet(false)
{
}

TrustedAdvisorCostOptimizingSummary::TrustedAdvisorCostOptimizingSummary(JsonView jsonValue) : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedPercentMonthlySavings(0.0),
    m_estimatedPercentMonthlySavingsHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCostOptimizingSummary& TrustedAdvisorCostOptimizingSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedPercentMonthlySavings"))
  {
    m_estimatedPercentMonthlySavings = jsonValue.GetDouble("estimatedPercentMonthlySavings");

    m_estimatedPercentMonthlySavingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCostOptimizingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlySavings", m_estimatedMonthlySavings);

  }

  if(m_estimatedPercentMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedPercentMonthlySavings", m_estimatedPercentMonthlySavings);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
