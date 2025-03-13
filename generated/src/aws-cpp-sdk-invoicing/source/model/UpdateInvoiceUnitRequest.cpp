/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/UpdateInvoiceUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateInvoiceUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invoiceUnitArnHasBeenSet)
  {
   payload.WithString("InvoiceUnitArn", m_invoiceUnitArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_taxInheritanceDisabledHasBeenSet)
  {
   payload.WithBool("TaxInheritanceDisabled", m_taxInheritanceDisabled);

  }

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("Rule", m_rule.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInvoiceUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.UpdateInvoiceUnit"));
  return headers;

}




