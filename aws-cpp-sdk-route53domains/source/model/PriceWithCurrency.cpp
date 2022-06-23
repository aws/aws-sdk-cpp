/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/PriceWithCurrency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

PriceWithCurrency::PriceWithCurrency() : 
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

PriceWithCurrency::PriceWithCurrency(JsonView jsonValue) : 
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
  *this = jsonValue;
}

PriceWithCurrency& PriceWithCurrency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Price"))
  {
    m_price = jsonValue.GetDouble("Price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Currency"))
  {
    m_currency = jsonValue.GetString("Currency");

    m_currencyHasBeenSet = true;
  }

  return *this;
}

JsonValue PriceWithCurrency::Jsonize() const
{
  JsonValue payload;

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("Price", m_price);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("Currency", m_currency);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
