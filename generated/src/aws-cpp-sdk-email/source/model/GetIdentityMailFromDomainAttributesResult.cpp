/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityMailFromDomainAttributesResult.h>
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

GetIdentityMailFromDomainAttributesResult::GetIdentityMailFromDomainAttributesResult()
{
}

GetIdentityMailFromDomainAttributesResult::GetIdentityMailFromDomainAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIdentityMailFromDomainAttributesResult& GetIdentityMailFromDomainAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIdentityMailFromDomainAttributesResult"))
  {
    resultNode = rootNode.FirstChild("GetIdentityMailFromDomainAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode mailFromDomainAttributesNode = resultNode.FirstChild("MailFromDomainAttributes");

    if(!mailFromDomainAttributesNode.IsNull())
    {
      XmlNode mailFromDomainAttributesEntry = mailFromDomainAttributesNode.FirstChild("entry");
      while(!mailFromDomainAttributesEntry.IsNull())
      {
        XmlNode keyNode = mailFromDomainAttributesEntry.FirstChild("key");
        XmlNode valueNode = mailFromDomainAttributesEntry.FirstChild("value");
        m_mailFromDomainAttributes[keyNode.GetText()] =
            valueNode;
        mailFromDomainAttributesEntry = mailFromDomainAttributesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetIdentityMailFromDomainAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
