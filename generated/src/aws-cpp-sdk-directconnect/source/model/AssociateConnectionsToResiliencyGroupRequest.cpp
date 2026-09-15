/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/AssociateConnectionsToResiliencyGroupRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateConnectionsToResiliencyGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectionIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectionIdentifiersJsonList(m_connectionIdentifiers.size());
    for (unsigned connectionIdentifiersIndex = 0; connectionIdentifiersIndex < connectionIdentifiersJsonList.GetLength();
         ++connectionIdentifiersIndex) {
      connectionIdentifiersJsonList[connectionIdentifiersIndex].AsString(m_connectionIdentifiers[connectionIdentifiersIndex]);
    }
    payload.WithArray("connectionIdentifiers", std::move(connectionIdentifiersJsonList));
  }

  if (m_resiliencyGroupIdHasBeenSet) {
    payload.WithString("resiliencyGroupId", m_resiliencyGroupId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateConnectionsToResiliencyGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AssociateConnectionsToResiliencyGroup"));
  return headers;
}
