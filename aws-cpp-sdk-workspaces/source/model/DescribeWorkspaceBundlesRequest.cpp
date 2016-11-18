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
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest() : 
    m_bundleIdsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceBundlesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleIdsHasBeenSet)
  {
   Array<JsonValue> bundleIdsJsonList(m_bundleIds.size());
   for(unsigned bundleIdsIndex = 0; bundleIdsIndex < bundleIdsJsonList.GetLength(); ++bundleIdsIndex)
   {
     bundleIdsJsonList[bundleIdsIndex].AsString(m_bundleIds[bundleIdsIndex]);
   }
   payload.WithArray("BundleIds", std::move(bundleIdsJsonList));

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceBundlesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceBundles"));
  return headers;

}



