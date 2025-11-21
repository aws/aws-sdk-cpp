/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/UpdateProcurementPortalPreferenceStatusRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProcurementPortalPreferenceStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_procurementPortalPreferenceArnHasBeenSet) {
    payload.WithString("ProcurementPortalPreferenceArn", m_procurementPortalPreferenceArn);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProcurementPortalPreferenceStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.UpdateProcurementPortalPreferenceStatus"));
  return headers;
}
