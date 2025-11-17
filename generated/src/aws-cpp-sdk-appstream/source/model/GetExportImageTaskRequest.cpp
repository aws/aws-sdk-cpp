/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/GetExportImageTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetExportImageTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("TaskId", m_taskId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetExportImageTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.GetExportImageTask"));
  return headers;
}
