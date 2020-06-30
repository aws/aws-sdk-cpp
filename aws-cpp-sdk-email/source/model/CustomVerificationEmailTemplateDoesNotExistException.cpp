/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CustomVerificationEmailTemplateDoesNotExistException.h>
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

CustomVerificationEmailTemplateDoesNotExistException::CustomVerificationEmailTemplateDoesNotExistException() : 
    m_customVerificationEmailTemplateNameHasBeenSet(false)
{
}

CustomVerificationEmailTemplateDoesNotExistException::CustomVerificationEmailTemplateDoesNotExistException(const XmlNode& xmlNode) : 
    m_customVerificationEmailTemplateNameHasBeenSet(false)
{
  *this = xmlNode;
}

CustomVerificationEmailTemplateDoesNotExistException& CustomVerificationEmailTemplateDoesNotExistException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customVerificationEmailTemplateNameNode = resultNode.FirstChild("CustomVerificationEmailTemplateName");
    if(!customVerificationEmailTemplateNameNode.IsNull())
    {
      m_customVerificationEmailTemplateName = Aws::Utils::Xml::DecodeEscapedXmlText(customVerificationEmailTemplateNameNode.GetText());
      m_customVerificationEmailTemplateNameHasBeenSet = true;
    }
  }

  return *this;
}

void CustomVerificationEmailTemplateDoesNotExistException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customVerificationEmailTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomVerificationEmailTemplateName=" << StringUtils::URLEncode(m_customVerificationEmailTemplateName.c_str()) << "&";
  }

}

void CustomVerificationEmailTemplateDoesNotExistException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customVerificationEmailTemplateNameHasBeenSet)
  {
      oStream << location << ".CustomVerificationEmailTemplateName=" << StringUtils::URLEncode(m_customVerificationEmailTemplateName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
