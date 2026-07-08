/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetCreditAllocationHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCreditAllocationHistoryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_creditIdHasBeenSet) {
    payload.WithInt64("creditId", m_creditId);
  }

  if (m_startDateHasBeenSet) {
    payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCreditAllocationHistoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.GetCreditAllocationHistory"));
  return headers;
}
