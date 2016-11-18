/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_portRangeHasBeenSet(false)
{
}

NetworkAclEntry::NetworkAclEntry(const XmlNode& xmlNode) : 
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_portRangeHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkAclEntry& NetworkAclEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleNumberNode = resultNode.FirstChild("ruleNumber");
    if(!ruleNumberNode.IsNull())
    {
      m_ruleNumber = StringUtils::ConvertToInt32(StringUtils::Trim(ruleNumberNode.GetText().c_str()).c_str());
      m_ruleNumberHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = StringUtils::Trim(protocolNode.GetText().c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode ruleActionNode = resultNode.FirstChild("ruleAction");
    if(!ruleActionNode.IsNull())
    {
      m_ruleAction = RuleActionMapper::GetRuleActionForName(StringUtils::Trim(ruleActionNode.GetText().c_str()).c_str());
      m_ruleActionHasBeenSet = true;
    }
    XmlNode egressNode = resultNode.FirstChild("egress");
    if(!egressNode.IsNull())
    {
      m_egress = StringUtils::ConvertToBool(StringUtils::Trim(egressNode.GetText().c_str()).c_str());
      m_egressHasBeenSet = true;
    }
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = StringUtils::Trim(cidrBlockNode.GetText().c_str());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode icmpTypeCodeNode = resultNode.FirstChild("icmpTypeCode");
    if(!icmpTypeCodeNode.IsNull())
    {
      m_icmpTypeCode = icmpTypeCodeNode;
      m_icmpTypeCodeHasBeenSet = true;
    }
    XmlNode portRangeNode = resultNode.FirstChild("portRange");
    if(!portRangeNode.IsNull())
    {
      m_portRange = portRangeNode;
      m_portRangeHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkAclEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleAction=" << RuleActionMapper::GetNameForRuleAction(m_ruleAction) << "&";
  }

  if(m_egressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Egress=" << m_egress << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_icmpTypeCodeHasBeenSet)
  {
      Aws::StringStream icmpTypeCodeLocationAndMemberSs;
      icmpTypeCodeLocationAndMemberSs << location << index << locationValue << ".IcmpTypeCode";
      m_icmpTypeCode.OutputToStream(oStream, icmpTypeCodeLocationAndMemberSs.str().c_str());
  }

  if(m_portRangeHasBeenSet)
  {
      Aws::StringStream portRangeLocationAndMemberSs;
      portRangeLocationAndMemberSs << location << index << locationValue << ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMemberSs.str().c_str());
  }

}

void NetworkAclEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_ruleActionHasBeenSet)
  {
      oStream << location << ".RuleAction=" << RuleActionMapper::GetNameForRuleAction(m_ruleAction) << "&";
  }
  if(m_egressHasBeenSet)
  {
      oStream << location << ".Egress=" << m_egress << "&";
  }
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_icmpTypeCodeHasBeenSet)
  {
      Aws::String icmpTypeCodeLocationAndMember(location);
      icmpTypeCodeLocationAndMember += ".IcmpTypeCode";
      m_icmpTypeCode.OutputToStream(oStream, icmpTypeCodeLocationAndMember.c_str());
  }
  if(m_portRangeHasBeenSet)
  {
      Aws::String portRangeLocationAndMember(location);
      portRangeLocationAndMember += ".PortRange";
      m_portRange.OutputToStream(oStream, portRangeLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
