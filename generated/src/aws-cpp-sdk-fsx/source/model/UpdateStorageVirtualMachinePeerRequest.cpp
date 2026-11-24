/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/UpdateStorageVirtualMachinePeerRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStorageVirtualMachinePeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_storageVirtualMachinePeerIdHasBeenSet) {
    payload.WithString("StorageVirtualMachinePeerId", m_storageVirtualMachinePeerId);
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

  if (m_stateHasBeenSet) {
    payload.WithString("State", StorageVirtualMachinePeerUpdateStateMapper::GetNameForStorageVirtualMachinePeerUpdateState(m_state));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStorageVirtualMachinePeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateStorageVirtualMachinePeer"));
  return headers;
}
