/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/SplitCreditRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SplitCreditRequest::SerializePayload() const {
  JsonValue payload;

  if (m_creditIdHasBeenSet) {
    payload.WithString("creditId", m_creditId);
  }

  if (m_portionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> portionsJsonList(m_portions.size());
    for (unsigned portionsIndex = 0; portionsIndex < portionsJsonList.GetLength(); ++portionsIndex) {
      portionsJsonList[portionsIndex].AsObject(m_portions[portionsIndex].Jsonize());
    }
    payload.WithArray("portions", std::move(portionsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SplitCreditRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.SplitCredit"));
  return headers;
}
