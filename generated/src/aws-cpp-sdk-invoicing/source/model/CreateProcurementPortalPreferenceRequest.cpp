/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/CreateProcurementPortalPreferenceRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProcurementPortalPreferenceRequest::SerializePayload() const {
  JsonValue payload;

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

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProcurementPortalPreferenceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.CreateProcurementPortalPreference"));
  return headers;
}
