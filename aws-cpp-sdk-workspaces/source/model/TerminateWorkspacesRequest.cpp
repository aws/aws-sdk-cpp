/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/TerminateWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TerminateWorkspacesRequest::TerminateWorkspacesRequest() : 
    m_terminateWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String TerminateWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_terminateWorkspaceRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> terminateWorkspaceRequestsJsonList(m_terminateWorkspaceRequests.size());
   for(unsigned terminateWorkspaceRequestsIndex = 0; terminateWorkspaceRequestsIndex < terminateWorkspaceRequestsJsonList.GetLength(); ++terminateWorkspaceRequestsIndex)
   {
     terminateWorkspaceRequestsJsonList[terminateWorkspaceRequestsIndex].AsObject(m_terminateWorkspaceRequests[terminateWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("TerminateWorkspaceRequests", std::move(terminateWorkspaceRequestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.TerminateWorkspaces"));
  return headers;

}




