/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/DescribeUserRequest.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeUserRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("UserId", m_userId);
  }

  if (m_extensionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> extensionsJsonList(m_extensions.size());
    for (unsigned extensionsIndex = 0; extensionsIndex < extensionsJsonList.GetLength(); ++extensionsIndex) {
      extensionsJsonList[extensionsIndex].AsString(m_extensions[extensionsIndex]);
    }
    payload.WithArray("Extensions", std::move(extensionsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeUserRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.DescribeUser"));
  return headers;
}
