/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/PutStorageTierPolicyRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutStorageTierPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_storageTierHasBeenSet) {
    payload.WithString("storageTier", StorageTierMapper::GetNameForStorageTier(m_storageTier));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutStorageTierPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutStorageTierPolicy"));
  return headers;
}
