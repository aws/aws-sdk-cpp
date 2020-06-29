/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkAclEntry.h>
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

NetworkAclEntry::NetworkAclEntry() : 
    m_cidrBlockHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
}

NetworkAclEntry::NetworkAclEntry(const XmlNode& xmlNode) : 
    m_cidrBlockHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkAclEntry& NetworkAclEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(cidrBlockNode.GetText());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode egressNode = resultNode.FirstChild("egress");
    if(!egressNode.IsNull())
    {
      m_egress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(egressNode.GetText()).c_str()).c_str());
      m_egressHasBeenSet = true;
    }
    XmlNode icmpTypeCodeNode = resultNode.FirstChild("icmpTypeCode");
    if(!icmpTypeCodeNode.IsNull())
    {
      m_icmpTypeCode = icmpTypeCodeNode;
      m_icmpTypeCodeHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockNode = resultNode.FirstChild("ipv6CidrBlock");
    if(!ipv6CidrBlockNode.IsNull())
    {
      m_ipv6CidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6CidrBlockNode.GetText());
      m_ipv6CidrBlockHasBeenSet = true;
    }
    XmlNode portRangeNode = resultNode.FirstChild("portRange");
    if(!portRangeNode.IsNull())
    {
      m_portRange = portRangeNode;
      m_portRangeHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode ruleActionNode = resultNode.FirstChild("ruleAction");
    if(!ruleActionNode.IsNull())
    {
      m_ruleAction = RuleActionMapper::GetRuleActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleActionNode.GetText()).c_str()).c_str());
      m_ruleActionHasBeenSet = true;
    }
    XmlNode ruleNumberNode = resultNode.FirstChild("ruleNumber");
    if(!ruleNumberNode.IsNull())
    {
      m_ruleNumber = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleNumberNode.GetText()).c_str()).c_str());
      m_ruleNumberHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkAclEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_egressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Egress=" << std::boolalpha << m_egress << "&";
  }

  if(m_icmpTypeCodeHasBeenSet)
  {
      Aws::StringStream icmpTypeCodeLocationAndMemberSs;
      icmpTypeCodeLocationAndMemberSs << location << index << locationValue << ".IcmpTypeCode";
      m_icmpTypeCode.OutputToStream(oStream, icmpTypeCodeLocationAndMemberSs.str().c_str());
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_portRangeHasBeenSet)
  {
      Aws::StringStream portRangeLocationAndMemberSs;
      portRangeLocationAndMemberSs << location << index << locationValue << ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMemberSs.str().c_str());
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleAction=" << RuleActionMapper::GetNameForRuleAction(m_ruleAction) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

}

void NetworkAclEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_egressHasBeenSet)
  {
      oStream << location << ".Egress=" << std::boolalpha << m_egress << "&";
  }
  if(m_icmpTypeCodeHasBeenSet)
  {
      Aws::String icmpTypeCodeLocationAndMember(location);
      icmpTypeCodeLocationAndMember += ".IcmpTypeCode";
      m_icmpTypeCode.OutputToStream(oStream, icmpTypeCodeLocationAndMember.c_str());
  }
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }
  if(m_portRangeHasBeenSet)
  {
      Aws::String portRangeLocationAndMember(location);
      portRangeLocationAndMember += ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMember.c_str());
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_ruleActionHasBeenSet)
  {
      oStream << location << ".RuleAction=" << RuleActionMapper::GetNameForRuleAction(m_ruleAction) << "&";
  }
  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
