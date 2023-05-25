/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RuleGroupTypePair.h>
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

RuleGroupTypePair::RuleGroupTypePair() : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupTypeHasBeenSet(false)
{
}

RuleGroupTypePair::RuleGroupTypePair(const XmlNode& xmlNode) : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupTypeHasBeenSet(false)
{
  *this = xmlNode;
}

RuleGroupTypePair& RuleGroupTypePair::operator =(const XmlNode& xmlNode)
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
    XmlNode ruleGroupTypeNode = resultNode.FirstChild("ruleGroupType");
    if(!ruleGroupTypeNode.IsNull())
    {
      m_ruleGroupType = Aws::Utils::Xml::DecodeEscapedXmlText(ruleGroupTypeNode.GetText());
      m_ruleGroupTypeHasBeenSet = true;
    }
  }

  return *this;
}

void RuleGroupTypePair::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }

  if(m_ruleGroupTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleGroupType=" << StringUtils::URLEncode(m_ruleGroupType.c_str()) << "&";
  }

}

void RuleGroupTypePair::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }
  if(m_ruleGroupTypeHasBeenSet)
  {
      oStream << location << ".RuleGroupType=" << StringUtils::URLEncode(m_ruleGroupType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
