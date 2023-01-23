/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeGlobalReplicationGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DescribeGlobalReplicationGroupsRequest::DescribeGlobalReplicationGroupsRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_showMemberInfo(false),
    m_showMemberInfoHasBeenSet(false)
{
}

Aws::String DescribeGlobalReplicationGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeGlobalReplicationGroups&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_showMemberInfoHasBeenSet)
  {
    ss << "ShowMemberInfo=" << std::boolalpha << m_showMemberInfo << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DescribeGlobalReplicationGroupsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
