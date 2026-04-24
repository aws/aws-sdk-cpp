/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/GetMaterializedViewRefreshTaskRunRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetMaterializedViewRefreshTaskRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_materializedViewRefreshTaskRunIdHasBeenSet) {
    payload.WithString("MaterializedViewRefreshTaskRunId", m_materializedViewRefreshTaskRunId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMaterializedViewRefreshTaskRunRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetMaterializedViewRefreshTaskRun"));
  return headers;
}
