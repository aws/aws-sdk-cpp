/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateCacheSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateCacheSubnetGroupRequest::CreateCacheSubnetGroupRequest() : 
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheSubnetGroupDescriptionHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCacheSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCacheSubnetGroup&";
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
    ss << "CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  if(m_cacheSubnetGroupDescriptionHasBeenSet)
  {
    ss << "CacheSubnetGroupDescription=" << StringUtils::URLEncode(m_cacheSubnetGroupDescription.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
    unsigned subnetIdsCount = 1;
    for(auto& item : m_subnetIds)
    {
      ss << "SubnetIds.member." << subnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetIdsCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateCacheSubnetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
