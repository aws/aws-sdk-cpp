/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/Snapshot.h>
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

Snapshot::Snapshot() : 
    m_snapshotNameHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupDescriptionHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_snapshotStatusHasBeenSet(false),
    m_snapshotSourceHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_preferredOutpostArnHasBeenSet(false),
    m_cacheClusterCreateTimeHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_numNodeGroups(0),
    m_numNodeGroupsHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_nodeSnapshotsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
}

Snapshot::Snapshot(const XmlNode& xmlNode) : 
    m_snapshotNameHasBeenSet(false),
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupDescriptionHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_snapshotStatusHasBeenSet(false),
    m_snapshotSourceHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_preferredOutpostArnHasBeenSet(false),
    m_cacheClusterCreateTimeHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_numNodeGroups(0),
    m_numNodeGroupsHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_nodeSnapshotsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
  *this = xmlNode;
}

Snapshot& Snapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotNameNode = resultNode.FirstChild("SnapshotName");
    if(!snapshotNameNode.IsNull())
    {
      m_snapshotName = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotNameNode.GetText());
      m_snapshotNameHasBeenSet = true;
    }
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupIdNode.GetText());
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode replicationGroupDescriptionNode = resultNode.FirstChild("ReplicationGroupDescription");
    if(!replicationGroupDescriptionNode.IsNull())
    {
      m_replicationGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupDescriptionNode.GetText());
      m_replicationGroupDescriptionHasBeenSet = true;
    }
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterIdNode.GetText());
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode snapshotStatusNode = resultNode.FirstChild("SnapshotStatus");
    if(!snapshotStatusNode.IsNull())
    {
      m_snapshotStatus = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotStatusNode.GetText());
      m_snapshotStatusHasBeenSet = true;
    }
    XmlNode snapshotSourceNode = resultNode.FirstChild("SnapshotSource");
    if(!snapshotSourceNode.IsNull())
    {
      m_snapshotSource = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotSourceNode.GetText());
      m_snapshotSourceHasBeenSet = true;
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
      m_cacheClusterCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_cacheClusterCreateTimeHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = Aws::Utils::Xml::DecodeEscapedXmlText(preferredMaintenanceWindowNode.GetText());
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode cacheParameterGroupNameNode = resultNode.FirstChild("CacheParameterGroupName");
    if(!cacheParameterGroupNameNode.IsNull())
    {
      m_cacheParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupNameNode.GetText());
      m_cacheParameterGroupNameHasBeenSet = true;
    }
    XmlNode cacheSubnetGroupNameNode = resultNode.FirstChild("CacheSubnetGroupName");
    if(!cacheSubnetGroupNameNode.IsNull())
    {
      m_cacheSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheSubnetGroupNameNode.GetText());
      m_cacheSubnetGroupNameHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoMinorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
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
    XmlNode numNodeGroupsNode = resultNode.FirstChild("NumNodeGroups");
    if(!numNodeGroupsNode.IsNull())
    {
      m_numNodeGroups = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numNodeGroupsNode.GetText()).c_str()).c_str());
      m_numNodeGroupsHasBeenSet = true;
    }
    XmlNode automaticFailoverNode = resultNode.FirstChild("AutomaticFailover");
    if(!automaticFailoverNode.IsNull())
    {
      m_automaticFailover = AutomaticFailoverStatusMapper::GetAutomaticFailoverStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automaticFailoverNode.GetText()).c_str()).c_str());
      m_automaticFailoverHasBeenSet = true;
    }
    XmlNode nodeSnapshotsNode = resultNode.FirstChild("NodeSnapshots");
    if(!nodeSnapshotsNode.IsNull())
    {
      XmlNode nodeSnapshotsMember = nodeSnapshotsNode.FirstChild("NodeSnapshot");
      while(!nodeSnapshotsMember.IsNull())
      {
        m_nodeSnapshots.push_back(nodeSnapshotsMember);
        nodeSnapshotsMember = nodeSnapshotsMember.NextNode("NodeSnapshot");
      }

      m_nodeSnapshotsHasBeenSet = true;
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
    XmlNode dataTieringNode = resultNode.FirstChild("DataTiering");
    if(!dataTieringNode.IsNull())
    {
      m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataTieringNode.GetText()).c_str()).c_str());
      m_dataTieringHasBeenSet = true;
    }
  }

  return *this;
}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotName=" << StringUtils::URLEncode(m_snapshotName.c_str()) << "&";
  }

  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_replicationGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupDescription=" << StringUtils::URLEncode(m_replicationGroupDescription.c_str()) << "&";
  }

  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_snapshotStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotStatus=" << StringUtils::URLEncode(m_snapshotStatus.c_str()) << "&";
  }

  if(m_snapshotSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotSource=" << StringUtils::URLEncode(m_snapshotSource.c_str()) << "&";
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
      oStream << location << index << locationValue << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }

  if(m_numNodeGroupsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumNodeGroups=" << m_numNodeGroups << "&";
  }

  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
  }

  if(m_nodeSnapshotsHasBeenSet)
  {
      unsigned nodeSnapshotsIdx = 1;
      for(auto& item : m_nodeSnapshots)
      {
        Aws::StringStream nodeSnapshotsSs;
        nodeSnapshotsSs << location << index << locationValue << ".NodeSnapshot." << nodeSnapshotsIdx++;
        item.OutputToStream(oStream, nodeSnapshotsSs.str().c_str());
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

  if(m_dataTieringHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataTiering=" << DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering) << "&";
  }

}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotNameHasBeenSet)
  {
      oStream << location << ".SnapshotName=" << StringUtils::URLEncode(m_snapshotName.c_str()) << "&";
  }
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_replicationGroupDescriptionHasBeenSet)
  {
      oStream << location << ".ReplicationGroupDescription=" << StringUtils::URLEncode(m_replicationGroupDescription.c_str()) << "&";
  }
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_snapshotStatusHasBeenSet)
  {
      oStream << location << ".SnapshotStatus=" << StringUtils::URLEncode(m_snapshotStatus.c_str()) << "&";
  }
  if(m_snapshotSourceHasBeenSet)
  {
      oStream << location << ".SnapshotSource=" << StringUtils::URLEncode(m_snapshotSource.c_str()) << "&";
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
      oStream << location << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }
  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }
  if(m_snapshotWindowHasBeenSet)
  {
      oStream << location << ".SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }
  if(m_numNodeGroupsHasBeenSet)
  {
      oStream << location << ".NumNodeGroups=" << m_numNodeGroups << "&";
  }
  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
  }
  if(m_nodeSnapshotsHasBeenSet)
  {
      unsigned nodeSnapshotsIdx = 1;
      for(auto& item : m_nodeSnapshots)
      {
        Aws::StringStream nodeSnapshotsSs;
        nodeSnapshotsSs << location <<  ".NodeSnapshot." << nodeSnapshotsIdx++;
        item.OutputToStream(oStream, nodeSnapshotsSs.str().c_str());
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
  if(m_dataTieringHasBeenSet)
  {
      oStream << location << ".DataTiering=" << DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
