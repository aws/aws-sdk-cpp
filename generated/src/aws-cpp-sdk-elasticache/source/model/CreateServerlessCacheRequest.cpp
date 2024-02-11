/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateServerlessCacheRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateServerlessCacheRequest::CreateServerlessCacheRequest() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_cacheUsageLimitsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_snapshotArnsToRestoreHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_dailySnapshotTimeHasBeenSet(false)
{
}

Aws::String CreateServerlessCacheRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateServerlessCache&";
  if(m_serverlessCacheNameHasBeenSet)
  {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
    ss << "MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_cacheUsageLimitsHasBeenSet)
  {
    m_cacheUsageLimits.OutputToStream(ss, "CacheUsageLimits");
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
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

  if(m_snapshotArnsToRestoreHasBeenSet)
  {
    unsigned snapshotArnsToRestoreCount = 1;
    for(auto& item : m_snapshotArnsToRestore)
    {
      ss << "SnapshotArnsToRestore.member." << snapshotArnsToRestoreCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      snapshotArnsToRestoreCount++;
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

  if(m_userGroupIdHasBeenSet)
  {
    ss << "UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
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


void  CreateServerlessCacheRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
