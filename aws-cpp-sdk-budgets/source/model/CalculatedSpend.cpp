/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/CalculatedSpend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

CalculatedSpend::CalculatedSpend() : 
    m_actualSpendHasBeenSet(false),
    m_forecastedSpendHasBeenSet(false)
{
}

CalculatedSpend::CalculatedSpend(JsonView jsonValue) : 
    m_actualSpendHasBeenSet(false),
    m_forecastedSpendHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedSpend& CalculatedSpend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActualSpend"))
  {
    m_actualSpend = jsonValue.GetObject("ActualSpend");

    m_actualSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastedSpend"))
  {
    m_forecastedSpend = jsonValue.GetObject("ForecastedSpend");

    m_forecastedSpendHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedSpend::Jsonize() const
{
  JsonValue payload;

  if(m_actualSpendHasBeenSet)
  {
   payload.WithObject("ActualSpend", m_actualSpend.Jsonize());

  }

  if(m_forecastedSpendHasBeenSet)
  {
   payload.WithObject("ForecastedSpend", m_forecastedSpend.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
