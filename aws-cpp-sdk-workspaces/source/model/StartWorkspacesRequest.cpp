/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StartWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartWorkspacesRequest::StartWorkspacesRequest() : 
    m_startWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String StartWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startWorkspaceRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> startWorkspaceRequestsJsonList(m_startWorkspaceRequests.size());
   for(unsigned startWorkspaceRequestsIndex = 0; startWorkspaceRequestsIndex < startWorkspaceRequestsJsonList.GetLength(); ++startWorkspaceRequestsIndex)
   {
     startWorkspaceRequestsJsonList[startWorkspaceRequestsIndex].AsObject(m_startWorkspaceRequests[startWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("StartWorkspaceRequests", std::move(startWorkspaceRequestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.StartWorkspaces"));
  return headers;

}




