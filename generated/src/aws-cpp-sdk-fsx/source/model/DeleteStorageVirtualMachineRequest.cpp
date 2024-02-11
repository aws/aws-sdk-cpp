/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteStorageVirtualMachineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStorageVirtualMachineRequest::DeleteStorageVirtualMachineRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_storageVirtualMachineIdHasBeenSet(false)
{
}

Aws::String DeleteStorageVirtualMachineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_storageVirtualMachineIdHasBeenSet)
  {
   payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStorageVirtualMachineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DeleteStorageVirtualMachine"));
  return headers;

}




