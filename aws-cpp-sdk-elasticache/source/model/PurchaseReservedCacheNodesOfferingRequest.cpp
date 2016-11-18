/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

PurchaseReservedCacheNodesOfferingRequest::PurchaseReservedCacheNodesOfferingRequest() : 
    m_reservedCacheNodesOfferingIdHasBeenSet(false),
    m_reservedCacheNodeIdHasBeenSet(false),
    m_cacheNodeCount(0),
    m_cacheNodeCountHasBeenSet(false)
{
}

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

  ss << "Version=2015-02-02";
  return ss.str();
}

