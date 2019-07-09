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
      m_templateName = templateNameNode.GetText();
    }
    XmlNode fromEmailAddressNode = resultNode.FirstChild("FromEmailAddress");
    if(!fromEmailAddressNode.IsNull())
    {
      m_fromEmailAddress = fromEmailAddressNode.GetText();
    }
    XmlNode templateSubjectNode = resultNode.FirstChild("TemplateSubject");
    if(!templateSubjectNode.IsNull())
    {
      m_templateSubject = templateSubjectNode.GetText();
    }
    XmlNode templateContentNode = resultNode.FirstChild("TemplateContent");
    if(!templateContentNode.IsNull())
    {
      m_templateContent = templateContentNode.GetText();
    }
    XmlNode successRedirectionURLNode = resultNode.FirstChild("SuccessRedirectionURL");
    if(!successRedirectionURLNode.IsNull())
    {
      m_successRedirectionURL = successRedirectionURLNode.GetText();
    }
    XmlNode failureRedirectionURLNode = resultNode.FirstChild("FailureRedirectionURL");
    if(!failureRedirectionURLNode.IsNull())
    {
      m_failureRedirectionURL = failureRedirectionURLNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetCustomVerificationEmailTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
