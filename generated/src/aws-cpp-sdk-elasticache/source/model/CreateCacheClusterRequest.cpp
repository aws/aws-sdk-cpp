/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

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
    ss << "AZMode=" << StringUtils::URLEncode(AZModeMapper::GetNameForAZMode(m_aZMode)) << "&";
  }

  if(m_preferredAvailabilityZoneHasBeenSet)
  {
    ss << "PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }

  if(m_preferredAvailabilityZonesHasBeenSet)
  {
    if (m_preferredAvailabilityZones.empty())
    {
      ss << "PreferredAvailabilityZones=&";
    }
    else
    {
      unsigned preferredAvailabilityZonesCount = 1;
      for(auto& item : m_preferredAvailabilityZones)
      {
        ss << "PreferredAvailabilityZones.PreferredAvailabilityZone." << preferredAvailabilityZonesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        preferredAvailabilityZonesCount++;
      }
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

  if(m_outpostModeHasBeenSet)
  {
    ss << "OutpostMode=" << StringUtils::URLEncode(OutpostModeMapper::GetNameForOutpostMode(m_outpostMode)) << "&";
  }

  if(m_preferredOutpostArnHasBeenSet)
  {
    ss << "PreferredOutpostArn=" << StringUtils::URLEncode(m_preferredOutpostArn.c_str()) << "&";
  }

  if(m_preferredOutpostArnsHasBeenSet)
  {
    if (m_preferredOutpostArns.empty())
    {
      ss << "PreferredOutpostArns=&";
    }
    else
    {
      unsigned preferredOutpostArnsCount = 1;
      for(auto& item : m_preferredOutpostArns)
      {
        ss << "PreferredOutpostArns.PreferredOutpostArn." << preferredOutpostArnsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        preferredOutpostArnsCount++;
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

  if(m_transitEncryptionEnabledHasBeenSet)
  {
    ss << "TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(NetworkTypeMapper::GetNameForNetworkType(m_networkType)) << "&";
  }

  if(m_ipDiscoveryHasBeenSet)
  {
    ss << "IpDiscovery=" << StringUtils::URLEncode(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery)) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateCacheClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
