/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyReplicationGroupRequest::ModifyReplicationGroupRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupDescriptionHasBeenSet(false),
    m_primaryClusterIdHasBeenSet(false),
    m_snapshottingClusterIdHasBeenSet(false),
    m_automaticFailoverEnabled(false),
    m_automaticFailoverEnabledHasBeenSet(false),
    m_multiAZEnabled(false),
    m_multiAZEnabledHasBeenSet(false),
    m_cacheSecurityGroupNamesHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationTopicArnHasBeenSet(false),
    m_cacheParameterGroupNameHasBeenSet(false),
    m_notificationTopicStatusHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_authTokenHasBeenSet(false),
    m_authTokenUpdateStrategy(AuthTokenUpdateStrategyType::NOT_SET),
    m_authTokenUpdateStrategyHasBeenSet(false),
    m_userGroupIdsToAddHasBeenSet(false),
    m_userGroupIdsToRemoveHasBeenSet(false),
    m_removeUserGroups(false),
    m_removeUserGroupsHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false),
    m_ipDiscovery(IpDiscovery::NOT_SET),
    m_ipDiscoveryHasBeenSet(false)
{
}

Aws::String ModifyReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyReplicationGroup&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_replicationGroupDescriptionHasBeenSet)
  {
    ss << "ReplicationGroupDescription=" << StringUtils::URLEncode(m_replicationGroupDescription.c_str()) << "&";
  }

  if(m_primaryClusterIdHasBeenSet)
  {
    ss << "PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }

  if(m_snapshottingClusterIdHasBeenSet)
  {
    ss << "SnapshottingClusterId=" << StringUtils::URLEncode(m_snapshottingClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverEnabledHasBeenSet)
  {
    ss << "AutomaticFailoverEnabled=" << std::boolalpha << m_automaticFailoverEnabled << "&";
  }

  if(m_multiAZEnabledHasBeenSet)
  {
    ss << "MultiAZEnabled=" << std::boolalpha << m_multiAZEnabled << "&";
  }

  if(m_cacheSecurityGroupNamesHasBeenSet)
  {
    unsigned cacheSecurityGroupNamesCount = 1;
    for(auto& item : m_cacheSecurityGroupNames)
    {
      ss << "CacheSecurityGroupNames.member." << cacheSecurityGroupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheSecurityGroupNamesCount++;
    }
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

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_notificationTopicArnHasBeenSet)
  {
    ss << "NotificationTopicArn=" << StringUtils::URLEncode(m_notificationTopicArn.c_str()) << "&";
  }

  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_notificationTopicStatusHasBeenSet)
  {
    ss << "NotificationTopicStatus=" << StringUtils::URLEncode(m_notificationTopicStatus.c_str()) << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
    ss << "SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_snapshotWindowHasBeenSet)
  {
    ss << "SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
    ss << "CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_authTokenHasBeenSet)
  {
    ss << "AuthToken=" << StringUtils::URLEncode(m_authToken.c_str()) << "&";
  }

  if(m_authTokenUpdateStrategyHasBeenSet)
  {
    ss << "AuthTokenUpdateStrategy=" << AuthTokenUpdateStrategyTypeMapper::GetNameForAuthTokenUpdateStrategyType(m_authTokenUpdateStrategy) << "&";
  }

  if(m_userGroupIdsToAddHasBeenSet)
  {
    unsigned userGroupIdsToAddCount = 1;
    for(auto& item : m_userGroupIdsToAdd)
    {
      ss << "UserGroupIdsToAdd.member." << userGroupIdsToAddCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userGroupIdsToAddCount++;
    }
  }

  if(m_userGroupIdsToRemoveHasBeenSet)
  {
    unsigned userGroupIdsToRemoveCount = 1;
    for(auto& item : m_userGroupIdsToRemove)
    {
      ss << "UserGroupIdsToRemove.member." << userGroupIdsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userGroupIdsToRemoveCount++;
    }
  }

  if(m_removeUserGroupsHasBeenSet)
  {
    ss << "RemoveUserGroups=" << std::boolalpha << m_removeUserGroups << "&";
  }

  if(m_logDeliveryConfigurationsHasBeenSet)
  {
    unsigned logDeliveryConfigurationsCount = 1;
    for(auto& item : m_logDeliveryConfigurations)
    {
      item.OutputToStream(ss, "LogDeliveryConfigurations.member.", logDeliveryConfigurationsCount, "");
      logDeliveryConfigurationsCount++;
    }
  }

  if(m_ipDiscoveryHasBeenSet)
  {
    ss << "IpDiscovery=" << IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
