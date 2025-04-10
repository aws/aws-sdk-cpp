/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyCacheClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCacheCluster&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_numCacheNodesHasBeenSet)
  {
    ss << "NumCacheNodes=" << m_numCacheNodes << "&";
  }

  if(m_cacheNodeIdsToRemoveHasBeenSet)
  {
    if (m_cacheNodeIdsToRemove.empty())
    {
      ss << "CacheNodeIdsToRemove=&";
    }
    else
    {
      unsigned cacheNodeIdsToRemoveCount = 1;
      for(auto& item : m_cacheNodeIdsToRemove)
      {
        ss << "CacheNodeIdsToRemove.CacheNodeId." << cacheNodeIdsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        cacheNodeIdsToRemoveCount++;
      }
    }
  }

  if(m_aZModeHasBeenSet)
  {
    ss << "AZMode=" << StringUtils::URLEncode(AZModeMapper::GetNameForAZMode(m_aZMode)) << "&";
  }

  if(m_newAvailabilityZonesHasBeenSet)
  {
    if (m_newAvailabilityZones.empty())
    {
      ss << "NewAvailabilityZones=&";
    }
    else
    {
      unsigned newAvailabilityZonesCount = 1;
      for(auto& item : m_newAvailabilityZones)
      {
        ss << "NewAvailabilityZones.PreferredAvailabilityZone." << newAvailabilityZonesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        newAvailabilityZonesCount++;
      }
    }
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

  if(m_scaleConfigHasBeenSet)
  {
    m_scaleConfig.OutputToStream(ss, "ScaleConfig");
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyCacheClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
