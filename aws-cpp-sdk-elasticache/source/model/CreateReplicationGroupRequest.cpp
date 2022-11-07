/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateReplicationGroupRequest::CreateReplicationGroupRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupDescriptionHasBeenSet(false),
    m_globalReplicationGroupIdHasBeenSet(false),
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverEnabled(false),
    m_automaticFailoverEnabledHasBeenSet(false),
    m_multiAZEnabled(false),
    m_multiAZEnabledHasBeenSet(false),
    m_numCacheClusters(0),
    m_numCacheClustersHasBeenSet(false),
    m_preferredCacheClusterAZsHasBeenSet(false),
    m_numNodeGroups(0),
    m_numNodeGroupsHasBeenSet(false),
    m_replicasPerNodeGroup(0),
    m_replicasPerNodeGroupHasBeenSet(false),
    m_nodeGroupConfigurationHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheSecurityGroupNamesHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_snapshotArnsHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_notificationTopicArnHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_authTokenHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false),
    m_dataTieringEnabled(false),
    m_dataTieringEnabledHasBeenSet(false),
    m_networkType(NetworkType::NOT_SET),
    m_networkTypeHasBeenSet(false),
    m_ipDiscovery(IpDiscovery::NOT_SET),
    m_ipDiscoveryHasBeenSet(false)
{
}

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
    unsigned preferredCacheClusterAZsCount = 1;
    for(auto& item : m_preferredCacheClusterAZs)
    {
      ss << "PreferredCacheClusterAZs.member." << preferredCacheClusterAZsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      preferredCacheClusterAZsCount++;
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
    unsigned nodeGroupConfigurationCount = 1;
    for(auto& item : m_nodeGroupConfiguration)
    {
      item.OutputToStream(ss, "NodeGroupConfiguration.member.", nodeGroupConfigurationCount, "");
      nodeGroupConfigurationCount++;
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

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_snapshotArnsHasBeenSet)
  {
    unsigned snapshotArnsCount = 1;
    for(auto& item : m_snapshotArns)
    {
      ss << "SnapshotArns.member." << snapshotArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      snapshotArnsCount++;
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
    unsigned userGroupIdsCount = 1;
    for(auto& item : m_userGroupIds)
    {
      ss << "UserGroupIds.member." << userGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userGroupIdsCount++;
    }
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

  if(m_dataTieringEnabledHasBeenSet)
  {
    ss << "DataTieringEnabled=" << std::boolalpha << m_dataTieringEnabled << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << NetworkTypeMapper::GetNameForNetworkType(m_networkType) << "&";
  }

  if(m_ipDiscoveryHasBeenSet)
  {
    ss << "IpDiscovery=" << IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
