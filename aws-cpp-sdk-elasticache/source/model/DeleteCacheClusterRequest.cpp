/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteCacheClusterRequest::DeleteCacheClusterRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_finalSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String DeleteCacheClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCacheCluster&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_finalSnapshotIdentifierHasBeenSet)
  {
    ss << "FinalSnapshotIdentifier=" << StringUtils::URLEncode(m_finalSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteCacheClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
