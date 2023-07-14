﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheCluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CacheCluster::CacheCluster() : 
    m_cacheClusterIdHasBeenSet(false),
    m_configurationEndpointHasBeenSet(false),
    m_clientDownloadLandingPageHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheClusterStatusHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_preferredOutpostArnHasBeenSet(false),
    m_cacheClusterCreateTimeHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_cacheSecurityGroupsHasBeenSet(false),
    m_cacheParameterGroupHasBeenSet(false),
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheNodesHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_authTokenLastModifiedDateHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_replicationGroupLogDeliveryEnabled(false),
    m_replicationGroupLogDeliveryEnabledHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false)
{
}

CacheCluster::CacheCluster(const XmlNode& xmlNode) : 
    m_cacheClusterIdHasBeenSet(false),
    m_configurationEndpointHasBeenSet(false),
    m_clientDownloadLandingPageHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheClusterStatusHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_preferredOutpostArnHasBeenSet(false),
    m_cacheClusterCreateTimeHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_cacheSecurityGroupsHasBeenSet(false),
    m_cacheParameterGroupHasBeenSet(false),
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheNodesHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_authTokenLastModifiedDateHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_replicationGroupLogDeliveryEnabled(false),
    m_replicationGroupLogDeliveryEnabledHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false)
{
  *this = xmlNode;
}

CacheCluster& CacheCluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterIdNode.GetText());
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode configurationEndpointNode = resultNode.FirstChild("ConfigurationEndpoint");
    if(!configurationEndpointNode.IsNull())
    {
      m_configurationEndpoint = configurationEndpointNode;
      m_configurationEndpointHasBeenSet = true;
    }
    XmlNode clientDownloadLandingPageNode = resultNode.FirstChild("ClientDownloadLandingPage");
    if(!clientDownloadLandingPageNode.IsNull())
    {
      m_clientDownloadLandingPage = Aws::Utils::Xml::DecodeEscapedXmlText(clientDownloadLandingPageNode.GetText());
      m_clientDownloadLandingPageHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode cacheClusterStatusNode = resultNode.FirstChild("CacheClusterStatus");
    if(!cacheClusterStatusNode.IsNull())
    {
      m_cacheClusterStatus = Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterStatusNode.GetText());
      m_cacheClusterStatusHasBeenSet = true;
    }
    XmlNode numCacheNodesNode = resultNode.FirstChild("NumCacheNodes");
    if(!numCacheNodesNode.IsNull())
    {
      m_numCacheNodes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numCacheNodesNode.GetText()).c_str()).c_str());
      m_numCacheNodesHasBeenSet = true;
    }
    XmlNode preferredAvailabilityZoneNode = resultNode.FirstChild("PreferredAvailabilityZone");
    if(!preferredAvailabilityZoneNode.IsNull())
    {
      m_preferredAvailabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(preferredAvailabilityZoneNode.GetText());
      m_preferredAvailabilityZoneHasBeenSet = true;
    }
    XmlNode preferredOutpostArnNode = resultNode.FirstChild("PreferredOutpostArn");
    if(!preferredOutpostArnNode.IsNull())
    {
      m_preferredOutpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(preferredOutpostArnNode.GetText());
      m_preferredOutpostArnHasBeenSet = true;
    }
    XmlNode cacheClusterCreateTimeNode = resultNode.FirstChild("CacheClusterCreateTime");
    if(!cacheClusterCreateTimeNode.IsNull())
    {
      m_cacheClusterCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterCreateTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_cacheClusterCreateTimeHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = Aws::Utils::Xml::DecodeEscapedXmlText(preferredMaintenanceWindowNode.GetText());
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode pendingModifiedValuesNode = resultNode.FirstChild("PendingModifiedValues");
    if(!pendingModifiedValuesNode.IsNull())
    {
      m_pendingModifiedValues = pendingModifiedValuesNode;
      m_pendingModifiedValuesHasBeenSet = true;
    }
    XmlNode notificationConfigurationNode = resultNode.FirstChild("NotificationConfiguration");
    if(!notificationConfigurationNode.IsNull())
    {
      m_notificationConfiguration = notificationConfigurationNode;
      m_notificationConfigurationHasBeenSet = true;
    }
    XmlNode cacheSecurityGroupsNode = resultNode.FirstChild("CacheSecurityGroups");
    if(!cacheSecurityGroupsNode.IsNull())
    {
      XmlNode cacheSecurityGroupsMember = cacheSecurityGroupsNode.FirstChild("CacheSecurityGroup");
      while(!cacheSecurityGroupsMember.IsNull())
      {
        m_cacheSecurityGroups.push_back(cacheSecurityGroupsMember);
        cacheSecurityGroupsMember = cacheSecurityGroupsMember.NextNode("CacheSecurityGroup");
      }

      m_cacheSecurityGroupsHasBeenSet = true;
    }
    XmlNode cacheParameterGroupNode = resultNode.FirstChild("CacheParameterGroup");
    if(!cacheParameterGroupNode.IsNull())
    {
      m_cacheParameterGroup = cacheParameterGroupNode;
      m_cacheParameterGroupHasBeenSet = true;
    }
    XmlNode cacheSubnetGroupNameNode = resultNode.FirstChild("CacheSubnetGroupName");
    if(!cacheSubnetGroupNameNode.IsNull())
    {
      m_cacheSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheSubnetGroupNameNode.GetText());
      m_cacheSubnetGroupNameHasBeenSet = true;
    }
    XmlNode cacheNodesNode = resultNode.FirstChild("CacheNodes");
    if(!cacheNodesNode.IsNull())
    {
      XmlNode cacheNodesMember = cacheNodesNode.FirstChild("CacheNode");
      while(!cacheNodesMember.IsNull())
      {
        m_cacheNodes.push_back(cacheNodesMember);
        cacheNodesMember = cacheNodesMember.NextNode("CacheNode");
      }

      m_cacheNodesHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoMinorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroups");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("member");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember);
        securityGroupsMember = securityGroupsMember.NextNode("member");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupIdNode.GetText());
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode snapshotRetentionLimitNode = resultNode.FirstChild("SnapshotRetentionLimit");
    if(!snapshotRetentionLimitNode.IsNull())
    {
      m_snapshotRetentionLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotRetentionLimitNode.GetText()).c_str()).c_str());
      m_snapshotRetentionLimitHasBeenSet = true;
    }
    XmlNode snapshotWindowNode = resultNode.FirstChild("SnapshotWindow");
    if(!snapshotWindowNode.IsNull())
    {
      m_snapshotWindow = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotWindowNode.GetText());
      m_snapshotWindowHasBeenSet = true;
    }
    XmlNode authTokenEnabledNode = resultNode.FirstChild("AuthTokenEnabled");
    if(!authTokenEnabledNode.IsNull())
    {
      m_authTokenEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenEnabledNode.GetText()).c_str()).c_str());
      m_authTokenEnabledHasBeenSet = true;
    }
    XmlNode authTokenLastModifiedDateNode = resultNode.FirstChild("AuthTokenLastModifiedDate");
    if(!authTokenLastModifiedDateNode.IsNull())
    {
      m_authTokenLastModifiedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenLastModifiedDateNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_authTokenLastModifiedDateHasBeenSet = true;
    }
    XmlNode transitEncryptionEnabledNode = resultNode.FirstChild("TransitEncryptionEnabled");
    if(!transitEncryptionEnabledNode.IsNull())
    {
      m_transitEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionEnabledNode.GetText()).c_str()).c_str());
      m_transitEncryptionEnabledHasBeenSet = true;
    }
    XmlNode atRestEncryptionEnabledNode = resultNode.FirstChild("AtRestEncryptionEnabled");
    if(!atRestEncryptionEnabledNode.IsNull())
    {
      m_atRestEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(atRestEncryptionEnabledNode.GetText()).c_str()).c_str());
      m_atRestEncryptionEnabledHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode replicationGroupLogDeliveryEnabledNode = resultNode.FirstChild("ReplicationGroupLogDeliveryEnabled");
    if(!replicationGroupLogDeliveryEnabledNode.IsNull())
    {
      m_replicationGroupLogDeliveryEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupLogDeliveryEnabledNode.GetText()).c_str()).c_str());
      m_replicationGroupLogDeliveryEnabledHasBeenSet = true;
    }
    XmlNode logDeliveryConfigurationsNode = resultNode.FirstChild("LogDeliveryConfigurations");
    if(!logDeliveryConfigurationsNode.IsNull())
    {
      XmlNode logDeliveryConfigurationsMember = logDeliveryConfigurationsNode.FirstChild("LogDeliveryConfiguration");
      while(!logDeliveryConfigurationsMember.IsNull())
      {
        m_logDeliveryConfigurations.push_back(logDeliveryConfigurationsMember);
        logDeliveryConfigurationsMember = logDeliveryConfigurationsMember.NextNode("LogDeliveryConfiguration");
      }

      m_logDeliveryConfigurationsHasBeenSet = true;
    }
  }

  return *this;
}

void CacheCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_configurationEndpointHasBeenSet)
  {
      Aws::StringStream configurationEndpointLocationAndMemberSs;
      configurationEndpointLocationAndMemberSs << location << index << locationValue << ".ConfigurationEndpoint";
      m_configurationEndpoint.OutputToStream(oStream, configurationEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_clientDownloadLandingPageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientDownloadLandingPage=" << StringUtils::URLEncode(m_clientDownloadLandingPage.c_str()) << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_cacheClusterStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterStatus=" << StringUtils::URLEncode(m_cacheClusterStatus.c_str()) << "&";
  }

  if(m_numCacheNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumCacheNodes=" << m_numCacheNodes << "&";
  }

  if(m_preferredAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }

  if(m_preferredOutpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredOutpostArn=" << StringUtils::URLEncode(m_preferredOutpostArn.c_str()) << "&";
  }

  if(m_cacheClusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::StringStream pendingModifiedValuesLocationAndMemberSs;
      pendingModifiedValuesLocationAndMemberSs << location << index << locationValue << ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMemberSs.str().c_str());
  }

  if(m_notificationConfigurationHasBeenSet)
  {
      Aws::StringStream notificationConfigurationLocationAndMemberSs;
      notificationConfigurationLocationAndMemberSs << location << index << locationValue << ".NotificationConfiguration";
      m_notificationConfiguration.OutputToStream(oStream, notificationConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_cacheSecurityGroupsHasBeenSet)
  {
      unsigned cacheSecurityGroupsIdx = 1;
      for(auto& item : m_cacheSecurityGroups)
      {
        Aws::StringStream cacheSecurityGroupsSs;
        cacheSecurityGroupsSs << location << index << locationValue << ".CacheSecurityGroup." << cacheSecurityGroupsIdx++;
        item.OutputToStream(oStream, cacheSecurityGroupsSs.str().c_str());
      }
  }

  if(m_cacheParameterGroupHasBeenSet)
  {
      Aws::StringStream cacheParameterGroupLocationAndMemberSs;
      cacheParameterGroupLocationAndMemberSs << location << index << locationValue << ".CacheParameterGroup";
      m_cacheParameterGroup.OutputToStream(oStream, cacheParameterGroupLocationAndMemberSs.str().c_str());
  }

  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  if(m_cacheNodesHasBeenSet)
  {
      unsigned cacheNodesIdx = 1;
      for(auto& item : m_cacheNodes)
      {
        Aws::StringStream cacheNodesSs;
        cacheNodesSs << location << index << locationValue << ".CacheNode." << cacheNodesIdx++;
        item.OutputToStream(oStream, cacheNodesSs.str().c_str());
      }
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location << index << locationValue << ".SecurityGroups.member." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }

  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }

  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }

  if(m_authTokenLastModifiedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenLastModifiedDate=" << StringUtils::URLEncode(m_authTokenLastModifiedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_replicationGroupLogDeliveryEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupLogDeliveryEnabled=" << std::boolalpha << m_replicationGroupLogDeliveryEnabled << "&";
  }

  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location << index << locationValue << ".LogDeliveryConfiguration." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }

}

void CacheCluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_configurationEndpointHasBeenSet)
  {
      Aws::String configurationEndpointLocationAndMember(location);
      configurationEndpointLocationAndMember += ".ConfigurationEndpoint";
      m_configurationEndpoint.OutputToStream(oStream, configurationEndpointLocationAndMember.c_str());
  }
  if(m_clientDownloadLandingPageHasBeenSet)
  {
      oStream << location << ".ClientDownloadLandingPage=" << StringUtils::URLEncode(m_clientDownloadLandingPage.c_str()) << "&";
  }
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_cacheClusterStatusHasBeenSet)
  {
      oStream << location << ".CacheClusterStatus=" << StringUtils::URLEncode(m_cacheClusterStatus.c_str()) << "&";
  }
  if(m_numCacheNodesHasBeenSet)
  {
      oStream << location << ".NumCacheNodes=" << m_numCacheNodes << "&";
  }
  if(m_preferredAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }
  if(m_preferredOutpostArnHasBeenSet)
  {
      oStream << location << ".PreferredOutpostArn=" << StringUtils::URLEncode(m_preferredOutpostArn.c_str()) << "&";
  }
  if(m_cacheClusterCreateTimeHasBeenSet)
  {
      oStream << location << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::String pendingModifiedValuesLocationAndMember(location);
      pendingModifiedValuesLocationAndMember += ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMember.c_str());
  }
  if(m_notificationConfigurationHasBeenSet)
  {
      Aws::String notificationConfigurationLocationAndMember(location);
      notificationConfigurationLocationAndMember += ".NotificationConfiguration";
      m_notificationConfiguration.OutputToStream(oStream, notificationConfigurationLocationAndMember.c_str());
  }
  if(m_cacheSecurityGroupsHasBeenSet)
  {
      unsigned cacheSecurityGroupsIdx = 1;
      for(auto& item : m_cacheSecurityGroups)
      {
        Aws::StringStream cacheSecurityGroupsSs;
        cacheSecurityGroupsSs << location <<  ".CacheSecurityGroup." << cacheSecurityGroupsIdx++;
        item.OutputToStream(oStream, cacheSecurityGroupsSs.str().c_str());
      }
  }
  if(m_cacheParameterGroupHasBeenSet)
  {
      Aws::String cacheParameterGroupLocationAndMember(location);
      cacheParameterGroupLocationAndMember += ".CacheParameterGroup";
      m_cacheParameterGroup.OutputToStream(oStream, cacheParameterGroupLocationAndMember.c_str());
  }
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }
  if(m_cacheNodesHasBeenSet)
  {
      unsigned cacheNodesIdx = 1;
      for(auto& item : m_cacheNodes)
      {
        Aws::StringStream cacheNodesSs;
        cacheNodesSs << location <<  ".CacheNode." << cacheNodesIdx++;
        item.OutputToStream(oStream, cacheNodesSs.str().c_str());
      }
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location <<  ".SecurityGroups.member." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }
  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }
  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }
  if(m_authTokenLastModifiedDateHasBeenSet)
  {
      oStream << location << ".AuthTokenLastModifiedDate=" << StringUtils::URLEncode(m_authTokenLastModifiedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_replicationGroupLogDeliveryEnabledHasBeenSet)
  {
      oStream << location << ".ReplicationGroupLogDeliveryEnabled=" << std::boolalpha << m_replicationGroupLogDeliveryEnabled << "&";
  }
  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location <<  ".LogDeliveryConfiguration." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
