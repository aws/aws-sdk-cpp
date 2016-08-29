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
#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopWorkspacesRequest::StopWorkspacesRequest() : 
    m_stopWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String StopWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stopWorkspaceRequestsHasBeenSet)
  {
   Array<JsonValue> stopWorkspaceRequestsJsonList(m_stopWorkspaceRequests.size());
   for(unsigned stopWorkspaceRequestsIndex = 0; stopWorkspaceRequestsIndex < stopWorkspaceRequestsJsonList.GetLength(); ++stopWorkspaceRequestsIndex)
   {
     stopWorkspaceRequestsJsonList[stopWorkspaceRequestsIndex].AsObject(m_stopWorkspaceRequests[stopWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("StopWorkspaceRequests", std::move(stopWorkspaceRequestsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StopWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.StopWorkspaces"));
  return headers;

}



