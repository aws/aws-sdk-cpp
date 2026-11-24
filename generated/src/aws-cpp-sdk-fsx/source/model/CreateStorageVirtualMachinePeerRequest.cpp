/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateStorageVirtualMachinePeerRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStorageVirtualMachinePeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_storageVirtualMachineIdHasBeenSet) {
    payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);
  }

  if (m_peerSvmNameHasBeenSet) {
    payload.WithString("PeerSvmName", m_peerSvmName);
  }

  if (m_peerClusterNameHasBeenSet) {
    payload.WithString("PeerClusterName", m_peerClusterName);
  }

  if (m_applicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      applicationsJsonList[applicationsIndex].AsString(
          StorageVirtualMachinePeerApplicationMapper::GetNameForStorageVirtualMachinePeerApplication(m_applications[applicationsIndex]));
    }
    payload.WithArray("Applications", std::move(applicationsJsonList));
  }

  if (m_peerSvmAliasHasBeenSet) {
    payload.WithString("PeerSvmAlias", m_peerSvmAlias);
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

Aws::Http::HeaderValueCollection CreateStorageVirtualMachinePeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateStorageVirtualMachinePeer"));
  return headers;
}
