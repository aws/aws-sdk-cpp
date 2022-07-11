/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPolicyTableEntry.h>
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

TransitGatewayPolicyTableEntry::TransitGatewayPolicyTableEntry() : 
    m_policyRuleNumberHasBeenSet(false),
    m_policyRuleHasBeenSet(false),
    m_targetRouteTableIdHasBeenSet(false)
{
}

TransitGatewayPolicyTableEntry::TransitGatewayPolicyTableEntry(const XmlNode& xmlNode) : 
    m_policyRuleNumberHasBeenSet(false),
    m_policyRuleHasBeenSet(false),
    m_targetRouteTableIdHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPolicyTableEntry& TransitGatewayPolicyTableEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyRuleNumberNode = resultNode.FirstChild("policyRuleNumber");
    if(!policyRuleNumberNode.IsNull())
    {
      m_policyRuleNumber = Aws::Utils::Xml::DecodeEscapedXmlText(policyRuleNumberNode.GetText());
      m_policyRuleNumberHasBeenSet = true;
    }
    XmlNode policyRuleNode = resultNode.FirstChild("policyRule");
    if(!policyRuleNode.IsNull())
    {
      m_policyRule = policyRuleNode;
      m_policyRuleHasBeenSet = true;
    }
    XmlNode targetRouteTableIdNode = resultNode.FirstChild("targetRouteTableId");
    if(!targetRouteTableIdNode.IsNull())
    {
      m_targetRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(targetRouteTableIdNode.GetText());
      m_targetRouteTableIdHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPolicyTableEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyRuleNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyRuleNumber=" << StringUtils::URLEncode(m_policyRuleNumber.c_str()) << "&";
  }

  if(m_policyRuleHasBeenSet)
  {
      Aws::StringStream policyRuleLocationAndMemberSs;
      policyRuleLocationAndMemberSs << location << index << locationValue << ".PolicyRule";
      m_policyRule.OutputToStream(oStream, policyRuleLocationAndMemberSs.str().c_str());
  }

  if(m_targetRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetRouteTableId=" << StringUtils::URLEncode(m_targetRouteTableId.c_str()) << "&";
  }

}

void TransitGatewayPolicyTableEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyRuleNumberHasBeenSet)
  {
      oStream << location << ".PolicyRuleNumber=" << StringUtils::URLEncode(m_policyRuleNumber.c_str()) << "&";
  }
  if(m_policyRuleHasBeenSet)
  {
      Aws::String policyRuleLocationAndMember(location);
      policyRuleLocationAndMember += ".PolicyRule";
      m_policyRule.OutputToStream(oStream, policyRuleLocationAndMember.c_str());
  }
  if(m_targetRouteTableIdHasBeenSet)
  {
      oStream << location << ".TargetRouteTableId=" << StringUtils::URLEncode(m_targetRouteTableId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
