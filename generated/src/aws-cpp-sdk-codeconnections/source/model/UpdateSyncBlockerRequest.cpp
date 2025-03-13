/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/UpdateSyncBlockerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSyncBlockerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType));
  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_resolvedReasonHasBeenSet)
  {
   payload.WithString("ResolvedReason", m_resolvedReason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSyncBlockerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codeconnections.CodeConnections_20231201.UpdateSyncBlocker"));
  return headers;

}




