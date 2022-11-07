/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateCacheClusterRequest::CreateCacheClusterRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false),
    m_aZMode(AZMode::NOT_SET),
    m_aZModeHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
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
    m_outpostMode(OutpostMode::NOT_SET),
    m_outpostModeHasBeenSet(false),
    m_preferredOutpostArnHasBeenSet(false),
    m_preferredOutpostArnsHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_networkType(NetworkType::NOT_SET),
    m_networkTypeHasBeenSet(false),
    m_ipDiscovery(IpDiscovery::NOT_SET),
    m_ipDiscoveryHasBeenSet(false)
{
}

Aws::String CreateCacheClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCacheCluster&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_aZModeHasBeenSet)
  {
    ss << "AZMode=" << AZModeMapper::GetNameForAZMode(m_aZMode) << "&";
  }

  if(m_preferredAvailabilityZoneHasBeenSet)
  {
    ss << "PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }

  if(m_preferredAvailabilityZonesHasBeenSet)
  {
    unsigned preferredAvailabilityZonesCount = 1;
    for(auto& item : m_preferredAvailabilityZones)
    {
      ss << "PreferredAvailabilityZones.member." << preferredAvailabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      preferredAvailabilityZonesCount++;
    }
  }

  if(m_numCacheNodesHasBeenSet)
  {
    ss << "NumCacheNodes=" << m_numCacheNodes << "&";
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

  if(m_outpostModeHasBeenSet)
  {
    ss << "OutpostMode=" << OutpostModeMapper::GetNameForOutpostMode(m_outpostMode) << "&";
  }

  if(m_preferredOutpostArnHasBeenSet)
  {
    ss << "PreferredOutpostArn=" << StringUtils::URLEncode(m_preferredOutpostArn.c_str()) << "&";
  }

  if(m_preferredOutpostArnsHasBeenSet)
  {
    unsigned preferredOutpostArnsCount = 1;
    for(auto& item : m_preferredOutpostArns)
    {
      ss << "PreferredOutpostArns.member." << preferredOutpostArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      preferredOutpostArnsCount++;
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

  if(m_transitEncryptionEnabledHasBeenSet)
  {
    ss << "TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
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


void  CreateCacheClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
