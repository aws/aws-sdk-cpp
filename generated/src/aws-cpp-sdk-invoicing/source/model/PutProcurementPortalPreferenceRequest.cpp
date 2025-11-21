/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/PutProcurementPortalPreferenceRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutProcurementPortalPreferenceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_procurementPortalPreferenceArnHasBeenSet) {
    payload.WithString("ProcurementPortalPreferenceArn", m_procurementPortalPreferenceArn);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutProcurementPortalPreferenceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.PutProcurementPortalPreference"));
  return headers;
}
