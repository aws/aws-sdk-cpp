﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/IncreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String IncreaseNodeGroupsInGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=IncreaseNodeGroupsInGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_nodeGroupCountHasBeenSet)
  {
    ss << "NodeGroupCount=" << m_nodeGroupCount << "&";
  }

  if(m_regionalConfigurationsHasBeenSet)
  {
    if (m_regionalConfigurations.empty())
    {
      ss << "RegionalConfigurations=&";
    }
    else
    {
      unsigned regionalConfigurationsCount = 1;
      for(auto& item : m_regionalConfigurations)
      {
        item.OutputToStream(ss, "RegionalConfigurations.RegionalConfiguration.", regionalConfigurationsCount, "");
        regionalConfigurationsCount++;
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


void  IncreaseNodeGroupsInGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
