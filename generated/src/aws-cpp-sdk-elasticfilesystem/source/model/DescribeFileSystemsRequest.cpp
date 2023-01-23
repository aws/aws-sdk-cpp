/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeFileSystemsRequest::DescribeFileSystemsRequest() : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

Aws::String DescribeFileSystemsRequest::SerializePayload() const
{
  return {};
}

void DescribeFileSystemsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("MaxItems", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("Marker", ss.str());
      ss.str("");
    }

    if(m_creationTokenHasBeenSet)
    {
      ss << m_creationToken;
      uri.AddQueryStringParameter("CreationToken", ss.str());
      ss.str("");
    }

    if(m_fileSystemIdHasBeenSet)
    {
      ss << m_fileSystemId;
      uri.AddQueryStringParameter("FileSystemId", ss.str());
      ss.str("");
    }

}



