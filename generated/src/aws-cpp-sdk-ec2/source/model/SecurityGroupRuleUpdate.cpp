/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupRuleUpdate.h>
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

SecurityGroupRuleUpdate::SecurityGroupRuleUpdate() : 
    m_securityGroupRuleIdHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false)
{
}

SecurityGroupRuleUpdate::SecurityGroupRuleUpdate(const XmlNode& xmlNode) : 
    m_securityGroupRuleIdHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupRuleUpdate& SecurityGroupRuleUpdate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupRuleIdNode = resultNode.FirstChild("SecurityGroupRuleId");
    if(!securityGroupRuleIdNode.IsNull())
    {
      m_securityGroupRuleId = Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupRuleIdNode.GetText());
      m_securityGroupRuleIdHasBeenSet = true;
    }
    XmlNode securityGroupRuleNode = resultNode.FirstChild("SecurityGroupRule");
    if(!securityGroupRuleNode.IsNull())
    {
      m_securityGroupRule = securityGroupRuleNode;
      m_securityGroupRuleHasBeenSet = true;
    }
  }

  return *this;
}

void SecurityGroupRuleUpdate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }

  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::StringStream securityGroupRuleLocationAndMemberSs;
      securityGroupRuleLocationAndMemberSs << location << index << locationValue << ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMemberSs.str().c_str());
  }

}

void SecurityGroupRuleUpdate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }
  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::String securityGroupRuleLocationAndMember(location);
      securityGroupRuleLocationAndMember += ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
