/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/DeleteSnapshotRequest.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSnapshotRequest::SerializePayload() const {
  JsonValue payload;

  if (m_snapshotNameHasBeenSet) {
    payload.WithString("SnapshotName", m_snapshotName);
  }

  if (m_snapshotCreationTimestampHasBeenSet) {
    payload.WithDouble("SnapshotCreationTimestamp", m_snapshotCreationTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSnapshotRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DeleteSnapshot"));
  return headers;
}
