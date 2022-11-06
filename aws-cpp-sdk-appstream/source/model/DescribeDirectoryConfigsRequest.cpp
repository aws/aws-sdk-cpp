/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeDirectoryConfigsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDirectoryConfigsRequest::DescribeDirectoryConfigsRequest() : 
    m_directoryNamesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeDirectoryConfigsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> directoryNamesJsonList(m_directoryNames.size());
   for(unsigned directoryNamesIndex = 0; directoryNamesIndex < directoryNamesJsonList.GetLength(); ++directoryNamesIndex)
   {
     directoryNamesJsonList[directoryNamesIndex].AsString(m_directoryNames[directoryNamesIndex]);
   }
   payload.WithArray("DirectoryNames", std::move(directoryNamesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDirectoryConfigsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DescribeDirectoryConfigs"));
  return headers;

}




