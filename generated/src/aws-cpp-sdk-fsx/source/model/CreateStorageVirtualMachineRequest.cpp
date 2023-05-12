﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateStorageVirtualMachineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStorageVirtualMachineRequest::CreateStorageVirtualMachineRequest() : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_fileSystemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_svmAdminPasswordHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_rootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET),
    m_rootVolumeSecurityStyleHasBeenSet(false)
{
}

Aws::String CreateStorageVirtualMachineRequest::SerializePayload() const
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

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_svmAdminPasswordHasBeenSet)
  {
   payload.WithString("SvmAdminPassword", m_svmAdminPassword);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_rootVolumeSecurityStyleHasBeenSet)
  {
   payload.WithString("RootVolumeSecurityStyle", StorageVirtualMachineRootVolumeSecurityStyleMapper::GetNameForStorageVirtualMachineRootVolumeSecurityStyle(m_rootVolumeSecurityStyle));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStorageVirtualMachineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateStorageVirtualMachine"));
  return headers;

}




