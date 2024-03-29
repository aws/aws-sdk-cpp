/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/GetResourceSyncStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceSyncStatusRequest::GetResourceSyncStatusRequest() : 
    m_resourceNameHasBeenSet(false),
    m_syncType(SyncConfigurationType::NOT_SET),
    m_syncTypeHasBeenSet(false)
{
}

Aws::String GetResourceSyncStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourceSyncStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codeconnections.CodeConnections_20231201.GetResourceSyncStatus"));
  return headers;

}




