/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/UpdateLookupTableRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLookupTableRequest::SerializePayload() const {
  JsonValue payload;

  if (m_lookupTableArnHasBeenSet) {
    payload.WithString("lookupTableArn", m_lookupTableArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_tableBodyHasBeenSet) {
    payload.WithString("tableBody", m_tableBody);
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLookupTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.UpdateLookupTable"));
  return headers;
}
