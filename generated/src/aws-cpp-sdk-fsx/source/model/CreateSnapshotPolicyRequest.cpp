/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateSnapshotPolicyRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSnapshotPolicyRequest::SerializePayload() const {
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

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_schedulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> schedulesJsonList(m_schedules.size());
    for (unsigned schedulesIndex = 0; schedulesIndex < schedulesJsonList.GetLength(); ++schedulesIndex) {
      schedulesJsonList[schedulesIndex].AsObject(m_schedules[schedulesIndex].Jsonize());
    }
    payload.WithArray("Schedules", std::move(schedulesJsonList));
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

Aws::Http::HeaderValueCollection CreateSnapshotPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateSnapshotPolicy"));
  return headers;
}
