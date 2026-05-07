/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/InvoiceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

InvoiceSummary::InvoiceSummary(JsonView jsonValue) { *this = jsonValue; }

InvoiceSummary& InvoiceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvoiceId")) {
    m_invoiceId = jsonValue.GetString("InvoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuedDate")) {
    m_issuedDate = jsonValue.GetDouble("IssuedDate");
    m_issuedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DueDate")) {
    m_dueDate = jsonValue.GetDouble("DueDate");
    m_dueDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillSourceAccounts")) {
    Aws::Utils::Array<JsonView> billSourceAccountsJsonList = jsonValue.GetArray("BillSourceAccounts");
    for (unsigned billSourceAccountsIndex = 0; billSourceAccountsIndex < billSourceAccountsJsonList.GetLength();
         ++billSourceAccountsIndex) {
      m_billSourceAccounts.push_back(billSourceAccountsJsonList[billSourceAccountsIndex].AsString());
    }
    m_billSourceAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillSourceAccountsTotalCount")) {
    m_billSourceAccountsTotalCount = jsonValue.GetInteger("BillSourceAccountsTotalCount");
    m_billSourceAccountsTotalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReceiverRole")) {
    m_receiverRole = ReceiverRoleMapper::GetReceiverRoleForName(jsonValue.GetString("ReceiverRole"));
    m_receiverRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Entity")) {
    m_entity = jsonValue.GetObject("Entity");
    m_entityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillingPeriod")) {
    m_billingPeriod = jsonValue.GetObject("BillingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvoiceFrequency")) {
    m_invoiceFrequency = InvoiceFrequencyMapper::GetInvoiceFrequencyForName(jsonValue.GetString("InvoiceFrequency"));
    m_invoiceFrequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillType")) {
    m_billType = BillTypeMapper::GetBillTypeForName(jsonValue.GetString("BillType"));
    m_billTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvoiceType")) {
    m_invoiceType = InvoiceTypeMapper::GetInvoiceTypeForName(jsonValue.GetString("InvoiceType"));
    m_invoiceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CommercialInvoiceId")) {
    m_commercialInvoiceId = jsonValue.GetString("CommercialInvoiceId");
    m_commercialInvoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginalInvoiceId")) {
    m_originalInvoiceId = jsonValue.GetString("OriginalInvoiceId");
    m_originalInvoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderNumber")) {
    m_purchaseOrderNumber = jsonValue.GetString("PurchaseOrderNumber");
    m_purchaseOrderNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryStatus")) {
    m_einvoiceDeliveryStatus =
        EinvoiceDeliveryStatusMapper::GetEinvoiceDeliveryStatusForName(jsonValue.GetString("EinvoiceDeliveryStatus"));
    m_einvoiceDeliveryStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaxAuthorityStatus")) {
    m_taxAuthorityStatus = TaxAuthorityStatusMapper::GetTaxAuthorityStatusForName(jsonValue.GetString("TaxAuthorityStatus"));
    m_taxAuthorityStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BaseCurrencyAmount")) {
    m_baseCurrencyAmount = jsonValue.GetObject("BaseCurrencyAmount");
    m_baseCurrencyAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaxCurrencyAmount")) {
    m_taxCurrencyAmount = jsonValue.GetObject("TaxCurrencyAmount");
    m_taxCurrencyAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PaymentCurrencyAmount")) {
    m_paymentCurrencyAmount = jsonValue.GetObject("PaymentCurrencyAmount");
    m_paymentCurrencyAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceSummary::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("InvoiceId", m_invoiceId);
  }

  if (m_issuedDateHasBeenSet) {
    payload.WithDouble("IssuedDate", m_issuedDate.SecondsWithMSPrecision());
  }

  if (m_dueDateHasBeenSet) {
    payload.WithDouble("DueDate", m_dueDate.SecondsWithMSPrecision());
  }

  if (m_billSourceAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> billSourceAccountsJsonList(m_billSourceAccounts.size());
    for (unsigned billSourceAccountsIndex = 0; billSourceAccountsIndex < billSourceAccountsJsonList.GetLength();
         ++billSourceAccountsIndex) {
      billSourceAccountsJsonList[billSourceAccountsIndex].AsString(m_billSourceAccounts[billSourceAccountsIndex]);
    }
    payload.WithArray("BillSourceAccounts", std::move(billSourceAccountsJsonList));
  }

  if (m_billSourceAccountsTotalCountHasBeenSet) {
    payload.WithInteger("BillSourceAccountsTotalCount", m_billSourceAccountsTotalCount);
  }

  if (m_receiverRoleHasBeenSet) {
    payload.WithString("ReceiverRole", ReceiverRoleMapper::GetNameForReceiverRole(m_receiverRole));
  }

  if (m_entityHasBeenSet) {
    payload.WithObject("Entity", m_entity.Jsonize());
  }

  if (m_billingPeriodHasBeenSet) {
    payload.WithObject("BillingPeriod", m_billingPeriod.Jsonize());
  }

  if (m_invoiceFrequencyHasBeenSet) {
    payload.WithString("InvoiceFrequency", InvoiceFrequencyMapper::GetNameForInvoiceFrequency(m_invoiceFrequency));
  }

  if (m_billTypeHasBeenSet) {
    payload.WithString("BillType", BillTypeMapper::GetNameForBillType(m_billType));
  }

  if (m_invoiceTypeHasBeenSet) {
    payload.WithString("InvoiceType", InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType));
  }

  if (m_commercialInvoiceIdHasBeenSet) {
    payload.WithString("CommercialInvoiceId", m_commercialInvoiceId);
  }

  if (m_originalInvoiceIdHasBeenSet) {
    payload.WithString("OriginalInvoiceId", m_originalInvoiceId);
  }

  if (m_purchaseOrderNumberHasBeenSet) {
    payload.WithString("PurchaseOrderNumber", m_purchaseOrderNumber);
  }

  if (m_einvoiceDeliveryStatusHasBeenSet) {
    payload.WithString("EinvoiceDeliveryStatus", EinvoiceDeliveryStatusMapper::GetNameForEinvoiceDeliveryStatus(m_einvoiceDeliveryStatus));
  }

  if (m_taxAuthorityStatusHasBeenSet) {
    payload.WithString("TaxAuthorityStatus", TaxAuthorityStatusMapper::GetNameForTaxAuthorityStatus(m_taxAuthorityStatus));
  }

  if (m_baseCurrencyAmountHasBeenSet) {
    payload.WithObject("BaseCurrencyAmount", m_baseCurrencyAmount.Jsonize());
  }

  if (m_taxCurrencyAmountHasBeenSet) {
    payload.WithObject("TaxCurrencyAmount", m_taxCurrencyAmount.Jsonize());
  }

  if (m_paymentCurrencyAmountHasBeenSet) {
    payload.WithObject("PaymentCurrencyAmount", m_paymentCurrencyAmount.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
