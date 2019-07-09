/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_nodeSnapshotsHasBeenSet(false)
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
    m_nodeSnapshotsHasBeenSet(false)
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
      m_snapshotName = snapshotNameNode.GetText();
      m_snapshotNameHasBeenSet = true;
    }
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = replicationGroupIdNode.GetText();
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode replicationGroupDescriptionNode = resultNode.FirstChild("ReplicationGroupDescription");
    if(!replicationGroupDescriptionNode.IsNull())
    {
      m_replicationGroupDescription = replicationGroupDescriptionNode.GetText();
      m_replicationGroupDescriptionHasBeenSet = true;
    }
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = cacheClusterIdNode.GetText();
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode snapshotStatusNode = resultNode.FirstChild("SnapshotStatus");
    if(!snapshotStatusNode.IsNull())
    {
      m_snapshotStatus = snapshotStatusNode.GetText();
      m_snapshotStatusHasBeenSet = true;
    }
    XmlNode snapshotSourceNode = resultNode.FirstChild("SnapshotSource");
    if(!snapshotSourceNode.IsNull())
    {
      m_snapshotSource = snapshotSourceNode.GetText();
      m_snapshotSourceHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = cacheNodeTypeNode.GetText();
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode numCacheNodesNode = resultNode.FirstChild("NumCacheNodes");
    if(!numCacheNodesNode.IsNull())
    {
      m_numCacheNodes = StringUtils::ConvertToInt32(StringUtils::Trim(numCacheNodesNode.GetText().c_str()).c_str());
      m_numCacheNodesHasBeenSet = true;
    }
    XmlNode preferredAvailabilityZoneNode = resultNode.FirstChild("PreferredAvailabilityZone");
    if(!preferredAvailabilityZoneNode.IsNull())
    {
      m_preferredAvailabilityZone = preferredAvailabilityZoneNode.GetText();
      m_preferredAvailabilityZoneHasBeenSet = true;
    }
    XmlNode cacheClusterCreateTimeNode = resultNode.FirstChild("CacheClusterCreateTime");
    if(!cacheClusterCreateTimeNode.IsNull())
    {
      m_cacheClusterCreateTime = DateTime(StringUtils::Trim(cacheClusterCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_cacheClusterCreateTimeHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = preferredMaintenanceWindowNode.GetText();
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode cacheParameterGroupNameNode = resultNode.FirstChild("CacheParameterGroupName");
    if(!cacheParameterGroupNameNode.IsNull())
    {
      m_cacheParameterGroupName = cacheParameterGroupNameNode.GetText();
      m_cacheParameterGroupNameHasBeenSet = true;
    }
    XmlNode cacheSubnetGroupNameNode = resultNode.FirstChild("CacheSubnetGroupName");
    if(!cacheSubnetGroupNameNode.IsNull())
    {
      m_cacheSubnetGroupName = cacheSubnetGroupNameNode.GetText();
      m_cacheSubnetGroupNameHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(autoMinorVersionUpgradeNode.GetText().c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode snapshotRetentionLimitNode = resultNode.FirstChild("SnapshotRetentionLimit");
    if(!snapshotRetentionLimitNode.IsNull())
    {
      m_snapshotRetentionLimit = StringUtils::ConvertToInt32(StringUtils::Trim(snapshotRetentionLimitNode.GetText().c_str()).c_str());
      m_snapshotRetentionLimitHasBeenSet = true;
    }
    XmlNode snapshotWindowNode = resultNode.FirstChild("SnapshotWindow");
    if(!snapshotWindowNode.IsNull())
    {
      m_snapshotWindow = snapshotWindowNode.GetText();
      m_snapshotWindowHasBeenSet = true;
    }
    XmlNode numNodeGroupsNode = resultNode.FirstChild("NumNodeGroups");
    if(!numNodeGroupsNode.IsNull())
    {
      m_numNodeGroups = StringUtils::ConvertToInt32(StringUtils::Trim(numNodeGroupsNode.GetText().c_str()).c_str());
      m_numNodeGroupsHasBeenSet = true;
    }
    XmlNode automaticFailoverNode = resultNode.FirstChild("AutomaticFailover");
    if(!automaticFailoverNode.IsNull())
    {
      m_automaticFailover = AutomaticFailoverStatusMapper::GetAutomaticFailoverStatusForName(StringUtils::Trim(automaticFailoverNode.GetText().c_str()).c_str());
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

  if(m_cacheClusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_cacheClusterCreateTimeHasBeenSet)
  {
      oStream << location << ".CacheClusterCreateTime=" << StringUtils::URLEncode(m_cacheClusterCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
