/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/DeleteStorageVirtualMachinePeerRequest.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteStorageVirtualMachinePeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_storageVirtualMachinePeerIdHasBeenSet) {
    payload.WithString("StorageVirtualMachinePeerId", m_storageVirtualMachinePeerId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStorageVirtualMachinePeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DeleteStorageVirtualMachinePeer"));
  return headers;
}
