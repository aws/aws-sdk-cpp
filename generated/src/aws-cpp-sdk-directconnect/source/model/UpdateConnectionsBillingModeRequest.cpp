/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/UpdateConnectionsBillingModeRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectionsBillingModeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectionIdsJsonList(m_connectionIds.size());
    for (unsigned connectionIdsIndex = 0; connectionIdsIndex < connectionIdsJsonList.GetLength(); ++connectionIdsIndex) {
      connectionIdsJsonList[connectionIdsIndex].AsString(m_connectionIds[connectionIdsIndex]);
    }
    payload.WithArray("connectionIds", std::move(connectionIdsJsonList));
  }

  if (m_billingModeHasBeenSet) {
    payload.WithString("billingMode", RequestBillingModeMapper::GetNameForRequestBillingMode(m_billingMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectionsBillingModeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateConnectionsBillingMode"));
  return headers;
}
