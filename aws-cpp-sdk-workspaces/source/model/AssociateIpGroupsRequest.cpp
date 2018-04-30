/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateIpGroupsRequest::AssociateIpGroupsRequest() : 
    m_directoryIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

Aws::String AssociateIpGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_groupIdsHasBeenSet)
  {
   Array<JsonValue> groupIdsJsonList(m_groupIds.size());
   for(unsigned groupIdsIndex = 0; groupIdsIndex < groupIdsJsonList.GetLength(); ++groupIdsIndex)
   {
     groupIdsJsonList[groupIdsIndex].AsString(m_groupIds[groupIdsIndex]);
   }
   payload.WithArray("GroupIds", std::move(groupIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateIpGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.AssociateIpGroups"));
  return headers;

}




