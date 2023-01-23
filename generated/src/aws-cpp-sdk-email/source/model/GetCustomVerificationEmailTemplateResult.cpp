/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetCustomVerificationEmailTemplateResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetCustomVerificationEmailTemplateResult::GetCustomVerificationEmailTemplateResult()
{
}

GetCustomVerificationEmailTemplateResult::GetCustomVerificationEmailTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetCustomVerificationEmailTemplateResult& GetCustomVerificationEmailTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCustomVerificationEmailTemplateResult"))
  {
    resultNode = rootNode.FirstChild("GetCustomVerificationEmailTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
    }
    XmlNode fromEmailAddressNode = resultNode.FirstChild("FromEmailAddress");
    if(!fromEmailAddressNode.IsNull())
    {
      m_fromEmailAddress = Aws::Utils::Xml::DecodeEscapedXmlText(fromEmailAddressNode.GetText());
    }
    XmlNode templateSubjectNode = resultNode.FirstChild("TemplateSubject");
    if(!templateSubjectNode.IsNull())
    {
      m_templateSubject = Aws::Utils::Xml::DecodeEscapedXmlText(templateSubjectNode.GetText());
    }
    XmlNode templateContentNode = resultNode.FirstChild("TemplateContent");
    if(!templateContentNode.IsNull())
    {
      m_templateContent = Aws::Utils::Xml::DecodeEscapedXmlText(templateContentNode.GetText());
    }
    XmlNode successRedirectionURLNode = resultNode.FirstChild("SuccessRedirectionURL");
    if(!successRedirectionURLNode.IsNull())
    {
      m_successRedirectionURL = Aws::Utils::Xml::DecodeEscapedXmlText(successRedirectionURLNode.GetText());
    }
    XmlNode failureRedirectionURLNode = resultNode.FirstChild("FailureRedirectionURL");
    if(!failureRedirectionURLNode.IsNull())
    {
      m_failureRedirectionURL = Aws::Utils::Xml::DecodeEscapedXmlText(failureRedirectionURLNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetCustomVerificationEmailTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
