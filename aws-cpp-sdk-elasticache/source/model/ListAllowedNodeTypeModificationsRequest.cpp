/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ListAllowedNodeTypeModificationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ListAllowedNodeTypeModificationsRequest::ListAllowedNodeTypeModificationsRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false)
{
}

Aws::String ListAllowedNodeTypeModificationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListAllowedNodeTypeModifications&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ListAllowedNodeTypeModificationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
