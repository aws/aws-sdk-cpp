/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest() : 
    m_directoryIdsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceDirectoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> directoryIdsJsonList(m_directoryIds.size());
   for(unsigned directoryIdsIndex = 0; directoryIdsIndex < directoryIdsJsonList.GetLength(); ++directoryIdsIndex)
   {
     directoryIdsJsonList[directoryIdsIndex].AsString(m_directoryIds[directoryIdsIndex]);
   }
   payload.WithArray("DirectoryIds", std::move(directoryIdsJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceDirectoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceDirectories"));
  return headers;

}




