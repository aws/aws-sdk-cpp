/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/GlobalReplicationGroupInfo.h>
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

GlobalReplicationGroupInfo::GlobalReplicationGroupInfo() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_globalReplicationGroupMemberRoleHasBeenSet(false)
{
}

GlobalReplicationGroupInfo::GlobalReplicationGroupInfo(const XmlNode& xmlNode) : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_globalReplicationGroupMemberRoleHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalReplicationGroupInfo& GlobalReplicationGroupInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode globalReplicationGroupIdNode = resultNode.FirstChild("GlobalReplicationGroupId");
    if(!globalReplicationGroupIdNode.IsNull())
    {
      m_globalReplicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(globalReplicationGroupIdNode.GetText());
      m_globalReplicationGroupIdHasBeenSet = true;
    }
    XmlNode globalReplicationGroupMemberRoleNode = resultNode.FirstChild("GlobalReplicationGroupMemberRole");
    if(!globalReplicationGroupMemberRoleNode.IsNull())
    {
      m_globalReplicationGroupMemberRole = Aws::Utils::Xml::DecodeEscapedXmlText(globalReplicationGroupMemberRoleNode.GetText());
      m_globalReplicationGroupMemberRoleHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalReplicationGroupInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_globalReplicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_globalReplicationGroupMemberRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalReplicationGroupMemberRole=" << StringUtils::URLEncode(m_globalReplicationGroupMemberRole.c_str()) << "&";
  }

}

void GlobalReplicationGroupInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_globalReplicationGroupIdHasBeenSet)
  {
      oStream << location << ".GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }
  if(m_globalReplicationGroupMemberRoleHasBeenSet)
  {
      oStream << location << ".GlobalReplicationGroupMemberRole=" << StringUtils::URLEncode(m_globalReplicationGroupMemberRole.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
