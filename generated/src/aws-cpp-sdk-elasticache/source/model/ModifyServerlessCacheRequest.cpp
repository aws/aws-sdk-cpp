/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyServerlessCacheRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyServerlessCacheRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyServerlessCache&";
  if(m_serverlessCacheNameHasBeenSet)
  {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_cacheUsageLimitsHasBeenSet)
  {
    m_cacheUsageLimits.OutputToStream(ss, "CacheUsageLimits");
  }

  if(m_removeUserGroupHasBeenSet)
  {
    ss << "RemoveUserGroup=" << std::boolalpha << m_removeUserGroup << "&";
  }

  if(m_userGroupIdHasBeenSet)
  {
    ss << "UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
    if (m_securityGroupIds.empty())
    {
      ss << "SecurityGroupIds=&";
    }
    else
    {
      unsigned securityGroupIdsCount = 1;
      for(auto& item : m_securityGroupIds)
      {
        ss << "SecurityGroupIds.SecurityGroupId." << securityGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        securityGroupIdsCount++;
      }
    }
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
    ss << "SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_dailySnapshotTimeHasBeenSet)
  {
    ss << "DailySnapshotTime=" << StringUtils::URLEncode(m_dailySnapshotTime.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
    ss << "MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyServerlessCacheRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
