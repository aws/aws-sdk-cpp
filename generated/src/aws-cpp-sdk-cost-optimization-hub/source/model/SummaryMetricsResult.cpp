/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/SummaryMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

SummaryMetricsResult::SummaryMetricsResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SummaryMetricsResult& SummaryMetricsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsPercentage"))
  {
    m_savingsPercentage = jsonValue.GetString("savingsPercentage");
    m_savingsPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryMetricsResult::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPercentageHasBeenSet)
  {
   payload.WithString("savingsPercentage", m_savingsPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
