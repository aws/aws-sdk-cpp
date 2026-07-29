/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/BatchAssociateDataSegmentsToDatasetRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchAssociateDataSegmentsToDatasetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_associateDataSegmentEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associateDataSegmentEntriesJsonList(m_associateDataSegmentEntries.size());
    for (unsigned associateDataSegmentEntriesIndex = 0; associateDataSegmentEntriesIndex < associateDataSegmentEntriesJsonList.GetLength();
         ++associateDataSegmentEntriesIndex) {
      associateDataSegmentEntriesJsonList[associateDataSegmentEntriesIndex].AsObject(
          m_associateDataSegmentEntries[associateDataSegmentEntriesIndex].Jsonize());
    }
    payload.WithArray("associateDataSegmentEntries", std::move(associateDataSegmentEntriesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
