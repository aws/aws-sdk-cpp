/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/GetLookupTableRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetLookupTableRequest::SerializePayload() const {
  JsonValue payload;

  if (m_lookupTableArnHasBeenSet) {
    payload.WithString("lookupTableArn", m_lookupTableArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLookupTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLookupTable"));
  return headers;
}
