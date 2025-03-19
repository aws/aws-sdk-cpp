/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TemplateConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

TemplateConfiguration::TemplateConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TemplateConfiguration& TemplateConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deletionPolicyNode = resultNode.FirstChild("DeletionPolicy");
    if(!deletionPolicyNode.IsNull())
    {
      m_deletionPolicy = GeneratedTemplateDeletionPolicyMapper::GetGeneratedTemplateDeletionPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionPolicyNode.GetText()).c_str()));
      m_deletionPolicyHasBeenSet = true;
    }
    XmlNode updateReplacePolicyNode = resultNode.FirstChild("UpdateReplacePolicy");
    if(!updateReplacePolicyNode.IsNull())
    {
      m_updateReplacePolicy = GeneratedTemplateUpdateReplacePolicyMapper::GetGeneratedTemplateUpdateReplacePolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateReplacePolicyNode.GetText()).c_str()));
      m_updateReplacePolicyHasBeenSet = true;
    }
  }

  return *this;
}

void TemplateConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deletionPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionPolicy=" << StringUtils::URLEncode(GeneratedTemplateDeletionPolicyMapper::GetNameForGeneratedTemplateDeletionPolicy(m_deletionPolicy)) << "&";
  }

  if(m_updateReplacePolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateReplacePolicy=" << StringUtils::URLEncode(GeneratedTemplateUpdateReplacePolicyMapper::GetNameForGeneratedTemplateUpdateReplacePolicy(m_updateReplacePolicy)) << "&";
  }

}

void TemplateConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deletionPolicyHasBeenSet)
  {
      oStream << location << ".DeletionPolicy=" << StringUtils::URLEncode(GeneratedTemplateDeletionPolicyMapper::GetNameForGeneratedTemplateDeletionPolicy(m_deletionPolicy)) << "&";
  }
  if(m_updateReplacePolicyHasBeenSet)
  {
      oStream << location << ".UpdateReplacePolicy=" << StringUtils::URLEncode(GeneratedTemplateUpdateReplacePolicyMapper::GetNameForGeneratedTemplateUpdateReplacePolicy(m_updateReplacePolicy)) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
