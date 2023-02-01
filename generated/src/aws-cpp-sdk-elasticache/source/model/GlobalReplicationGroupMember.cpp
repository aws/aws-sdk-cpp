/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/GlobalReplicationGroupMember.h>
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

GlobalReplicationGroupMember::GlobalReplicationGroupMember() : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupRegionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

GlobalReplicationGroupMember::GlobalReplicationGroupMember(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupRegionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_automaticFailover(AutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalReplicationGroupMember& GlobalReplicationGroupMember::operator =(const XmlNode& xmlNode)
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
    XmlNode replicationGroupRegionNode = resultNode.FirstChild("ReplicationGroupRegion");
    if(!replicationGroupRegionNode.IsNull())
    {
      m_replicationGroupRegion = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupRegionNode.GetText());
      m_replicationGroupRegionHasBeenSet = true;
    }
    XmlNode roleNode = resultNode.FirstChild("Role");
    if(!roleNode.IsNull())
    {
      m_role = Aws::Utils::Xml::DecodeEscapedXmlText(roleNode.GetText());
      m_roleHasBeenSet = true;
    }
    XmlNode automaticFailoverNode = resultNode.FirstChild("AutomaticFailover");
    if(!automaticFailoverNode.IsNull())
    {
      m_automaticFailover = AutomaticFailoverStatusMapper::GetAutomaticFailoverStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automaticFailoverNode.GetText()).c_str()).c_str());
      m_automaticFailoverHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalReplicationGroupMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_replicationGroupRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupRegion=" << StringUtils::URLEncode(m_replicationGroupRegion.c_str()) << "&";
  }

  if(m_roleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Role=" << StringUtils::URLEncode(m_role.c_str()) << "&";
  }

  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void GlobalReplicationGroupMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_replicationGroupRegionHasBeenSet)
  {
      oStream << location << ".ReplicationGroupRegion=" << StringUtils::URLEncode(m_replicationGroupRegion.c_str()) << "&";
  }
  if(m_roleHasBeenSet)
  {
      oStream << location << ".Role=" << StringUtils::URLEncode(m_role.c_str()) << "&";
  }
  if(m_automaticFailoverHasBeenSet)
  {
      oStream << location << ".AutomaticFailover=" << AutomaticFailoverStatusMapper::GetNameForAutomaticFailoverStatus(m_automaticFailover) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
