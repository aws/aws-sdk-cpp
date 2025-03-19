/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DecreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

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
    if (m_globalNodeGroupsToRemove.empty())
    {
      ss << "GlobalNodeGroupsToRemove=&";
    }
    else
    {
      unsigned globalNodeGroupsToRemoveCount = 1;
      for(auto& item : m_globalNodeGroupsToRemove)
      {
        ss << "GlobalNodeGroupsToRemove.GlobalNodeGroupId." << globalNodeGroupsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        globalNodeGroupsToRemoveCount++;
      }
    }
  }

  if(m_globalNodeGroupsToRetainHasBeenSet)
  {
    if (m_globalNodeGroupsToRetain.empty())
    {
      ss << "GlobalNodeGroupsToRetain=&";
    }
    else
    {
      unsigned globalNodeGroupsToRetainCount = 1;
      for(auto& item : m_globalNodeGroupsToRetain)
      {
        ss << "GlobalNodeGroupsToRetain.GlobalNodeGroupId." << globalNodeGroupsToRetainCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        globalNodeGroupsToRetainCount++;
      }
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
