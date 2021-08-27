/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyWorkspaceCreationPropertiesRequest::ModifyWorkspaceCreationPropertiesRequest() : 
    m_resourceIdHasBeenSet(false),
    m_workspaceCreationPropertiesHasBeenSet(false)
{
}

Aws::String ModifyWorkspaceCreationPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_workspaceCreationPropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceCreationProperties", m_workspaceCreationProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyWorkspaceCreationPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyWorkspaceCreationProperties"));
  return headers;

}




