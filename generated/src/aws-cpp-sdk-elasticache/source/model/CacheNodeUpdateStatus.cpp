/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheNodeUpdateStatus.h>
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

CacheNodeUpdateStatus::CacheNodeUpdateStatus() : 
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

CacheNodeUpdateStatus::CacheNodeUpdateStatus(const XmlNode& xmlNode) : 
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

CacheNodeUpdateStatus& CacheNodeUpdateStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeIdNode.GetText());
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode nodeUpdateStatusNode = resultNode.FirstChild("NodeUpdateStatus");
    if(!nodeUpdateStatusNode.IsNull())
    {
      m_nodeUpdateStatus = NodeUpdateStatusMapper::GetNodeUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateStatusNode.GetText()).c_str()).c_str());
      m_nodeUpdateStatusHasBeenSet = true;
    }
    XmlNode nodeDeletionDateNode = resultNode.FirstChild("NodeDeletionDate");
    if(!nodeDeletionDateNode.IsNull())
    {
      m_nodeDeletionDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeDeletionDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_nodeDeletionDateHasBeenSet = true;
    }
    XmlNode nodeUpdateStartDateNode = resultNode.FirstChild("NodeUpdateStartDate");
    if(!nodeUpdateStartDateNode.IsNull())
    {
      m_nodeUpdateStartDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateStartDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_nodeUpdateStartDateHasBeenSet = true;
    }
    XmlNode nodeUpdateEndDateNode = resultNode.FirstChild("NodeUpdateEndDate");
    if(!nodeUpdateEndDateNode.IsNull())
    {
      m_nodeUpdateEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_nodeUpdateEndDateHasBeenSet = true;
    }
    XmlNode nodeUpdateInitiatedByNode = resultNode.FirstChild("NodeUpdateInitiatedBy");
    if(!nodeUpdateInitiatedByNode.IsNull())
    {
      m_nodeUpdateInitiatedBy = NodeUpdateInitiatedByMapper::GetNodeUpdateInitiatedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateInitiatedByNode.GetText()).c_str()).c_str());
      m_nodeUpdateInitiatedByHasBeenSet = true;
    }
    XmlNode nodeUpdateInitiatedDateNode = resultNode.FirstChild("NodeUpdateInitiatedDate");
    if(!nodeUpdateInitiatedDateNode.IsNull())
    {
      m_nodeUpdateInitiatedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateInitiatedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_nodeUpdateInitiatedDateHasBeenSet = true;
    }
    XmlNode nodeUpdateStatusModifiedDateNode = resultNode.FirstChild("NodeUpdateStatusModifiedDate");
    if(!nodeUpdateStatusModifiedDateNode.IsNull())
    {
      m_nodeUpdateStatusModifiedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nodeUpdateStatusModifiedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_nodeUpdateStatusModifiedDateHasBeenSet = true;
    }
  }

  return *this;
}

void CacheNodeUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
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
      oStream << location << index << locationValue << ".NodeDeletionDate=" << StringUtils::URLEncode(m_nodeDeletionDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateStartDate=" << StringUtils::URLEncode(m_nodeUpdateStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateEndDate=" << StringUtils::URLEncode(m_nodeUpdateEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateInitiatedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateInitiatedBy=" << NodeUpdateInitiatedByMapper::GetNameForNodeUpdateInitiatedBy(m_nodeUpdateInitiatedBy) << "&";
  }

  if(m_nodeUpdateInitiatedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateInitiatedDate=" << StringUtils::URLEncode(m_nodeUpdateInitiatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nodeUpdateStatusModifiedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeUpdateStatusModifiedDate=" << StringUtils::URLEncode(m_nodeUpdateStatusModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void CacheNodeUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
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
      oStream << location << ".NodeDeletionDate=" << StringUtils::URLEncode(m_nodeDeletionDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateStartDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateStartDate=" << StringUtils::URLEncode(m_nodeUpdateStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateEndDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateEndDate=" << StringUtils::URLEncode(m_nodeUpdateEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateInitiatedByHasBeenSet)
  {
      oStream << location << ".NodeUpdateInitiatedBy=" << NodeUpdateInitiatedByMapper::GetNameForNodeUpdateInitiatedBy(m_nodeUpdateInitiatedBy) << "&";
  }
  if(m_nodeUpdateInitiatedDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateInitiatedDate=" << StringUtils::URLEncode(m_nodeUpdateInitiatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nodeUpdateStatusModifiedDateHasBeenSet)
  {
      oStream << location << ".NodeUpdateStatusModifiedDate=" << StringUtils::URLEncode(m_nodeUpdateStatusModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
