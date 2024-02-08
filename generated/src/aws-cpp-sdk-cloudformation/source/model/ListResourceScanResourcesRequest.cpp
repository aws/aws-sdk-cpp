/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListResourceScanResourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListResourceScanResourcesRequest::ListResourceScanResourcesRequest() : 
    m_resourceScanIdHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceTypePrefixHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListResourceScanResourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListResourceScanResources&";
  if(m_resourceScanIdHasBeenSet)
  {
    ss << "ResourceScanId=" << StringUtils::URLEncode(m_resourceScanId.c_str()) << "&";
  }

  if(m_resourceIdentifierHasBeenSet)
  {
    ss << "ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_resourceTypePrefixHasBeenSet)
  {
    ss << "ResourceTypePrefix=" << StringUtils::URLEncode(m_resourceTypePrefix.c_str()) << "&";
  }

  if(m_tagKeyHasBeenSet)
  {
    ss << "TagKey=" << StringUtils::URLEncode(m_tagKey.c_str()) << "&";
  }

  if(m_tagValueHasBeenSet)
  {
    ss << "TagValue=" << StringUtils::URLEncode(m_tagValue.c_str()) << "&";
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


void  ListResourceScanResourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
