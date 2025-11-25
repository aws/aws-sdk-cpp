/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/PutLogGroupDeletionProtectionRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutLogGroupDeletionProtectionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_logGroupIdentifierHasBeenSet) {
    payload.WithString("logGroupIdentifier", m_logGroupIdentifier);
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLogGroupDeletionProtectionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutLogGroupDeletionProtection"));
  return headers;
}
