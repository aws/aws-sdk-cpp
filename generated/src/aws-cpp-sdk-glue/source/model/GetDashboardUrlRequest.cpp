/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/GetDashboardUrlRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDashboardUrlRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", GlueResourceTypeMapper::GetNameForGlueResourceType(m_resourceType));
  }

  if (m_requestOriginHasBeenSet) {
    payload.WithString("RequestOrigin", m_requestOrigin);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDashboardUrlRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetDashboardUrl"));
  return headers;
}
