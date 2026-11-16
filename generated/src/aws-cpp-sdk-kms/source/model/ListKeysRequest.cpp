/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/ListKeysRequest.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListKeysRequest::SerializePayload() const {
  JsonValue payload;

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_markerHasBeenSet) {
    payload.WithString("Marker", m_marker);
  }

  if (m_resourceOwnersHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceOwnersJsonList(m_resourceOwners.size());
    for (unsigned resourceOwnersIndex = 0; resourceOwnersIndex < resourceOwnersJsonList.GetLength(); ++resourceOwnersIndex) {
      resourceOwnersJsonList[resourceOwnersIndex].AsString(
          ResourceOwnerTypeMapper::GetNameForResourceOwnerType(m_resourceOwners[resourceOwnersIndex]));
    }
    payload.WithArray("ResourceOwners", std::move(resourceOwnersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListKeysRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ListKeys"));
  return headers;
}
