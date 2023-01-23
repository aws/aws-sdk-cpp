/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/MonetaryAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

MonetaryAmount::MonetaryAmount() : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false)
{
}

MonetaryAmount::MonetaryAmount(JsonView jsonValue) : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

MonetaryAmount& MonetaryAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currencyCode"));

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonetaryAmount::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", CurrencyCodeMapper::GetNameForCurrencyCode(m_currencyCode));
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
