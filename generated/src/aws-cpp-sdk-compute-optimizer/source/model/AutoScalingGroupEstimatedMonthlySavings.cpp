﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupEstimatedMonthlySavings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

AutoScalingGroupEstimatedMonthlySavings::AutoScalingGroupEstimatedMonthlySavings(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoScalingGroupEstimatedMonthlySavings& AutoScalingGroupEstimatedMonthlySavings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingGroupEstimatedMonthlySavings::Jsonize() const
{
  JsonValue payload;

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
