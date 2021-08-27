/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/BatchApplyUpdateActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

BatchApplyUpdateActionRequest::BatchApplyUpdateActionRequest() : 
    m_replicationGroupIdsHasBeenSet(false),
    m_cacheClusterIdsHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false)
{
}

Aws::String BatchApplyUpdateActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchApplyUpdateAction&";
  if(m_replicationGroupIdsHasBeenSet)
  {
    unsigned replicationGroupIdsCount = 1;
    for(auto& item : m_replicationGroupIds)
    {
      ss << "ReplicationGroupIds.member." << replicationGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      replicationGroupIdsCount++;
    }
  }

  if(m_cacheClusterIdsHasBeenSet)
  {
    unsigned cacheClusterIdsCount = 1;
    for(auto& item : m_cacheClusterIds)
    {
      ss << "CacheClusterIds.member." << cacheClusterIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheClusterIdsCount++;
    }
  }

  if(m_serviceUpdateNameHasBeenSet)
  {
    ss << "ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  BatchApplyUpdateActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
