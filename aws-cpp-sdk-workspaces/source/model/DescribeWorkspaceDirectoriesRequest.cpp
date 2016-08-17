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
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest() : 
    m_directoryIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceDirectoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdsHasBeenSet)
  {
   Array<JsonValue> directoryIdsJsonList(m_directoryIds.size());
   for(unsigned directoryIdsIndex = 0; directoryIdsIndex < directoryIdsJsonList.GetLength(); ++directoryIdsIndex)
   {
     directoryIdsJsonList[directoryIdsIndex].AsString(m_directoryIds[directoryIdsIndex]);
   }
   payload.WithArray("DirectoryIds", std::move(directoryIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceDirectoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceDirectories"));
  return headers;

}



