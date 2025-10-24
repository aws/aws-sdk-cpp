﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/ListInvoiceSummariesRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInvoiceSummariesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_selectorHasBeenSet) {
    payload.WithObject("Selector", m_selector.Jsonize());
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("Filter", m_filter.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInvoiceSummariesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.ListInvoiceSummaries"));
  return headers;
}
