﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String PurchaseReservedCacheNodesOfferingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseReservedCacheNodesOffering&";
  if(m_reservedCacheNodesOfferingIdHasBeenSet)
  {
    ss << "ReservedCacheNodesOfferingId=" << StringUtils::URLEncode(m_reservedCacheNodesOfferingId.c_str()) << "&";
  }

  if(m_reservedCacheNodeIdHasBeenSet)
  {
    ss << "ReservedCacheNodeId=" << StringUtils::URLEncode(m_reservedCacheNodeId.c_str()) << "&";
  }

  if(m_cacheNodeCountHasBeenSet)
  {
    ss << "CacheNodeCount=" << m_cacheNodeCount << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  PurchaseReservedCacheNodesOfferingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
