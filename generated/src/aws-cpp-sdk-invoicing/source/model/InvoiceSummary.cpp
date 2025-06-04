/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceSummary.h>
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

InvoiceSummary::InvoiceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceSummary& InvoiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvoiceId"))
  {
    m_invoiceId = jsonValue.GetString("InvoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IssuedDate"))
  {
    m_issuedDate = jsonValue.GetDouble("IssuedDate");
    m_issuedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DueDate"))
  {
    m_dueDate = jsonValue.GetDouble("DueDate");
    m_dueDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Entity"))
  {
    m_entity = jsonValue.GetObject("Entity");
    m_entityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetObject("BillingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvoiceType"))
  {
    m_invoiceType = InvoiceTypeMapper::GetInvoiceTypeForName(jsonValue.GetString("InvoiceType"));
    m_invoiceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginalInvoiceId"))
  {
    m_originalInvoiceId = jsonValue.GetString("OriginalInvoiceId");
    m_originalInvoiceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PurchaseOrderNumber"))
  {
    m_purchaseOrderNumber = jsonValue.GetString("PurchaseOrderNumber");
    m_purchaseOrderNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseCurrencyAmount"))
  {
    m_baseCurrencyAmount = jsonValue.GetObject("BaseCurrencyAmount");
    m_baseCurrencyAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaxCurrencyAmount"))
  {
    m_taxCurrencyAmount = jsonValue.GetObject("TaxCurrencyAmount");
    m_taxCurrencyAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PaymentCurrencyAmount"))
  {
    m_paymentCurrencyAmount = jsonValue.GetObject("PaymentCurrencyAmount");
    m_paymentCurrencyAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_invoiceIdHasBeenSet)
  {
   payload.WithString("InvoiceId", m_invoiceId);

  }

  if(m_issuedDateHasBeenSet)
  {
   payload.WithDouble("IssuedDate", m_issuedDate.SecondsWithMSPrecision());
  }

  if(m_dueDateHasBeenSet)
  {
   payload.WithDouble("DueDate", m_dueDate.SecondsWithMSPrecision());
  }

  if(m_entityHasBeenSet)
  {
   payload.WithObject("Entity", m_entity.Jsonize());

  }

  if(m_billingPeriodHasBeenSet)
  {
   payload.WithObject("BillingPeriod", m_billingPeriod.Jsonize());

  }

  if(m_invoiceTypeHasBeenSet)
  {
   payload.WithString("InvoiceType", InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType));
  }

  if(m_originalInvoiceIdHasBeenSet)
  {
   payload.WithString("OriginalInvoiceId", m_originalInvoiceId);

  }

  if(m_purchaseOrderNumberHasBeenSet)
  {
   payload.WithString("PurchaseOrderNumber", m_purchaseOrderNumber);

  }

  if(m_baseCurrencyAmountHasBeenSet)
  {
   payload.WithObject("BaseCurrencyAmount", m_baseCurrencyAmount.Jsonize());

  }

  if(m_taxCurrencyAmountHasBeenSet)
  {
   payload.WithObject("TaxCurrencyAmount", m_taxCurrencyAmount.Jsonize());

  }

  if(m_paymentCurrencyAmountHasBeenSet)
  {
   payload.WithObject("PaymentCurrencyAmount", m_paymentCurrencyAmount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
