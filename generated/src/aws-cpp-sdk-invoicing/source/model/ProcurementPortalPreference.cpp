/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/ProcurementPortalPreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

ProcurementPortalPreference::ProcurementPortalPreference(JsonView jsonValue) { *this = jsonValue; }

ProcurementPortalPreference& ProcurementPortalPreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsAccountId")) {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalPreferenceArn")) {
    m_procurementPortalPreferenceArn = jsonValue.GetString("ProcurementPortalPreferenceArn");
    m_procurementPortalPreferenceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalName")) {
    m_procurementPortalName = ProcurementPortalNameMapper::GetProcurementPortalNameForName(jsonValue.GetString("ProcurementPortalName"));
    m_procurementPortalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BuyerDomain")) {
    m_buyerDomain = BuyerDomainMapper::GetBuyerDomainForName(jsonValue.GetString("BuyerDomain"));
    m_buyerDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BuyerIdentifier")) {
    m_buyerIdentifier = jsonValue.GetString("BuyerIdentifier");
    m_buyerIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupplierDomain")) {
    m_supplierDomain = SupplierDomainMapper::GetSupplierDomainForName(jsonValue.GetString("SupplierDomain"));
    m_supplierDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupplierIdentifier")) {
    m_supplierIdentifier = jsonValue.GetString("SupplierIdentifier");
    m_supplierIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Selector")) {
    m_selector = jsonValue.GetObject("Selector");
    m_selectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalSharedSecret")) {
    m_procurementPortalSharedSecret = jsonValue.GetString("ProcurementPortalSharedSecret");
    m_procurementPortalSharedSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalInstanceEndpoint")) {
    m_procurementPortalInstanceEndpoint = jsonValue.GetString("ProcurementPortalInstanceEndpoint");
    m_procurementPortalInstanceEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderRetrievalEndpoint")) {
    m_purchaseOrderRetrievalEndpoint = jsonValue.GetString("PurchaseOrderRetrievalEndpoint");
    m_purchaseOrderRetrievalEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestEnvPreference")) {
    m_testEnvPreference = jsonValue.GetObject("TestEnvPreference");
    m_testEnvPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryEnabled")) {
    m_einvoiceDeliveryEnabled = jsonValue.GetBool("EinvoiceDeliveryEnabled");
    m_einvoiceDeliveryEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryPreference")) {
    m_einvoiceDeliveryPreference = jsonValue.GetObject("EinvoiceDeliveryPreference");
    m_einvoiceDeliveryPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderRetrievalEnabled")) {
    m_purchaseOrderRetrievalEnabled = jsonValue.GetBool("PurchaseOrderRetrievalEnabled");
    m_purchaseOrderRetrievalEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Contacts")) {
    Aws::Utils::Array<JsonView> contactsJsonList = jsonValue.GetArray("Contacts");
    for (unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex) {
      m_contacts.push_back(contactsJsonList[contactsIndex].AsObject());
    }
    m_contactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryPreferenceStatus")) {
    m_einvoiceDeliveryPreferenceStatus = ProcurementPortalPreferenceStatusMapper::GetProcurementPortalPreferenceStatusForName(
        jsonValue.GetString("EinvoiceDeliveryPreferenceStatus"));
    m_einvoiceDeliveryPreferenceStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryPreferenceStatusReason")) {
    m_einvoiceDeliveryPreferenceStatusReason = jsonValue.GetString("EinvoiceDeliveryPreferenceStatusReason");
    m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderRetrievalPreferenceStatus")) {
    m_purchaseOrderRetrievalPreferenceStatus = ProcurementPortalPreferenceStatusMapper::GetProcurementPortalPreferenceStatusForName(
        jsonValue.GetString("PurchaseOrderRetrievalPreferenceStatus"));
    m_purchaseOrderRetrievalPreferenceStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderRetrievalPreferenceStatusReason")) {
    m_purchaseOrderRetrievalPreferenceStatusReason = jsonValue.GetString("PurchaseOrderRetrievalPreferenceStatusReason");
    m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateDate")) {
    m_createDate = jsonValue.GetDouble("CreateDate");
    m_createDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdateDate")) {
    m_lastUpdateDate = jsonValue.GetDouble("LastUpdateDate");
    m_lastUpdateDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcurementPortalPreference::Jsonize() const {
  JsonValue payload;

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("AwsAccountId", m_awsAccountId);
  }

  if (m_procurementPortalPreferenceArnHasBeenSet) {
    payload.WithString("ProcurementPortalPreferenceArn", m_procurementPortalPreferenceArn);
  }

  if (m_procurementPortalNameHasBeenSet) {
    payload.WithString("ProcurementPortalName", ProcurementPortalNameMapper::GetNameForProcurementPortalName(m_procurementPortalName));
  }

  if (m_buyerDomainHasBeenSet) {
    payload.WithString("BuyerDomain", BuyerDomainMapper::GetNameForBuyerDomain(m_buyerDomain));
  }

  if (m_buyerIdentifierHasBeenSet) {
    payload.WithString("BuyerIdentifier", m_buyerIdentifier);
  }

  if (m_supplierDomainHasBeenSet) {
    payload.WithString("SupplierDomain", SupplierDomainMapper::GetNameForSupplierDomain(m_supplierDomain));
  }

  if (m_supplierIdentifierHasBeenSet) {
    payload.WithString("SupplierIdentifier", m_supplierIdentifier);
  }

  if (m_selectorHasBeenSet) {
    payload.WithObject("Selector", m_selector.Jsonize());
  }

  if (m_procurementPortalSharedSecretHasBeenSet) {
    payload.WithString("ProcurementPortalSharedSecret", m_procurementPortalSharedSecret);
  }

  if (m_procurementPortalInstanceEndpointHasBeenSet) {
    payload.WithString("ProcurementPortalInstanceEndpoint", m_procurementPortalInstanceEndpoint);
  }

  if (m_purchaseOrderRetrievalEndpointHasBeenSet) {
    payload.WithString("PurchaseOrderRetrievalEndpoint", m_purchaseOrderRetrievalEndpoint);
  }

  if (m_testEnvPreferenceHasBeenSet) {
    payload.WithObject("TestEnvPreference", m_testEnvPreference.Jsonize());
  }

  if (m_einvoiceDeliveryEnabledHasBeenSet) {
    payload.WithBool("EinvoiceDeliveryEnabled", m_einvoiceDeliveryEnabled);
  }

  if (m_einvoiceDeliveryPreferenceHasBeenSet) {
    payload.WithObject("EinvoiceDeliveryPreference", m_einvoiceDeliveryPreference.Jsonize());
  }

  if (m_purchaseOrderRetrievalEnabledHasBeenSet) {
    payload.WithBool("PurchaseOrderRetrievalEnabled", m_purchaseOrderRetrievalEnabled);
  }

  if (m_contactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contactsJsonList(m_contacts.size());
    for (unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex) {
      contactsJsonList[contactsIndex].AsObject(m_contacts[contactsIndex].Jsonize());
    }
    payload.WithArray("Contacts", std::move(contactsJsonList));
  }

  if (m_einvoiceDeliveryPreferenceStatusHasBeenSet) {
    payload.WithString(
        "EinvoiceDeliveryPreferenceStatus",
        ProcurementPortalPreferenceStatusMapper::GetNameForProcurementPortalPreferenceStatus(m_einvoiceDeliveryPreferenceStatus));
  }

  if (m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet) {
    payload.WithString("EinvoiceDeliveryPreferenceStatusReason", m_einvoiceDeliveryPreferenceStatusReason);
  }

  if (m_purchaseOrderRetrievalPreferenceStatusHasBeenSet) {
    payload.WithString(
        "PurchaseOrderRetrievalPreferenceStatus",
        ProcurementPortalPreferenceStatusMapper::GetNameForProcurementPortalPreferenceStatus(m_purchaseOrderRetrievalPreferenceStatus));
  }

  if (m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet) {
    payload.WithString("PurchaseOrderRetrievalPreferenceStatusReason", m_purchaseOrderRetrievalPreferenceStatusReason);
  }

  if (m_versionHasBeenSet) {
    payload.WithInt64("Version", m_version);
  }

  if (m_createDateHasBeenSet) {
    payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if (m_lastUpdateDateHasBeenSet) {
    payload.WithDouble("LastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
