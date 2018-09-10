﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_nodeGroupCount(0),
    m_nodeGroupCountHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_reshardingConfigurationHasBeenSet(false),
    m_nodeGroupsToRemoveHasBeenSet(false),
    m_nodeGroupsToRetainHasBeenSet(false)
{
}

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
    unsigned reshardingConfigurationCount = 1;
    for(auto& item : m_reshardingConfiguration)
    {
      item.OutputToStream(ss, "ReshardingConfiguration.member.", reshardingConfigurationCount, "");
      reshardingConfigurationCount++;
    }
  }

  if(m_nodeGroupsToRemoveHasBeenSet)
  {
    unsigned nodeGroupsToRemoveCount = 1;
    for(auto& item : m_nodeGroupsToRemove)
    {
      ss << "NodeGroupsToRemove.member." << nodeGroupsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      nodeGroupsToRemoveCount++;
    }
  }

  if(m_nodeGroupsToRetainHasBeenSet)
  {
    unsigned nodeGroupsToRetainCount = 1;
    for(auto& item : m_nodeGroupsToRetain)
    {
      ss << "NodeGroupsToRetain.member." << nodeGroupsToRetainCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      nodeGroupsToRetainCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyReplicationGroupShardConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
