/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CustomVerificationEmailTemplate.h>
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

CustomVerificationEmailTemplate::CustomVerificationEmailTemplate() : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
}

CustomVerificationEmailTemplate::CustomVerificationEmailTemplate(const XmlNode& xmlNode) : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
  *this = xmlNode;
}

CustomVerificationEmailTemplate& CustomVerificationEmailTemplate::operator =(const XmlNode& xmlNode)
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
    XmlNode fromEmailAddressNode = resultNode.FirstChild("FromEmailAddress");
    if(!fromEmailAddressNode.IsNull())
    {
      m_fromEmailAddress = Aws::Utils::Xml::DecodeEscapedXmlText(fromEmailAddressNode.GetText());
      m_fromEmailAddressHasBeenSet = true;
    }
    XmlNode templateSubjectNode = resultNode.FirstChild("TemplateSubject");
    if(!templateSubjectNode.IsNull())
    {
      m_templateSubject = Aws::Utils::Xml::DecodeEscapedXmlText(templateSubjectNode.GetText());
      m_templateSubjectHasBeenSet = true;
    }
    XmlNode successRedirectionURLNode = resultNode.FirstChild("SuccessRedirectionURL");
    if(!successRedirectionURLNode.IsNull())
    {
      m_successRedirectionURL = Aws::Utils::Xml::DecodeEscapedXmlText(successRedirectionURLNode.GetText());
      m_successRedirectionURLHasBeenSet = true;
    }
    XmlNode failureRedirectionURLNode = resultNode.FirstChild("FailureRedirectionURL");
    if(!failureRedirectionURLNode.IsNull())
    {
      m_failureRedirectionURL = Aws::Utils::Xml::DecodeEscapedXmlText(failureRedirectionURLNode.GetText());
      m_failureRedirectionURLHasBeenSet = true;
    }
  }

  return *this;
}

void CustomVerificationEmailTemplate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_fromEmailAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromEmailAddress=" << StringUtils::URLEncode(m_fromEmailAddress.c_str()) << "&";
  }

  if(m_templateSubjectHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateSubject=" << StringUtils::URLEncode(m_templateSubject.c_str()) << "&";
  }

  if(m_successRedirectionURLHasBeenSet)
  {
      oStream << location << index << locationValue << ".SuccessRedirectionURL=" << StringUtils::URLEncode(m_successRedirectionURL.c_str()) << "&";
  }

  if(m_failureRedirectionURLHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureRedirectionURL=" << StringUtils::URLEncode(m_failureRedirectionURL.c_str()) << "&";
  }

}

void CustomVerificationEmailTemplate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_fromEmailAddressHasBeenSet)
  {
      oStream << location << ".FromEmailAddress=" << StringUtils::URLEncode(m_fromEmailAddress.c_str()) << "&";
  }
  if(m_templateSubjectHasBeenSet)
  {
      oStream << location << ".TemplateSubject=" << StringUtils::URLEncode(m_templateSubject.c_str()) << "&";
  }
  if(m_successRedirectionURLHasBeenSet)
  {
      oStream << location << ".SuccessRedirectionURL=" << StringUtils::URLEncode(m_successRedirectionURL.c_str()) << "&";
  }
  if(m_failureRedirectionURLHasBeenSet)
  {
      oStream << location << ".FailureRedirectionURL=" << StringUtils::URLEncode(m_failureRedirectionURL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
