/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeregisterWorkspaceDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterWorkspaceDirectoryRequest::DeregisterWorkspaceDirectoryRequest() : 
    m_directoryIdHasBeenSet(false)
{
}

Aws::String DeregisterWorkspaceDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterWorkspaceDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeregisterWorkspaceDirectory"));
  return headers;

}




