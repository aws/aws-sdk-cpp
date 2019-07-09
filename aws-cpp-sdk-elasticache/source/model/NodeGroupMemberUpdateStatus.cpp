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

#include <aws/elasticache/model/NodeGroupMemberUpdateStatus.h>
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

NodeGroupMemberUpdateStatus::NodeGroupMemberUpdateStatus() : 
    m_cacheClusterIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_nodeUpdateStatus(NodeUpdateStatus::NOT_SET),
    m_nodeUpdateStatusHasBeenSet(false),
    m_nodeDeletionDateHasBeenSet(false),
    m_nodeUpdateStartDateHasBeenSet(false),
    m_nodeUpdateEndDateHasBeenSet(false),
    m_nodeUpdateInitiatedBy(NodeUpdateInitiatedBy::NOT_SET),
    m_nodeUpdateInitiatedByHasBeenSet(false),
    m_nodeUpdateInitiatedDateHasBeenSet(false),
    m_nodeUpdateStatusModifiedDateHasBeenSet(false)
{
}

NodeGroupMemberUpdateStatus::NodeGroupMemberUpdateStatus(const XmlNode& xmlNode) : 
    m_cacheClusterIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_nodeUpdateStatus(NodeUpdateStatus::NOT_SET),
    m_nodeUpdateStatusHasBeenSet(false),
    m_nodeDeletionDateHasBeenSet(false),
    m_nodeUpdateStartDateHasBeenSet(false),
    m_nodeUpdateEndDateHasBeenSet(false),
    m_nodeUpdateInitiatedBy(NodeUpdateInitiatedBy::NOT_SET),
    m_nodeUpdateInitiatedByHasBeenSet(false),
    m_nodeUpdateInitiatedDateHasBeenSet(false),
    m_nodeUpdateStatusModifiedDateHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroupMemberUpdateStatus& NodeGroupMemberUpdateStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = cacheClusterIdNode.GetText();
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = cacheNodeIdNode.GetText();
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode nodeUpdateStatusNode = resultNode.FirstChild("NodeUpdateStatus");
    if(!nodeUpdateStatusNode.IsNull())
    {
      m_nodeUpdateStatus = NodeUpdateStatusMapper::GetNodeUpdateStatusForName(StringUtils::Trim(nodeUpdateStatusNode.GetText().c_str()).c_str());
      m_nodeUpdateStatusHasBeenSet = true;
    }
    XmlNode nodeDeletionDateNode = resultNode.FirstChild("NodeDeletionDate");
    if(!nodeDeletionDateNode.IsNull())
    {
      m_nodeDeletionDate = DateTime(StringUtils::Trim(nodeDeletionDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nodeDeletionDateHasBeenSet = true;
    }
    XmlNode nodeUpdateStartDateNode = resultNode.FirstChild("NodeUpdateStartDate");
    if(!nodeUpdateStartDateNode.IsNull())
    {
      m_nodeUpdateStartDate = DateTime(StringUtils::Trim(nodeUpdateStartDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nodeUpdateStartDateHasBeenSet = true;
    }
    XmlNode nodeUpdateEndDateNode = resultNode.FirstChild("NodeUpdateEndDate");
    if(!nodeUpdateEndDateNode.IsNull())
    {
      m_nodeUpdateEndDate = DateTime(StringUtils::Trim(nodeUpdateEndDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nodeUpdateEndDateHasBeenSet = true;
    }
    XmlNode nodeUpdateInitiatedByNode = resultNode.FirstChild("NodeUpdateInitiatedBy");
    if(!nodeUpdateInitiatedByNode.IsNull())
    {
      m_nodeUpdateInitiatedBy = NodeUpdateInitiatedByMapper::GetNodeUpdateInitiatedByForName(StringUtils::Trim(nodeUpdateInitiatedByNode.GetText().c_str()).c_str());
      m_nodeUpdateInitiatedByHasBeenSet = true;
    }
    XmlNode nodeUpdateInitiatedDateNode = resultNode.FirstChild("NodeUpdateInitiatedDate");
    if(!nodeUpdateInitiatedDateNode.IsNull())
    {
      m_nodeUpdateInitiatedDate = DateTime(StringUtils::Trim(nodeUpdateInitiatedDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nodeUpdateInitiatedDateHasBeenSet = true;
    }
    XmlNode nodeUpdateStatusModifiedDateNode = resultNode.FirstChild("NodeUpdateStatusModifiedDate");
    if(!nodeUpdateStatusModifiedDateNode.IsNull())
    {
      m_nodeUpdateStatusModifiedDate = DateTime(StringUtils::Trim(nodeUpdateStatusModifiedDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_nodeUpdateStatusModifiedDateHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroupMemberUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }

  if(m_nodeUpdateStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateStatus=" << NodeUpdateStatusMapper::GetNameForNodeUpdateStatus(m_nodeUpdateStatus) << "&";
  }

  if(m_nodeDeletionDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeDeletionDate=" << StringUtils::URLEncode(m_nodeDeletionDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateStartDate=" << StringUtils::URLEncode(m_nodeUpdateStartDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateEndDate=" << StringUtils::URLEncode(m_nodeUpdateEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateInitiatedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateInitiatedBy=" << NodeUpdateInitiatedByMapper::GetNameForNodeUpdateInitiatedBy(m_nodeUpdateInitiatedBy) << "&";
  }

  if(m_nodeUpdateInitiatedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateInitiatedDate=" << StringUtils::URLEncode(m_nodeUpdateInitiatedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateStatusModifiedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateStatusModifiedDate=" << StringUtils::URLEncode(m_nodeUpdateStatusModifiedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void NodeGroupMemberUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_nodeUpdateStatusHasBeenSet)
  {
      oStream << location << ".NodeUpdateStatus=" << NodeUpdateStatusMapper::GetNameForNodeUpdateStatus(m_nodeUpdateStatus) << "&";
  }
  if(m_nodeDeletionDateHasBeenSet)
  {
      oStream << location << ".NodeDeletionDate=" << StringUtils::URLEncode(m_nodeDeletionDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateStartDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateStartDate=" << StringUtils::URLEncode(m_nodeUpdateStartDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateEndDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateEndDate=" << StringUtils::URLEncode(m_nodeUpdateEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateInitiatedByHasBeenSet)
  {
      oStream << location << ".NodeUpdateInitiatedBy=" << NodeUpdateInitiatedByMapper::GetNameForNodeUpdateInitiatedBy(m_nodeUpdateInitiatedBy) << "&";
  }
  if(m_nodeUpdateInitiatedDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateInitiatedDate=" << StringUtils::URLEncode(m_nodeUpdateInitiatedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateStatusModifiedDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateStatusModifiedDate=" << StringUtils::URLEncode(m_nodeUpdateStatusModifiedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
