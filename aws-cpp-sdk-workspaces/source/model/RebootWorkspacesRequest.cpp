/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebootWorkspacesRequest::RebootWorkspacesRequest() : 
    m_rebootWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String RebootWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rebootWorkspaceRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rebootWorkspaceRequestsJsonList(m_rebootWorkspaceRequests.size());
   for(unsigned rebootWorkspaceRequestsIndex = 0; rebootWorkspaceRequestsIndex < rebootWorkspaceRequestsJsonList.GetLength(); ++rebootWorkspaceRequestsIndex)
   {
     rebootWorkspaceRequestsJsonList[rebootWorkspaceRequestsIndex].AsObject(m_rebootWorkspaceRequests[rebootWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("RebootWorkspaceRequests", std::move(rebootWorkspaceRequestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebootWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.RebootWorkspaces"));
  return headers;

}




