/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupRuleDescription.h>
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

SecurityGroupRuleDescription::SecurityGroupRuleDescription() : 
    m_securityGroupRuleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SecurityGroupRuleDescription::SecurityGroupRuleDescription(const XmlNode& xmlNode) : 
    m_securityGroupRuleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupRuleDescription& SecurityGroupRuleDescription::operator =(const XmlNode& xmlNode)
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
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void SecurityGroupRuleDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void SecurityGroupRuleDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
