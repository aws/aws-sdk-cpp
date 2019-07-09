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

ReplicationGroup::ReplicationGroup() : 
    m_replicationGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_memberClustersHasBeenSet(false),
    m_nodeGroupsHasBeenSet(false),
    m_snapshottingClusterIdHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_configurationEndpointHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_clusterEnabled(false),
    m_clusterEnabledHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false)
{
}

ReplicationGroup::ReplicationGroup(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_memberClustersHasBeenSet(false),
    m_nodeGroupsHasBeenSet(false),
    m_snapshottingClusterIdHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_configurationEndpointHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_clusterEnabled(false),
    m_clusterEnabledHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false)
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
      m_replicationGroupId = replicationGroupIdNode.GetText();
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
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
      m_snapshottingClusterId = snapshottingClusterIdNode.GetText();
      m_snapshottingClusterIdHasBeenSet = true;
    }
    XmlNode automaticFailoverNode = resultNode.FirstChild("AutomaticFailover");
    if(!automaticFailoverNode.IsNull())
    {
      m_automaticFailover = AutomaticFailoverStatusMapper::GetAutomaticFailoverStatusForName(StringUtils::Trim(automaticFailoverNode.GetText().c_str()).c_str());
      m_automaticFailoverHasBeenSet = true;
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
      m_snapshotRetentionLimit = StringUtils::ConvertToInt32(StringUtils::Trim(snapshotRetentionLimitNode.GetText().c_str()).c_str());
      m_snapshotRetentionLimitHasBeenSet = true;
    }
    XmlNode snapshotWindowNode = resultNode.FirstChild("SnapshotWindow");
    if(!snapshotWindowNode.IsNull())
    {
      m_snapshotWindow = snapshotWindowNode.GetText();
      m_snapshotWindowHasBeenSet = true;
    }
    XmlNode clusterEnabledNode = resultNode.FirstChild("ClusterEnabled");
    if(!clusterEnabledNode.IsNull())
    {
      m_clusterEnabled = StringUtils::ConvertToBool(StringUtils::Trim(clusterEnabledNode.GetText().c_str()).c_str());
      m_clusterEnabledHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = cacheNodeTypeNode.GetText();
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode authTokenEnabledNode = resultNode.FirstChild("AuthTokenEnabled");
    if(!authTokenEnabledNode.IsNull())
    {
      m_authTokenEnabled = StringUtils::ConvertToBool(StringUtils::Trim(authTokenEnabledNode.GetText().c_str()).c_str());
      m_authTokenEnabledHasBeenSet = true;
    }
    XmlNode transitEncryptionEnabledNode = resultNode.FirstChild("TransitEncryptionEnabled");
    if(!transitEncryptionEnabledNode.IsNull())
    {
      m_transitEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(transitEncryptionEnabledNode.GetText().c_str()).c_str());
      m_transitEncryptionEnabledHasBeenSet = true;
    }
    XmlNode atRestEncryptionEnabledNode = resultNode.FirstChild("AtRestEncryptionEnabled");
    if(!atRestEncryptionEnabledNode.IsNull())
    {
      m_atRestEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(atRestEncryptionEnabledNode.GetText().c_str()).c_str());
      m_atRestEncryptionEnabledHasBeenSet = true;
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
        oStream << location << index << locationValue << ".ClusterId." << memberClustersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_nodeGroupsHasBeenSet)
  {
      unsigned nodeGroupsIdx = 1;
      for(auto& item : m_nodeGroups)
      {
        Aws::StringStream nodeGroupsSs;
        nodeGroupsSs << location << index << locationValue << ".NodeGroup." << nodeGroupsIdx++;
        item.OutputToStream(oStream, nodeGroupsSs.str().c_str());
      }
  }

  if(m_snapshottingClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshottingClusterId=" << StringUtils::URLEncode(m_snapshottingClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
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

  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
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
        oStream << location << ".ClusterId." << memberClustersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_nodeGroupsHasBeenSet)
  {
      unsigned nodeGroupsIdx = 1;
      for(auto& item : m_nodeGroups)
      {
        Aws::StringStream nodeGroupsSs;
        nodeGroupsSs << location <<  ".NodeGroup." << nodeGroupsIdx++;
        item.OutputToStream(oStream, nodeGroupsSs.str().c_str());
      }
  }
  if(m_snapshottingClusterIdHasBeenSet)
  {
      oStream << location << ".SnapshottingClusterId=" << StringUtils::URLEncode(m_snapshottingClusterId.c_str()) << "&";
  }
  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
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
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
