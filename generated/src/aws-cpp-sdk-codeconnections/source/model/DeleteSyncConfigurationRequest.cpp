﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/DeleteSyncConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSyncConfigurationRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DeleteSyncConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codeconnections.CodeConnections_20231201.DeleteSyncConfiguration"));
  return headers;

}




