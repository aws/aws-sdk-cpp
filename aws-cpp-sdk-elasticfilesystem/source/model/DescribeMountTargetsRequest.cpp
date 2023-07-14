/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeMountTargetsRequest::DescribeMountTargetsRequest() : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_mountTargetIdHasBeenSet(false),
    m_accessPointIdHasBeenSet(false)
{
}

Aws::String DescribeMountTargetsRequest::SerializePayload() const
{
  return {};
}

void DescribeMountTargetsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_fileSystemIdHasBeenSet)
    {
      ss << m_fileSystemId;
      uri.AddQueryStringParameter("FileSystemId", ss.str());
      ss.str("");
    }

    if(m_mountTargetIdHasBeenSet)
    {
      ss << m_mountTargetId;
      uri.AddQueryStringParameter("MountTargetId", ss.str());
      ss.str("");
    }

    if(m_accessPointIdHasBeenSet)
    {
      ss << m_accessPointId;
      uri.AddQueryStringParameter("AccessPointId", ss.str());
      ss.str("");
    }

}



