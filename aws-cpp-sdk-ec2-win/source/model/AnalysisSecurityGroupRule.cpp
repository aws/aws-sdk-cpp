/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisSecurityGroupRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

AnalysisSecurityGroupRule::AnalysisSecurityGroupRule() : 
    m_cidrHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

AnalysisSecurityGroupRule::AnalysisSecurityGroupRule(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisSecurityGroupRule& AnalysisSecurityGroupRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode directionNode = resultNode.FirstChild("direction");
    if(!directionNode.IsNull())
    {
      m_direction = Aws::Utils::Xml::DecodeEscapedXmlText(directionNode.GetText());
      m_directionHasBeenSet = true;
    }
    XmlNode securityGroupIdNode = resultNode.FirstChild("securityGroupId");
    if(!securityGroupIdNode.IsNull())
    {
      m_securityGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupIdNode.GetText());
      m_securityGroupIdHasBeenSet = true;
    }
    XmlNode portRangeNode = resultNode.FirstChild("portRange");
    if(!portRangeNode.IsNull())
    {
      m_portRange = portRangeNode;
      m_portRangeHasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisSecurityGroupRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_directionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Direction=" << StringUtils::URLEncode(m_direction.c_str()) << "&";
  }

  if(m_securityGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }

  if(m_portRangeHasBeenSet)
  {
      Aws::StringStream portRangeLocationAndMemberSs;
      portRangeLocationAndMemberSs << location << index << locationValue << ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMemberSs.str().c_str());
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

}

void AnalysisSecurityGroupRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_directionHasBeenSet)
  {
      oStream << location << ".Direction=" << StringUtils::URLEncode(m_direction.c_str()) << "&";
  }
  if(m_securityGroupIdHasBeenSet)
  {
      oStream << location << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }
  if(m_portRangeHasBeenSet)
  {
      Aws::String portRangeLocationAndMember(location);
      portRangeLocationAndMember += ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMember.c_str());
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
