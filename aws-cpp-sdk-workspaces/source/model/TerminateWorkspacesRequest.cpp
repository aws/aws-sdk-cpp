/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> terminateWorkspaceRequestsJsonList(m_terminateWorkspaceRequests.size());
   for(unsigned terminateWorkspaceRequestsIndex = 0; terminateWorkspaceRequestsIndex < terminateWorkspaceRequestsJsonList.GetLength(); ++terminateWorkspaceRequestsIndex)
   {
     terminateWorkspaceRequestsJsonList[terminateWorkspaceRequestsIndex].AsObject(m_terminateWorkspaceRequests[terminateWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("TerminateWorkspaceRequests", std::move(terminateWorkspaceRequestsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.TerminateWorkspaces"));
  return headers;

}



