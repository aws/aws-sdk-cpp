/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
