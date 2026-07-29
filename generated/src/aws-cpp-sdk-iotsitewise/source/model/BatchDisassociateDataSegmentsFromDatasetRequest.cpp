/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/BatchDisassociateDataSegmentsFromDatasetRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDisassociateDataSegmentsFromDatasetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_disassociateDataSegmentEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> disassociateDataSegmentEntriesJsonList(m_disassociateDataSegmentEntries.size());
    for (unsigned disassociateDataSegmentEntriesIndex = 0;
         disassociateDataSegmentEntriesIndex < disassociateDataSegmentEntriesJsonList.GetLength(); ++disassociateDataSegmentEntriesIndex) {
      disassociateDataSegmentEntriesJsonList[disassociateDataSegmentEntriesIndex].AsObject(
          m_disassociateDataSegmentEntries[disassociateDataSegmentEntriesIndex].Jsonize());
    }
    payload.WithArray("disassociateDataSegmentEntries", std::move(disassociateDataSegmentEntriesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
