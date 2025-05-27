/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ComparisonMetricValue.h>
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

ComparisonMetricValue::ComparisonMetricValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ComparisonMetricValue& ComparisonMetricValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaselineTimePeriodAmount"))
  {
    m_baselineTimePeriodAmount = jsonValue.GetString("BaselineTimePeriodAmount");
    m_baselineTimePeriodAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonTimePeriodAmount"))
  {
    m_comparisonTimePeriodAmount = jsonValue.GetString("ComparisonTimePeriodAmount");
    m_comparisonTimePeriodAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Difference"))
  {
    m_difference = jsonValue.GetString("Difference");
    m_differenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue ComparisonMetricValue::Jsonize() const
{
  JsonValue payload;

  if(m_baselineTimePeriodAmountHasBeenSet)
  {
   payload.WithString("BaselineTimePeriodAmount", m_baselineTimePeriodAmount);

  }

  if(m_comparisonTimePeriodAmountHasBeenSet)
  {
   payload.WithString("ComparisonTimePeriodAmount", m_comparisonTimePeriodAmount);

  }

  if(m_differenceHasBeenSet)
  {
   payload.WithString("Difference", m_difference);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
