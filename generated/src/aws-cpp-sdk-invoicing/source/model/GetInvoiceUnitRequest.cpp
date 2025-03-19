/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/GetInvoiceUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetInvoiceUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invoiceUnitArnHasBeenSet)
  {
   payload.WithString("InvoiceUnitArn", m_invoiceUnitArn);

  }

  if(m_asOfHasBeenSet)
  {
   payload.WithDouble("AsOf", m_asOf.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInvoiceUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.GetInvoiceUnit"));
  return headers;

}




