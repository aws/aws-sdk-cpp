/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyServerlessCacheRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyServerlessCacheRequest::ModifyServerlessCacheRequest() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheUsageLimitsHasBeenSet(false),
    m_removeUserGroup(false),
    m_removeUserGroupHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_dailySnapshotTimeHasBeenSet(false)
{
}

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
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupIds.member." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
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

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyServerlessCacheRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
