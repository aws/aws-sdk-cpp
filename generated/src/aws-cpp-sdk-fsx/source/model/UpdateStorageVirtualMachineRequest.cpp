/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateStorageVirtualMachineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStorageVirtualMachineRequest::UpdateStorageVirtualMachineRequest() : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_svmAdminPasswordHasBeenSet(false)
{
}

Aws::String UpdateStorageVirtualMachineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activeDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("ActiveDirectoryConfiguration", m_activeDirectoryConfiguration.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_storageVirtualMachineIdHasBeenSet)
  {
   payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);

  }

  if(m_svmAdminPasswordHasBeenSet)
  {
   payload.WithString("SvmAdminPassword", m_svmAdminPassword);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStorageVirtualMachineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateStorageVirtualMachine"));
  return headers;

}




