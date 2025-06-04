/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceCurrencyAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

InvoiceCurrencyAmount::InvoiceCurrencyAmount(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceCurrencyAmount& InvoiceCurrencyAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalAmount"))
  {
    m_totalAmount = jsonValue.GetString("TotalAmount");
    m_totalAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalAmountBeforeTax"))
  {
    m_totalAmountBeforeTax = jsonValue.GetString("TotalAmountBeforeTax");
    m_totalAmountBeforeTaxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmountBreakdown"))
  {
    m_amountBreakdown = jsonValue.GetObject("AmountBreakdown");
    m_amountBreakdownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrencyExchangeDetails"))
  {
    m_currencyExchangeDetails = jsonValue.GetObject("CurrencyExchangeDetails");
    m_currencyExchangeDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceCurrencyAmount::Jsonize() const
{
  JsonValue payload;

  if(m_totalAmountHasBeenSet)
  {
   payload.WithString("TotalAmount", m_totalAmount);

  }

  if(m_totalAmountBeforeTaxHasBeenSet)
  {
   payload.WithString("TotalAmountBeforeTax", m_totalAmountBeforeTax);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_amountBreakdownHasBeenSet)
  {
   payload.WithObject("AmountBreakdown", m_amountBreakdown.Jsonize());

  }

  if(m_currencyExchangeDetailsHasBeenSet)
  {
   payload.WithObject("CurrencyExchangeDetails", m_currencyExchangeDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
