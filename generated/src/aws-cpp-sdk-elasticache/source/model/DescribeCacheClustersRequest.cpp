/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeCacheClustersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DescribeCacheClustersRequest::DescribeCacheClustersRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_showCacheNodeInfo(false),
    m_showCacheNodeInfoHasBeenSet(false),
    m_showCacheClustersNotInReplicationGroups(false),
    m_showCacheClustersNotInReplicationGroupsHasBeenSet(false)
{
}

Aws::String DescribeCacheClustersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeCacheClusters&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_showCacheNodeInfoHasBeenSet)
  {
    ss << "ShowCacheNodeInfo=" << std::boolalpha << m_showCacheNodeInfo << "&";
  }

  if(m_showCacheClustersNotInReplicationGroupsHasBeenSet)
  {
    ss << "ShowCacheClustersNotInReplicationGroups=" << std::boolalpha << m_showCacheClustersNotInReplicationGroups << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DescribeCacheClustersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
