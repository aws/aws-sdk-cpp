/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/BatchDeleteDatasetDataSegmentsRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteDatasetDataSegmentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_deleteDataSegmentEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> deleteDataSegmentEntriesJsonList(m_deleteDataSegmentEntries.size());
    for (unsigned deleteDataSegmentEntriesIndex = 0; deleteDataSegmentEntriesIndex < deleteDataSegmentEntriesJsonList.GetLength();
         ++deleteDataSegmentEntriesIndex) {
      deleteDataSegmentEntriesJsonList[deleteDataSegmentEntriesIndex].AsObject(
          m_deleteDataSegmentEntries[deleteDataSegmentEntriesIndex].Jsonize());
    }
    payload.WithArray("deleteDataSegmentEntries", std::move(deleteDataSegmentEntriesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
