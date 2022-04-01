/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ProcessedUpdateAction.h>
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

ProcessedUpdateAction::ProcessedUpdateAction() : 
    m_replicationGroupIdHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false)
{
}

ProcessedUpdateAction::ProcessedUpdateAction(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_cacheClusterIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false)
{
  *this = xmlNode;
}

ProcessedUpdateAction& ProcessedUpdateAction::operator =(const XmlNode& xmlNode)
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
    XmlNode updateActionStatusNode = resultNode.FirstChild("UpdateActionStatus");
    if(!updateActionStatusNode.IsNull())
    {
      m_updateActionStatus = UpdateActionStatusMapper::GetUpdateActionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateActionStatusNode.GetText()).c_str()).c_str());
      m_updateActionStatusHasBeenSet = true;
    }
  }

  return *this;
}

void ProcessedUpdateAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }

}

void ProcessedUpdateAction::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
