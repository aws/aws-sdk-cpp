/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteCacheSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteCacheSubnetGroupRequest::DeleteCacheSubnetGroupRequest() : 
    m_cacheSubnetGroupNameHasBeenSet(false)
{
}

Aws::String DeleteCacheSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCacheSubnetGroup&";
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
    ss << "CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteCacheSubnetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
