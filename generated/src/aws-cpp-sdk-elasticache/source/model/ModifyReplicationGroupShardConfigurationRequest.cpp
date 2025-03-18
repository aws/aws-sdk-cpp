/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyReplicationGroupShardConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyReplicationGroupShardConfiguration&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_nodeGroupCountHasBeenSet)
  {
    ss << "NodeGroupCount=" << m_nodeGroupCount << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  if(m_reshardingConfigurationHasBeenSet)
  {
    if (m_reshardingConfiguration.empty())
    {
      ss << "ReshardingConfiguration=&";
    }
    else
    {
      unsigned reshardingConfigurationCount = 1;
      for(auto& item : m_reshardingConfiguration)
      {
        item.OutputToStream(ss, "ReshardingConfiguration.ReshardingConfiguration.", reshardingConfigurationCount, "");
        reshardingConfigurationCount++;
      }
    }
  }

  if(m_nodeGroupsToRemoveHasBeenSet)
  {
    if (m_nodeGroupsToRemove.empty())
    {
      ss << "NodeGroupsToRemove=&";
    }
    else
    {
      unsigned nodeGroupsToRemoveCount = 1;
      for(auto& item : m_nodeGroupsToRemove)
      {
        ss << "NodeGroupsToRemove.NodeGroupToRemove." << nodeGroupsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        nodeGroupsToRemoveCount++;
      }
    }
  }

  if(m_nodeGroupsToRetainHasBeenSet)
  {
    if (m_nodeGroupsToRetain.empty())
    {
      ss << "NodeGroupsToRetain=&";
    }
    else
    {
      unsigned nodeGroupsToRetainCount = 1;
      for(auto& item : m_nodeGroupsToRetain)
      {
        ss << "NodeGroupsToRetain.NodeGroupToRetain." << nodeGroupsToRetainCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        nodeGroupsToRetainCount++;
      }
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyReplicationGroupShardConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
