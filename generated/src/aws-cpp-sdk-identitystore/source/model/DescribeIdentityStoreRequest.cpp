/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/DescribeIdentityStoreRequest.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeIdentityStoreRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeIdentityStoreRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.DescribeIdentityStore"));
  return headers;
}
