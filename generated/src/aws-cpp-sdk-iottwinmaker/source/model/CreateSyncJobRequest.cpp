/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateSyncJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSyncJobRequest::CreateSyncJobRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_syncRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSyncJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_syncRoleHasBeenSet)
  {
   payload.WithString("syncRole", m_syncRole);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




