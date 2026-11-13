/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/CreateSnapshotRequest.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSnapshotRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("ApplicationName", m_applicationName);
  }

  if (m_snapshotNameHasBeenSet) {
    payload.WithString("SnapshotName", m_snapshotName);
  }

  if (m_snapshotDescriptionHasBeenSet) {
    payload.WithString("SnapshotDescription", m_snapshotDescription);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSnapshotRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.CreateSnapshot"));
  return headers;
}
