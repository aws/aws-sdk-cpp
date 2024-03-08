/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListResourceScanRelatedResourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListResourceScanRelatedResourcesRequest::ListResourceScanRelatedResourcesRequest() : 
    m_resourceScanIdHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListResourceScanRelatedResourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListResourceScanRelatedResources&";
  if(m_resourceScanIdHasBeenSet)
  {
    ss << "ResourceScanId=" << StringUtils::URLEncode(m_resourceScanId.c_str()) << "&";
  }

  if(m_resourcesHasBeenSet)
  {
    unsigned resourcesCount = 1;
    for(auto& item : m_resources)
    {
      item.OutputToStream(ss, "Resources.member.", resourcesCount, "");
      resourcesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListResourceScanRelatedResourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
