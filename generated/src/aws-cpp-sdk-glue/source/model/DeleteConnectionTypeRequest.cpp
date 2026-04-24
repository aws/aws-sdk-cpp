/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DeleteConnectionTypeRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteConnectionTypeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectionTypeHasBeenSet) {
    payload.WithString("ConnectionType", m_connectionType);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteConnectionTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteConnectionType"));
  return headers;
}
