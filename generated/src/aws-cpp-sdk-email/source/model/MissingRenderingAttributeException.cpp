/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/MissingRenderingAttributeException.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

MissingRenderingAttributeException::MissingRenderingAttributeException() : 
    m_templateNameHasBeenSet(false)
{
}

MissingRenderingAttributeException::MissingRenderingAttributeException(const XmlNode& xmlNode) : 
    m_templateNameHasBeenSet(false)
{
  *this = xmlNode;
}

MissingRenderingAttributeException& MissingRenderingAttributeException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
      m_templateNameHasBeenSet = true;
    }
  }

  return *this;
}

void MissingRenderingAttributeException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

}

void MissingRenderingAttributeException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
