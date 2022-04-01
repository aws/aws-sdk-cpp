/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisAclRule.h>
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

AnalysisAclRule::AnalysisAclRule() : 
    m_cidrHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
}

AnalysisAclRule::AnalysisAclRule(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisAclRule& AnalysisAclRule::operator =(const XmlNode& xmlNode)
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
    XmlNode egressNode = resultNode.FirstChild("egress");
    if(!egressNode.IsNull())
    {
      m_egress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(egressNode.GetText()).c_str()).c_str());
      m_egressHasBeenSet = true;
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
      m_ruleAction = Aws::Utils::Xml::DecodeEscapedXmlText(ruleActionNode.GetText());
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

void AnalysisAclRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_egressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Egress=" << std::boolalpha << m_egress << "&";
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
      oStream << location << index << locationValue << ".RuleAction=" << StringUtils::URLEncode(m_ruleAction.c_str()) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

}

void AnalysisAclRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_egressHasBeenSet)
  {
      oStream << location << ".Egress=" << std::boolalpha << m_egress << "&";
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
      oStream << location << ".RuleAction=" << StringUtils::URLEncode(m_ruleAction.c_str()) << "&";
  }
  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
