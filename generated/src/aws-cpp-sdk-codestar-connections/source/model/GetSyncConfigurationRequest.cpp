/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/GetSyncConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSyncConfigurationRequest::GetSyncConfigurationRequest() : 
    m_syncType(SyncConfigurationType::NOT_SET),
    m_syncTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

Aws::String GetSyncConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType));
  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSyncConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.GetSyncConfiguration"));
  return headers;

}




