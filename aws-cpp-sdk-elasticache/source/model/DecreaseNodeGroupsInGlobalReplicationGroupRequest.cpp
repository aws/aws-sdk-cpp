/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DecreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DecreaseNodeGroupsInGlobalReplicationGroupRequest::DecreaseNodeGroupsInGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_nodeGroupCount(0),
    m_nodeGroupCountHasBeenSet(false),
    m_globalNodeGroupsToRemoveHasBeenSet(false),
    m_globalNodeGroupsToRetainHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String DecreaseNodeGroupsInGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DecreaseNodeGroupsInGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_nodeGroupCountHasBeenSet)
  {
    ss << "NodeGroupCount=" << m_nodeGroupCount << "&";
  }

  if(m_globalNodeGroupsToRemoveHasBeenSet)
  {
    unsigned globalNodeGroupsToRemoveCount = 1;
    for(auto& item : m_globalNodeGroupsToRemove)
    {
      ss << "GlobalNodeGroupsToRemove.member." << globalNodeGroupsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      globalNodeGroupsToRemoveCount++;
    }
  }

  if(m_globalNodeGroupsToRetainHasBeenSet)
  {
    unsigned globalNodeGroupsToRetainCount = 1;
    for(auto& item : m_globalNodeGroupsToRetain)
    {
      ss << "GlobalNodeGroupsToRetain.member." << globalNodeGroupsToRetainCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      globalNodeGroupsToRetainCount++;
    }
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DecreaseNodeGroupsInGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
