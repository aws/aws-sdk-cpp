/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListCustomVerificationEmailTemplatesResult.h>
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

ListCustomVerificationEmailTemplatesResult::ListCustomVerificationEmailTemplatesResult()
{
}

ListCustomVerificationEmailTemplatesResult::ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListCustomVerificationEmailTemplatesResult& ListCustomVerificationEmailTemplatesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListCustomVerificationEmailTemplatesResult"))
  {
    resultNode = rootNode.FirstChild("ListCustomVerificationEmailTemplatesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode customVerificationEmailTemplatesNode = resultNode.FirstChild("CustomVerificationEmailTemplates");
    if(!customVerificationEmailTemplatesNode.IsNull())
    {
      XmlNode customVerificationEmailTemplatesMember = customVerificationEmailTemplatesNode.FirstChild("member");
      while(!customVerificationEmailTemplatesMember.IsNull())
      {
        m_customVerificationEmailTemplates.push_back(customVerificationEmailTemplatesMember);
        customVerificationEmailTemplatesMember = customVerificationEmailTemplatesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListCustomVerificationEmailTemplatesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
