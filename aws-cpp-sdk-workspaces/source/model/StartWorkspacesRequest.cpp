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
   Array<JsonValue> startWorkspaceRequestsJsonList(m_startWorkspaceRequests.size());
   for(unsigned startWorkspaceRequestsIndex = 0; startWorkspaceRequestsIndex < startWorkspaceRequestsJsonList.GetLength(); ++startWorkspaceRequestsIndex)
   {
     startWorkspaceRequestsJsonList[startWorkspaceRequestsIndex].AsObject(m_startWorkspaceRequests[startWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("StartWorkspaceRequests", std::move(startWorkspaceRequestsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.StartWorkspaces"));
  return headers;

}



