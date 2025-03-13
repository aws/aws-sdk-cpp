/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/DeleteInvoiceUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteInvoiceUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invoiceUnitArnHasBeenSet)
  {
   payload.WithString("InvoiceUnitArn", m_invoiceUnitArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInvoiceUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.DeleteInvoiceUnit"));
  return headers;

}




