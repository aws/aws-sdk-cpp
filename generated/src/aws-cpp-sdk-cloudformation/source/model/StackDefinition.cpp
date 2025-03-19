/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackDefinition.h>
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

StackDefinition::StackDefinition(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

StackDefinition& StackDefinition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
      m_stackNameHasBeenSet = true;
    }
    XmlNode templateBodyNode = resultNode.FirstChild("TemplateBody");
    if(!templateBodyNode.IsNull())
    {
      m_templateBody = Aws::Utils::Xml::DecodeEscapedXmlText(templateBodyNode.GetText());
      m_templateBodyHasBeenSet = true;
    }
    XmlNode templateURLNode = resultNode.FirstChild("TemplateURL");
    if(!templateURLNode.IsNull())
    {
      m_templateURL = Aws::Utils::Xml::DecodeEscapedXmlText(templateURLNode.GetText());
      m_templateURLHasBeenSet = true;
    }
  }

  return *this;
}

void StackDefinition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_templateBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_templateURLHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }

}

void StackDefinition::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_templateBodyHasBeenSet)
  {
      oStream << location << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }
  if(m_templateURLHasBeenSet)
  {
      oStream << location << ".TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
