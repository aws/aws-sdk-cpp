/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String CreateReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReplicationGroup&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_replicationGroupDescriptionHasBeenSet)
  {
    ss << "ReplicationGroupDescription=" << StringUtils::URLEncode(m_replicationGroupDescription.c_str()) << "&";
  }

  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_primaryClusterIdHasBeenSet)
  {
    ss << "PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverEnabledHasBeenSet)
  {
    ss << "AutomaticFailoverEnabled=" << std::boolalpha << m_automaticFailoverEnabled << "&";
  }

  if(m_multiAZEnabledHasBeenSet)
  {
    ss << "MultiAZEnabled=" << std::boolalpha << m_multiAZEnabled << "&";
  }

  if(m_numCacheClustersHasBeenSet)
  {
    ss << "NumCacheClusters=" << m_numCacheClusters << "&";
  }

  if(m_preferredCacheClusterAZsHasBeenSet)
  {
    if (m_preferredCacheClusterAZs.empty())
    {
      ss << "PreferredCacheClusterAZs=&";
    }
    else
    {
      unsigned preferredCacheClusterAZsCount = 1;
      for(auto& item : m_preferredCacheClusterAZs)
      {
        ss << "PreferredCacheClusterAZs.AvailabilityZone." << preferredCacheClusterAZsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        preferredCacheClusterAZsCount++;
      }
    }
  }

  if(m_numNodeGroupsHasBeenSet)
  {
    ss << "NumNodeGroups=" << m_numNodeGroups << "&";
  }

  if(m_replicasPerNodeGroupHasBeenSet)
  {
    ss << "ReplicasPerNodeGroup=" << m_replicasPerNodeGroup << "&";
  }

  if(m_nodeGroupConfigurationHasBeenSet)
  {
    if (m_nodeGroupConfiguration.empty())
    {
      ss << "NodeGroupConfiguration=&";
    }
    else
    {
      unsigned nodeGroupConfigurationCount = 1;
      for(auto& item : m_nodeGroupConfiguration)
      {
        item.OutputToStream(ss, "NodeGroupConfiguration.NodeGroupConfiguration.", nodeGroupConfigurationCount, "");
        nodeGroupConfigurationCount++;
      }
    }
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
    ss << "CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_cacheSubnetGroupNameHasBeenSet)
  {
    ss << "CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
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

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_snapshotArnsHasBeenSet)
  {
    if (m_snapshotArns.empty())
    {
      ss << "SnapshotArns=&";
    }
    else
    {
      unsigned snapshotArnsCount = 1;
      for(auto& item : m_snapshotArns)
      {
        ss << "SnapshotArns.SnapshotArn." << snapshotArnsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        snapshotArnsCount++;
      }
    }
  }

  if(m_snapshotNameHasBeenSet)
  {
    ss << "SnapshotName=" << StringUtils::URLEncode(m_snapshotName.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_notificationTopicArnHasBeenSet)
  {
    ss << "NotificationTopicArn=" << StringUtils::URLEncode(m_notificationTopicArn.c_str()) << "&";
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

  if(m_authTokenHasBeenSet)
  {
    ss << "AuthToken=" << StringUtils::URLEncode(m_authToken.c_str()) << "&";
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
    ss << "TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
    ss << "AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_userGroupIdsHasBeenSet)
  {
    if (m_userGroupIds.empty())
    {
      ss << "UserGroupIds=&";
    }
    else
    {
      unsigned userGroupIdsCount = 1;
      for(auto& item : m_userGroupIds)
      {
        ss << "UserGroupIds.member." << userGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        userGroupIdsCount++;
      }
    }
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

  if(m_dataTieringEnabledHasBeenSet)
  {
    ss << "DataTieringEnabled=" << std::boolalpha << m_dataTieringEnabled << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(NetworkTypeMapper::GetNameForNetworkType(m_networkType)) << "&";
  }

  if(m_ipDiscoveryHasBeenSet)
  {
    ss << "IpDiscovery=" << StringUtils::URLEncode(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery)) << "&";
  }

  if(m_transitEncryptionModeHasBeenSet)
  {
    ss << "TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }

  if(m_clusterModeHasBeenSet)
  {
    ss << "ClusterMode=" << StringUtils::URLEncode(ClusterModeMapper::GetNameForClusterMode(m_clusterMode)) << "&";
  }

  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
    ss << "ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
