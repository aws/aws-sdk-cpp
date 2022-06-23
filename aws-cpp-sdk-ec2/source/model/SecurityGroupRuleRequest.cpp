/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupRuleRequest.h>
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

SecurityGroupRuleRequest::SecurityGroupRuleRequest() : 
    m_ipProtocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_cidrIpv4HasBeenSet(false),
    m_cidrIpv6HasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_referencedGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SecurityGroupRuleRequest::SecurityGroupRuleRequest(const XmlNode& xmlNode) : 
    m_ipProtocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_cidrIpv4HasBeenSet(false),
    m_cidrIpv6HasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_referencedGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupRuleRequest& SecurityGroupRuleRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipProtocolNode = resultNode.FirstChild("IpProtocol");
    if(!ipProtocolNode.IsNull())
    {
      m_ipProtocol = Aws::Utils::Xml::DecodeEscapedXmlText(ipProtocolNode.GetText());
      m_ipProtocolHasBeenSet = true;
    }
    XmlNode fromPortNode = resultNode.FirstChild("FromPort");
    if(!fromPortNode.IsNull())
    {
      m_fromPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fromPortNode.GetText()).c_str()).c_str());
      m_fromPortHasBeenSet = true;
    }
    XmlNode toPortNode = resultNode.FirstChild("ToPort");
    if(!toPortNode.IsNull())
    {
      m_toPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(toPortNode.GetText()).c_str()).c_str());
      m_toPortHasBeenSet = true;
    }
    XmlNode cidrIpv4Node = resultNode.FirstChild("CidrIpv4");
    if(!cidrIpv4Node.IsNull())
    {
      m_cidrIpv4 = Aws::Utils::Xml::DecodeEscapedXmlText(cidrIpv4Node.GetText());
      m_cidrIpv4HasBeenSet = true;
    }
    XmlNode cidrIpv6Node = resultNode.FirstChild("CidrIpv6");
    if(!cidrIpv6Node.IsNull())
    {
      m_cidrIpv6 = Aws::Utils::Xml::DecodeEscapedXmlText(cidrIpv6Node.GetText());
      m_cidrIpv6HasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("PrefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode referencedGroupIdNode = resultNode.FirstChild("ReferencedGroupId");
    if(!referencedGroupIdNode.IsNull())
    {
      m_referencedGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(referencedGroupIdNode.GetText());
      m_referencedGroupIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void SecurityGroupRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }

  if(m_fromPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromPort=" << m_fromPort << "&";
  }

  if(m_toPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".ToPort=" << m_toPort << "&";
  }

  if(m_cidrIpv4HasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIpv4=" << StringUtils::URLEncode(m_cidrIpv4.c_str()) << "&";
  }

  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_referencedGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReferencedGroupId=" << StringUtils::URLEncode(m_referencedGroupId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void SecurityGroupRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }
  if(m_fromPortHasBeenSet)
  {
      oStream << location << ".FromPort=" << m_fromPort << "&";
  }
  if(m_toPortHasBeenSet)
  {
      oStream << location << ".ToPort=" << m_toPort << "&";
  }
  if(m_cidrIpv4HasBeenSet)
  {
      oStream << location << ".CidrIpv4=" << StringUtils::URLEncode(m_cidrIpv4.c_str()) << "&";
  }
  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_referencedGroupIdHasBeenSet)
  {
      oStream << location << ".ReferencedGroupId=" << StringUtils::URLEncode(m_referencedGroupId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
