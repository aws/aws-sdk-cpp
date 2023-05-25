/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateDirectorySetupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDirectorySetupRequest::UpdateDirectorySetupRequest() : 
    m_directoryIdHasBeenSet(false),
    m_updateType(UpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false),
    m_oSUpdateSettingsHasBeenSet(false),
    m_createSnapshotBeforeUpdate(false),
    m_createSnapshotBeforeUpdateHasBeenSet(false)
{
}

Aws::String UpdateDirectorySetupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("UpdateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  if(m_oSUpdateSettingsHasBeenSet)
  {
   payload.WithObject("OSUpdateSettings", m_oSUpdateSettings.Jsonize());

  }

  if(m_createSnapshotBeforeUpdateHasBeenSet)
  {
   payload.WithBool("CreateSnapshotBeforeUpdate", m_createSnapshotBeforeUpdate);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDirectorySetupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.UpdateDirectorySetup"));
  return headers;

}




