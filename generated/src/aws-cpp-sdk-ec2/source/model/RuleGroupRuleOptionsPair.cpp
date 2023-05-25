/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RuleGroupRuleOptionsPair.h>
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

RuleGroupRuleOptionsPair::RuleGroupRuleOptionsPair() : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false)
{
}

RuleGroupRuleOptionsPair::RuleGroupRuleOptionsPair(const XmlNode& xmlNode) : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

RuleGroupRuleOptionsPair& RuleGroupRuleOptionsPair::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleGroupArnNode = resultNode.FirstChild("ruleGroupArn");
    if(!ruleGroupArnNode.IsNull())
    {
      m_ruleGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(ruleGroupArnNode.GetText());
      m_ruleGroupArnHasBeenSet = true;
    }
    XmlNode ruleOptionsNode = resultNode.FirstChild("ruleOptionSet");
    if(!ruleOptionsNode.IsNull())
    {
      XmlNode ruleOptionsMember = ruleOptionsNode.FirstChild("item");
      while(!ruleOptionsMember.IsNull())
      {
        m_ruleOptions.push_back(ruleOptionsMember);
        ruleOptionsMember = ruleOptionsMember.NextNode("item");
      }

      m_ruleOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void RuleGroupRuleOptionsPair::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }

  if(m_ruleOptionsHasBeenSet)
  {
      unsigned ruleOptionsIdx = 1;
      for(auto& item : m_ruleOptions)
      {
        Aws::StringStream ruleOptionsSs;
        ruleOptionsSs << location << index << locationValue << ".RuleOptionSet." << ruleOptionsIdx++;
        item.OutputToStream(oStream, ruleOptionsSs.str().c_str());
      }
  }

}

void RuleGroupRuleOptionsPair::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }
  if(m_ruleOptionsHasBeenSet)
  {
      unsigned ruleOptionsIdx = 1;
      for(auto& item : m_ruleOptions)
      {
        Aws::StringStream ruleOptionsSs;
        ruleOptionsSs << location <<  ".RuleOptionSet." << ruleOptionsIdx++;
        item.OutputToStream(oStream, ruleOptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
