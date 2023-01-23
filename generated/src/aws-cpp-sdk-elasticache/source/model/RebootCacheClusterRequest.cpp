/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/RebootCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

RebootCacheClusterRequest::RebootCacheClusterRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_cacheNodeIdsToRebootHasBeenSet(false)
{
}

Aws::String RebootCacheClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebootCacheCluster&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_cacheNodeIdsToRebootHasBeenSet)
  {
    unsigned cacheNodeIdsToRebootCount = 1;
    for(auto& item : m_cacheNodeIdsToReboot)
    {
      ss << "CacheNodeIdsToReboot.member." << cacheNodeIdsToRebootCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheNodeIdsToRebootCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  RebootCacheClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
