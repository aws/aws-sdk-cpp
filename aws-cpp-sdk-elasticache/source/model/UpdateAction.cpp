/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/UpdateAction.h>
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

UpdateAction::UpdateAction() : 
    m_replicationGroupIdHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_serviceUpdateReleaseDateHasBeenSet(false),
    m_serviceUpdateSeverity(ServiceUpdateSeverity::NOT_SET),
    m_serviceUpdateSeverityHasBeenSet(false),
    m_serviceUpdateStatus(ServiceUpdateStatus::NOT_SET),
    m_serviceUpdateStatusHasBeenSet(false),
    m_serviceUpdateRecommendedApplyByDateHasBeenSet(false),
    m_serviceUpdateType(ServiceUpdateType::NOT_SET),
    m_serviceUpdateTypeHasBeenSet(false),
    m_updateActionAvailableDateHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false),
    m_nodesUpdatedHasBeenSet(false),
    m_updateActionStatusModifiedDateHasBeenSet(false),
    m_slaMet(SlaMet::NOT_SET),
    m_slaMetHasBeenSet(false),
    m_nodeGroupUpdateStatusHasBeenSet(false),
    m_cacheNodeUpdateStatusHasBeenSet(false),
    m_estimatedUpdateTimeHasBeenSet(false),
    m_engineHasBeenSet(false)
{
}

UpdateAction::UpdateAction(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_serviceUpdateReleaseDateHasBeenSet(false),
    m_serviceUpdateSeverity(ServiceUpdateSeverity::NOT_SET),
    m_serviceUpdateSeverityHasBeenSet(false),
    m_serviceUpdateStatus(ServiceUpdateStatus::NOT_SET),
    m_serviceUpdateStatusHasBeenSet(false),
    m_serviceUpdateRecommendedApplyByDateHasBeenSet(false),
    m_serviceUpdateType(ServiceUpdateType::NOT_SET),
    m_serviceUpdateTypeHasBeenSet(false),
    m_updateActionAvailableDateHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false),
    m_nodesUpdatedHasBeenSet(false),
    m_updateActionStatusModifiedDateHasBeenSet(false),
    m_slaMet(SlaMet::NOT_SET),
    m_slaMetHasBeenSet(false),
    m_nodeGroupUpdateStatusHasBeenSet(false),
    m_cacheNodeUpdateStatusHasBeenSet(false),
    m_estimatedUpdateTimeHasBeenSet(false),
    m_engineHasBeenSet(false)
{
  *this = xmlNode;
}

UpdateAction& UpdateAction::operator =(const XmlNode& xmlNode)
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
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(cacheClusterIdNode.GetText());
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode serviceUpdateNameNode = resultNode.FirstChild("ServiceUpdateName");
    if(!serviceUpdateNameNode.IsNull())
    {
      m_serviceUpdateName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateNameNode.GetText());
      m_serviceUpdateNameHasBeenSet = true;
    }
    XmlNode serviceUpdateReleaseDateNode = resultNode.FirstChild("ServiceUpdateReleaseDate");
    if(!serviceUpdateReleaseDateNode.IsNull())
    {
      m_serviceUpdateReleaseDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateReleaseDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_serviceUpdateReleaseDateHasBeenSet = true;
    }
    XmlNode serviceUpdateSeverityNode = resultNode.FirstChild("ServiceUpdateSeverity");
    if(!serviceUpdateSeverityNode.IsNull())
    {
      m_serviceUpdateSeverity = ServiceUpdateSeverityMapper::GetServiceUpdateSeverityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateSeverityNode.GetText()).c_str()).c_str());
      m_serviceUpdateSeverityHasBeenSet = true;
    }
    XmlNode serviceUpdateStatusNode = resultNode.FirstChild("ServiceUpdateStatus");
    if(!serviceUpdateStatusNode.IsNull())
    {
      m_serviceUpdateStatus = ServiceUpdateStatusMapper::GetServiceUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateStatusNode.GetText()).c_str()).c_str());
      m_serviceUpdateStatusHasBeenSet = true;
    }
    XmlNode serviceUpdateRecommendedApplyByDateNode = resultNode.FirstChild("ServiceUpdateRecommendedApplyByDate");
    if(!serviceUpdateRecommendedApplyByDateNode.IsNull())
    {
      m_serviceUpdateRecommendedApplyByDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateRecommendedApplyByDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_serviceUpdateRecommendedApplyByDateHasBeenSet = true;
    }
    XmlNode serviceUpdateTypeNode = resultNode.FirstChild("ServiceUpdateType");
    if(!serviceUpdateTypeNode.IsNull())
    {
      m_serviceUpdateType = ServiceUpdateTypeMapper::GetServiceUpdateTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateTypeNode.GetText()).c_str()).c_str());
      m_serviceUpdateTypeHasBeenSet = true;
    }
    XmlNode updateActionAvailableDateNode = resultNode.FirstChild("UpdateActionAvailableDate");
    if(!updateActionAvailableDateNode.IsNull())
    {
      m_updateActionAvailableDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateActionAvailableDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updateActionAvailableDateHasBeenSet = true;
    }
    XmlNode updateActionStatusNode = resultNode.FirstChild("UpdateActionStatus");
    if(!updateActionStatusNode.IsNull())
    {
      m_updateActionStatus = UpdateActionStatusMapper::GetUpdateActionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateActionStatusNode.GetText()).c_str()).c_str());
      m_updateActionStatusHasBeenSet = true;
    }
    XmlNode nodesUpdatedNode = resultNode.FirstChild("NodesUpdated");
    if(!nodesUpdatedNode.IsNull())
    {
      m_nodesUpdated = Aws::Utils::Xml::DecodeEscapedXmlText(nodesUpdatedNode.GetText());
      m_nodesUpdatedHasBeenSet = true;
    }
    XmlNode updateActionStatusModifiedDateNode = resultNode.FirstChild("UpdateActionStatusModifiedDate");
    if(!updateActionStatusModifiedDateNode.IsNull())
    {
      m_updateActionStatusModifiedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateActionStatusModifiedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updateActionStatusModifiedDateHasBeenSet = true;
    }
    XmlNode slaMetNode = resultNode.FirstChild("SlaMet");
    if(!slaMetNode.IsNull())
    {
      m_slaMet = SlaMetMapper::GetSlaMetForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(slaMetNode.GetText()).c_str()).c_str());
      m_slaMetHasBeenSet = true;
    }
    XmlNode nodeGroupUpdateStatusNode = resultNode.FirstChild("NodeGroupUpdateStatus");
    if(!nodeGroupUpdateStatusNode.IsNull())
    {
      XmlNode nodeGroupUpdateStatusMember = nodeGroupUpdateStatusNode.FirstChild("NodeGroupUpdateStatus");
      while(!nodeGroupUpdateStatusMember.IsNull())
      {
        m_nodeGroupUpdateStatus.push_back(nodeGroupUpdateStatusMember);
        nodeGroupUpdateStatusMember = nodeGroupUpdateStatusMember.NextNode("NodeGroupUpdateStatus");
      }

      m_nodeGroupUpdateStatusHasBeenSet = true;
    }
    XmlNode cacheNodeUpdateStatusNode = resultNode.FirstChild("CacheNodeUpdateStatus");
    if(!cacheNodeUpdateStatusNode.IsNull())
    {
      XmlNode cacheNodeUpdateStatusMember = cacheNodeUpdateStatusNode.FirstChild("CacheNodeUpdateStatus");
      while(!cacheNodeUpdateStatusMember.IsNull())
      {
        m_cacheNodeUpdateStatus.push_back(cacheNodeUpdateStatusMember);
        cacheNodeUpdateStatusMember = cacheNodeUpdateStatusMember.NextNode("CacheNodeUpdateStatus");
      }

      m_cacheNodeUpdateStatusHasBeenSet = true;
    }
    XmlNode estimatedUpdateTimeNode = resultNode.FirstChild("EstimatedUpdateTime");
    if(!estimatedUpdateTimeNode.IsNull())
    {
      m_estimatedUpdateTime = Aws::Utils::Xml::DecodeEscapedXmlText(estimatedUpdateTimeNode.GetText());
      m_estimatedUpdateTimeHasBeenSet = true;
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

void UpdateAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  if(m_serviceUpdateReleaseDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateSeverity=" << ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity) << "&";
  }

  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateStatus=" << ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus) << "&";
  }

  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateType=" << ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType) << "&";
  }

  if(m_updateActionAvailableDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateActionAvailableDate=" << StringUtils::URLEncode(m_updateActionAvailableDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }

  if(m_nodesUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodesUpdated=" << StringUtils::URLEncode(m_nodesUpdated.c_str()) << "&";
  }

  if(m_updateActionStatusModifiedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateActionStatusModifiedDate=" << StringUtils::URLEncode(m_updateActionStatusModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_slaMetHasBeenSet)
  {
      oStream << location << index << locationValue << ".SlaMet=" << SlaMetMapper::GetNameForSlaMet(m_slaMet) << "&";
  }

  if(m_nodeGroupUpdateStatusHasBeenSet)
  {
      unsigned nodeGroupUpdateStatusIdx = 1;
      for(auto& item : m_nodeGroupUpdateStatus)
      {
        Aws::StringStream nodeGroupUpdateStatusSs;
        nodeGroupUpdateStatusSs << location << index << locationValue << ".NodeGroupUpdateStatus." << nodeGroupUpdateStatusIdx++;
        item.OutputToStream(oStream, nodeGroupUpdateStatusSs.str().c_str());
      }
  }

  if(m_cacheNodeUpdateStatusHasBeenSet)
  {
      unsigned cacheNodeUpdateStatusIdx = 1;
      for(auto& item : m_cacheNodeUpdateStatus)
      {
        Aws::StringStream cacheNodeUpdateStatusSs;
        cacheNodeUpdateStatusSs << location << index << locationValue << ".CacheNodeUpdateStatus." << cacheNodeUpdateStatusIdx++;
        item.OutputToStream(oStream, cacheNodeUpdateStatusSs.str().c_str());
      }
  }

  if(m_estimatedUpdateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedUpdateTime=" << StringUtils::URLEncode(m_estimatedUpdateTime.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

}

void UpdateAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }
  if(m_serviceUpdateReleaseDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << ".ServiceUpdateSeverity=" << ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity) << "&";
  }
  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << ".ServiceUpdateStatus=" << ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus) << "&";
  }
  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << ".ServiceUpdateType=" << ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType) << "&";
  }
  if(m_updateActionAvailableDateHasBeenSet)
  {
      oStream << location << ".UpdateActionAvailableDate=" << StringUtils::URLEncode(m_updateActionAvailableDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }
  if(m_nodesUpdatedHasBeenSet)
  {
      oStream << location << ".NodesUpdated=" << StringUtils::URLEncode(m_nodesUpdated.c_str()) << "&";
  }
  if(m_updateActionStatusModifiedDateHasBeenSet)
  {
      oStream << location << ".UpdateActionStatusModifiedDate=" << StringUtils::URLEncode(m_updateActionStatusModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_slaMetHasBeenSet)
  {
      oStream << location << ".SlaMet=" << SlaMetMapper::GetNameForSlaMet(m_slaMet) << "&";
  }
  if(m_nodeGroupUpdateStatusHasBeenSet)
  {
      unsigned nodeGroupUpdateStatusIdx = 1;
      for(auto& item : m_nodeGroupUpdateStatus)
      {
        Aws::StringStream nodeGroupUpdateStatusSs;
        nodeGroupUpdateStatusSs << location <<  ".NodeGroupUpdateStatus." << nodeGroupUpdateStatusIdx++;
        item.OutputToStream(oStream, nodeGroupUpdateStatusSs.str().c_str());
      }
  }
  if(m_cacheNodeUpdateStatusHasBeenSet)
  {
      unsigned cacheNodeUpdateStatusIdx = 1;
      for(auto& item : m_cacheNodeUpdateStatus)
      {
        Aws::StringStream cacheNodeUpdateStatusSs;
        cacheNodeUpdateStatusSs << location <<  ".CacheNodeUpdateStatus." << cacheNodeUpdateStatusIdx++;
        item.OutputToStream(oStream, cacheNodeUpdateStatusSs.str().c_str());
      }
  }
  if(m_estimatedUpdateTimeHasBeenSet)
  {
      oStream << location << ".EstimatedUpdateTime=" << StringUtils::URLEncode(m_estimatedUpdateTime.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
