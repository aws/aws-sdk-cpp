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
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspacesRequest::CreateWorkspacesRequest() : 
    m_workspacesHasBeenSet(false)
{
}

Aws::String CreateWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspacesHasBeenSet)
  {
   Array<JsonValue> workspacesJsonList(m_workspaces.size());
   for(unsigned workspacesIndex = 0; workspacesIndex < workspacesJsonList.GetLength(); ++workspacesIndex)
   {
     workspacesJsonList[workspacesIndex].AsObject(m_workspaces[workspacesIndex].Jsonize());
   }
   payload.WithArray("Workspaces", std::move(workspacesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateWorkspaces"));
  return headers;

}



