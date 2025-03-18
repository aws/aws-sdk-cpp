/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

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
    if (m_cacheSecurityGroupNames.empty())
    {
      ss << "CacheSecurityGroupNames=&";
    }
    else
    {
      unsigned cacheSecurityGroupNamesCount = 1;
      for(auto& item : m_cacheSecurityGroupNames)
      {
        ss << "CacheSecurityGroupNames.CacheSecurityGroupName." << cacheSecurityGroupNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        cacheSecurityGroupNamesCount++;
      }
    }
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

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
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
    ss << "AuthTokenUpdateStrategy=" << StringUtils::URLEncode(AuthTokenUpdateStrategyTypeMapper::GetNameForAuthTokenUpdateStrategyType(m_authTokenUpdateStrategy)) << "&";
  }

  if(m_userGroupIdsToAddHasBeenSet)
  {
    if (m_userGroupIdsToAdd.empty())
    {
      ss << "UserGroupIdsToAdd=&";
    }
    else
    {
      unsigned userGroupIdsToAddCount = 1;
      for(auto& item : m_userGroupIdsToAdd)
      {
        ss << "UserGroupIdsToAdd.member." << userGroupIdsToAddCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        userGroupIdsToAddCount++;
      }
    }
  }

  if(m_userGroupIdsToRemoveHasBeenSet)
  {
    if (m_userGroupIdsToRemove.empty())
    {
      ss << "UserGroupIdsToRemove=&";
    }
    else
    {
      unsigned userGroupIdsToRemoveCount = 1;
      for(auto& item : m_userGroupIdsToRemove)
      {
        ss << "UserGroupIdsToRemove.member." << userGroupIdsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        userGroupIdsToRemoveCount++;
      }
    }
  }

  if(m_removeUserGroupsHasBeenSet)
  {
    ss << "RemoveUserGroups=" << std::boolalpha << m_removeUserGroups << "&";
  }

  if(m_logDeliveryConfigurationsHasBeenSet)
  {
    if (m_logDeliveryConfigurations.empty())
    {
      ss << "LogDeliveryConfigurations=&";
    }
    else
    {
      unsigned logDeliveryConfigurationsCount = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        item.OutputToStream(ss, "LogDeliveryConfigurations.LogDeliveryConfigurationRequest.", logDeliveryConfigurationsCount, "");
        logDeliveryConfigurationsCount++;
      }
    }
  }

  if(m_ipDiscoveryHasBeenSet)
  {
    ss << "IpDiscovery=" << StringUtils::URLEncode(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery)) << "&";
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
    ss << "TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_transitEncryptionModeHasBeenSet)
  {
    ss << "TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }

  if(m_clusterModeHasBeenSet)
  {
    ss << "ClusterMode=" << StringUtils::URLEncode(ClusterModeMapper::GetNameForClusterMode(m_clusterMode)) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
