/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/GetInvoicePDFRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetInvoicePDFRequest::SerializePayload() const {
  JsonValue payload;

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("InvoiceId", m_invoiceId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInvoicePDFRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.GetInvoicePDF"));
  return headers;
}
