/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DescribeServerlessCacheSnapshotsRequest::DescribeServerlessCacheSnapshotsRequest() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_serverlessCacheSnapshotNameHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeServerlessCacheSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeServerlessCacheSnapshots&";
  if(m_serverlessCacheNameHasBeenSet)
  {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
    ss << "ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
    ss << "SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DescribeServerlessCacheSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
