/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/SecurityGroupMembership.h>
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

SecurityGroupMembership::SecurityGroupMembership() : 
    m_securityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

SecurityGroupMembership::SecurityGroupMembership(const XmlNode& xmlNode) : 
    m_securityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupMembership& SecurityGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupIdNode = resultNode.FirstChild("SecurityGroupId");
    if(!securityGroupIdNode.IsNull())
    {
      m_securityGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupIdNode.GetText());
      m_securityGroupIdHasBeenSet = true;
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

void SecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_securityGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void SecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_securityGroupIdHasBeenSet)
  {
      oStream << location << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
