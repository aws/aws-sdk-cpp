/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ListServiceQuotaWarningsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListServiceQuotaWarningsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_planArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> planArnsJsonList(m_planArns.size());
    for (unsigned planArnsIndex = 0; planArnsIndex < planArnsJsonList.GetLength(); ++planArnsIndex) {
      planArnsJsonList[planArnsIndex].AsString(m_planArns[planArnsIndex]);
    }
    payload.WithArray("planArns", std::move(planArnsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListServiceQuotaWarningsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ArcRegionSwitch.ListServiceQuotaWarnings"));
  return headers;
}
