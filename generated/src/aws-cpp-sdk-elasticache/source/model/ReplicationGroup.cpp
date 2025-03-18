/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ReplicationGroup.h>
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

ReplicationGroup::ReplicationGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReplicationGroup& ReplicationGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupIdNode.GetText());
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode globalReplicationGroupInfoNode = resultNode.FirstChild("GlobalReplicationGroupInfo");
    if(!globalReplicationGroupInfoNode.IsNull())
    {
      m_globalReplicationGroupInfo = globalReplicationGroupInfoNode;
      m_globalReplicationGroupInfoHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode pendingModifiedValuesNode = resultNode.FirstChild("PendingModifiedValues");
    if(!pendingModifiedValuesNode.IsNull())
    {
      m_pendingModifiedValues = pendingModifiedValuesNode;
      m_pendingModifiedValuesHasBeenSet = true;
    }
    XmlNode memberClustersNode = resultNode.FirstChild("MemberClusters");
    if(!memberClustersNode.IsNull())
    {
      XmlNode memberClustersMember = memberClustersNode.FirstChild("ClusterId");
      m_memberClustersHasBeenSet = !memberClustersMember.IsNull();
      while(!memberClustersMember.IsNull())
      {
        m_memberClusters.push_back(memberClustersMember.GetText());
        memberClustersMember = memberClustersMember.NextNode("ClusterId");
      }

      m_memberClustersHasBeenSet = true;
    }
    XmlNode nodeGroupsNode = resultNode.FirstChild("NodeGroups");
    if(!nodeGroupsNode.IsNull())
    {
      XmlNode nodeGroupsMember = nodeGroupsNode.FirstChild("NodeGroup");
      m_nodeGroupsHasBeenSet = !nodeGroupsMember.IsNull();
      while(!nodeGroupsMember.IsNull())
      {
        m_nodeGroups.push_back(nodeGroupsMember);
        nodeGroupsMember = nodeGroupsMember.NextNode("NodeGroup");
      }

      m_nodeGroupsHasBeenSet = true;
    }
    XmlNode snapshottingClusterIdNode = resultNode.FirstChild("SnapshottingClusterId");
    if(!snapshottingClusterIdNode.IsNull())
    {
      m_snapshottingClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshottingClusterIdNode.GetText());
      m_snapshottingClusterIdHasBeenSet = true;
    }
    XmlNode automaticFailoverNode = resultNode.FirstChild("AutomaticFailover");
    if(!automaticFailoverNode.IsNull())
    {
      m_automaticFailover = AutomaticFailoverStatusMapper::GetAutomaticFailoverStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automaticFailoverNode.GetText()).c_str()));
      m_automaticFailoverHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = MultiAZStatusMapper::GetMultiAZStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAZNode.GetText()).c_str()));
      m_multiAZHasBeenSet = true;
    }
    XmlNode configurationEndpointNode = resultNode.FirstChild("ConfigurationEndpoint");
    if(!configurationEndpointNode.IsNull())
    {
      m_configurationEndpoint = configurationEndpointNode;
      m_configurationEndpointHasBeenSet = true;
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
    XmlNode clusterEnabledNode = resultNode.FirstChild("ClusterEnabled");
    if(!clusterEnabledNode.IsNull())
    {
      m_clusterEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterEnabledNode.GetText()).c_str()).c_str());
      m_clusterEnabledHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
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
      m_authTokenLastModifiedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenLastModifiedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
    XmlNode memberClustersOutpostArnsNode = resultNode.FirstChild("MemberClustersOutpostArns");
    if(!memberClustersOutpostArnsNode.IsNull())
    {
      XmlNode memberClustersOutpostArnsMember = memberClustersOutpostArnsNode.FirstChild("ReplicationGroupOutpostArn");
      m_memberClustersOutpostArnsHasBeenSet = !memberClustersOutpostArnsMember.IsNull();
      while(!memberClustersOutpostArnsMember.IsNull())
      {
        m_memberClustersOutpostArns.push_back(memberClustersOutpostArnsMember.GetText());
        memberClustersOutpostArnsMember = memberClustersOutpostArnsMember.NextNode("ReplicationGroupOutpostArn");
      }

      m_memberClustersOutpostArnsHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode userGroupIdsNode = resultNode.FirstChild("UserGroupIds");
    if(!userGroupIdsNode.IsNull())
    {
      XmlNode userGroupIdsMember = userGroupIdsNode.FirstChild("member");
      m_userGroupIdsHasBeenSet = !userGroupIdsMember.IsNull();
      while(!userGroupIdsMember.IsNull())
      {
        m_userGroupIds.push_back(userGroupIdsMember.GetText());
        userGroupIdsMember = userGroupIdsMember.NextNode("member");
      }

      m_userGroupIdsHasBeenSet = true;
    }
    XmlNode logDeliveryConfigurationsNode = resultNode.FirstChild("LogDeliveryConfigurations");
    if(!logDeliveryConfigurationsNode.IsNull())
    {
      XmlNode logDeliveryConfigurationsMember = logDeliveryConfigurationsNode.FirstChild("LogDeliveryConfiguration");
      m_logDeliveryConfigurationsHasBeenSet = !logDeliveryConfigurationsMember.IsNull();
      while(!logDeliveryConfigurationsMember.IsNull())
      {
        m_logDeliveryConfigurations.push_back(logDeliveryConfigurationsMember);
        logDeliveryConfigurationsMember = logDeliveryConfigurationsMember.NextNode("LogDeliveryConfiguration");
      }

      m_logDeliveryConfigurationsHasBeenSet = true;
    }
    XmlNode replicationGroupCreateTimeNode = resultNode.FirstChild("ReplicationGroupCreateTime");
    if(!replicationGroupCreateTimeNode.IsNull())
    {
      m_replicationGroupCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_replicationGroupCreateTimeHasBeenSet = true;
    }
    XmlNode dataTieringNode = resultNode.FirstChild("DataTiering");
    if(!dataTieringNode.IsNull())
    {
      m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataTieringNode.GetText()).c_str()));
      m_dataTieringHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoMinorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode networkTypeNode = resultNode.FirstChild("NetworkType");
    if(!networkTypeNode.IsNull())
    {
      m_networkType = NetworkTypeMapper::GetNetworkTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkTypeNode.GetText()).c_str()));
      m_networkTypeHasBeenSet = true;
    }
    XmlNode ipDiscoveryNode = resultNode.FirstChild("IpDiscovery");
    if(!ipDiscoveryNode.IsNull())
    {
      m_ipDiscovery = IpDiscoveryMapper::GetIpDiscoveryForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipDiscoveryNode.GetText()).c_str()));
      m_ipDiscoveryHasBeenSet = true;
    }
    XmlNode transitEncryptionModeNode = resultNode.FirstChild("TransitEncryptionMode");
    if(!transitEncryptionModeNode.IsNull())
    {
      m_transitEncryptionMode = TransitEncryptionModeMapper::GetTransitEncryptionModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionModeNode.GetText()).c_str()));
      m_transitEncryptionModeHasBeenSet = true;
    }
    XmlNode clusterModeNode = resultNode.FirstChild("ClusterMode");
    if(!clusterModeNode.IsNull())
    {
      m_clusterMode = ClusterModeMapper::GetClusterModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterModeNode.GetText()).c_str()));
      m_clusterModeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_globalReplicationGroupInfoHasBeenSet)
  {
      Aws::StringStream globalReplicationGroupInfoLocationAndMemberSs;
      globalReplicationGroupInfoLocationAndMemberSs << location << index << locationValue << ".GlobalReplicationGroupInfo";
      m_globalReplicationGroupInfo.OutputToStream(oStream, globalReplicationGroupInfoLocationAndMemberSs.str().c_str());
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::StringStream pendingModifiedValuesLocationAndMemberSs;
      pendingModifiedValuesLocationAndMemberSs << location << index << locationValue << ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMemberSs.str().c_str());
  }

  if(m_memberClustersHasBeenSet)
  {
      unsigned memberClustersIdx = 1;
      for(auto& item : m_memberClusters)
      {
        oStream << location << index << locationValue << ".MemberClusters.ClusterId." << memberClustersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_nodeGroupsHasBeenSet)
  {
      unsigned nodeGroupsIdx = 1;
      for(auto& item : m_nodeGroups)
      {
        Aws::StringStream nodeGroupsSs;
        nodeGroupsSs << location << index << locationValue << ".NodeGroups.NodeGroup." << nodeGroupsIdx++;
        item.OutputToStream(oStream, nodeGroupsSs.str().c_str());
      }
  }

  if(m_snapshottingClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshottingClusterId=" << StringUtils::URLEncode(m_snapshottingClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailover=" << StringUtils::URLEncode(AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover)) << "&";
  }

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << StringUtils::URLEncode(MultiAZStatusMapper::GetNameForMultiAZStatus(m_multiAZ)) << "&";
  }

  if(m_configurationEndpointHasBeenSet)
  {
      Aws::StringStream configurationEndpointLocationAndMemberSs;
      configurationEndpointLocationAndMemberSs << location << index << locationValue << ".ConfigurationEndpoint";
      m_configurationEndpoint.OutputToStream(oStream, configurationEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }

  if(m_clusterEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterEnabled=" << std::boolalpha << m_clusterEnabled << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }

  if(m_authTokenLastModifiedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenLastModifiedDate=" << StringUtils::URLEncode(m_authTokenLastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }

  if(m_memberClustersOutpostArnsHasBeenSet)
  {
      unsigned memberClustersOutpostArnsIdx = 1;
      for(auto& item : m_memberClustersOutpostArns)
      {
        oStream << location << index << locationValue << ".MemberClustersOutpostArns.ReplicationGroupOutpostArn." << memberClustersOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_userGroupIdsHasBeenSet)
  {
      unsigned userGroupIdsIdx = 1;
      for(auto& item : m_userGroupIds)
      {
        oStream << location << index << locationValue << ".UserGroupIds.member." << userGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location << index << locationValue << ".LogDeliveryConfigurations.LogDeliveryConfiguration." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }

  if(m_replicationGroupCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupCreateTime=" << StringUtils::URLEncode(m_replicationGroupCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dataTieringHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataTiering=" << StringUtils::URLEncode(DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering)) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkType=" << StringUtils::URLEncode(NetworkTypeMapper::GetNameForNetworkType(m_networkType)) << "&";
  }

  if(m_ipDiscoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpDiscovery=" << StringUtils::URLEncode(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery)) << "&";
  }

  if(m_transitEncryptionModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }

  if(m_clusterModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterMode=" << StringUtils::URLEncode(ClusterModeMapper::GetNameForClusterMode(m_clusterMode)) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

}

void ReplicationGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_globalReplicationGroupInfoHasBeenSet)
  {
      Aws::String globalReplicationGroupInfoLocationAndMember(location);
      globalReplicationGroupInfoLocationAndMember += ".GlobalReplicationGroupInfo";
      m_globalReplicationGroupInfo.OutputToStream(oStream, globalReplicationGroupInfoLocationAndMember.c_str());
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::String pendingModifiedValuesLocationAndMember(location);
      pendingModifiedValuesLocationAndMember += ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMember.c_str());
  }
  if(m_memberClustersHasBeenSet)
  {
      unsigned memberClustersIdx = 1;
      for(auto& item : m_memberClusters)
      {
        oStream << location << ".MemberClusters.ClusterId." << memberClustersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_nodeGroupsHasBeenSet)
  {
      unsigned nodeGroupsIdx = 1;
      for(auto& item : m_nodeGroups)
      {
        Aws::StringStream nodeGroupsSs;
        nodeGroupsSs << location << ".NodeGroups.NodeGroup." << nodeGroupsIdx++;
        item.OutputToStream(oStream, nodeGroupsSs.str().c_str());
      }
  }
  if(m_snapshottingClusterIdHasBeenSet)
  {
      oStream << location << ".SnapshottingClusterId=" << StringUtils::URLEncode(m_snapshottingClusterId.c_str()) << "&";
  }
  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << ".AutomaticFailover=" << StringUtils::URLEncode(AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover)) << "&";
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << StringUtils::URLEncode(MultiAZStatusMapper::GetNameForMultiAZStatus(m_multiAZ)) << "&";
  }
  if(m_configurationEndpointHasBeenSet)
  {
      Aws::String configurationEndpointLocationAndMember(location);
      configurationEndpointLocationAndMember += ".ConfigurationEndpoint";
      m_configurationEndpoint.OutputToStream(oStream, configurationEndpointLocationAndMember.c_str());
  }
  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }
  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }
  if(m_clusterEnabledHasBeenSet)
  {
      oStream << location << ".ClusterEnabled=" << std::boolalpha << m_clusterEnabled << "&";
  }
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }
  if(m_authTokenLastModifiedDateHasBeenSet)
  {
      oStream << location << ".AuthTokenLastModifiedDate=" << StringUtils::URLEncode(m_authTokenLastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }
  if(m_memberClustersOutpostArnsHasBeenSet)
  {
      unsigned memberClustersOutpostArnsIdx = 1;
      for(auto& item : m_memberClustersOutpostArns)
      {
        oStream << location << ".MemberClustersOutpostArns.ReplicationGroupOutpostArn." << memberClustersOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_userGroupIdsHasBeenSet)
  {
      unsigned userGroupIdsIdx = 1;
      for(auto& item : m_userGroupIds)
      {
        oStream << location << ".UserGroupIds.member." << userGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location << ".LogDeliveryConfigurations.LogDeliveryConfiguration." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }
  if(m_replicationGroupCreateTimeHasBeenSet)
  {
      oStream << location << ".ReplicationGroupCreateTime=" << StringUtils::URLEncode(m_replicationGroupCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dataTieringHasBeenSet)
  {
      oStream << location << ".DataTiering=" << StringUtils::URLEncode(DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering)) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }
  if(m_networkTypeHasBeenSet)
  {
      oStream << location << ".NetworkType=" << StringUtils::URLEncode(NetworkTypeMapper::GetNameForNetworkType(m_networkType)) << "&";
  }
  if(m_ipDiscoveryHasBeenSet)
  {
      oStream << location << ".IpDiscovery=" << StringUtils::URLEncode(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery)) << "&";
  }
  if(m_transitEncryptionModeHasBeenSet)
  {
      oStream << location << ".TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }
  if(m_clusterModeHasBeenSet)
  {
      oStream << location << ".ClusterMode=" << StringUtils::URLEncode(ClusterModeMapper::GetNameForClusterMode(m_clusterMode)) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
