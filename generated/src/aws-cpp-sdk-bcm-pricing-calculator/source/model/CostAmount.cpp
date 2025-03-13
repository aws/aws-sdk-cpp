/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/CostAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

CostAmount::CostAmount(JsonView jsonValue)
{
  *this = jsonValue;
}

CostAmount& CostAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue CostAmount::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
