/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateSnapmirrorPolicyRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSnapmirrorPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("FileSystemId", m_fileSystemId);
  }

  if (m_storageVirtualMachineIdHasBeenSet) {
    payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_snapshotCopyModeHasBeenSet) {
    payload.WithString("SnapshotCopyMode",
                       SnapmirrorPolicySnapshotCopyModeMapper::GetNameForSnapmirrorPolicySnapshotCopyMode(m_snapshotCopyMode));
  }

  if (m_retentionRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> retentionRulesJsonList(m_retentionRules.size());
    for (unsigned retentionRulesIndex = 0; retentionRulesIndex < retentionRulesJsonList.GetLength(); ++retentionRulesIndex) {
      retentionRulesJsonList[retentionRulesIndex].AsObject(m_retentionRules[retentionRulesIndex].Jsonize());
    }
    payload.WithArray("RetentionRules", std::move(retentionRulesJsonList));
  }

  if (m_transferScheduleHasBeenSet) {
    payload.WithString("TransferSchedule", m_transferSchedule);
  }

  if (m_networkCompressionEnabledHasBeenSet) {
    payload.WithBool("NetworkCompressionEnabled", m_networkCompressionEnabled);
  }

  if (m_throttleInKbpsHasBeenSet) {
    payload.WithInt64("ThrottleInKbps", m_throttleInKbps);
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

Aws::Http::HeaderValueCollection CreateSnapmirrorPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateSnapmirrorPolicy"));
  return headers;
}
