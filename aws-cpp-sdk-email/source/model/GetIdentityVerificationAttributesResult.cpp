/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
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

GetIdentityVerificationAttributesResult::GetIdentityVerificationAttributesResult()
{
}

GetIdentityVerificationAttributesResult::GetIdentityVerificationAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIdentityVerificationAttributesResult& GetIdentityVerificationAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIdentityVerificationAttributesResult"))
  {
    resultNode = rootNode.FirstChild("GetIdentityVerificationAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode verificationAttributesNode = resultNode.FirstChild("VerificationAttributes");

    if(!verificationAttributesNode.IsNull())
    {
      XmlNode verificationAttributesEntry = verificationAttributesNode.FirstChild("entry");
      while(!verificationAttributesEntry.IsNull())
      {
        XmlNode keyNode = verificationAttributesEntry.FirstChild("key");
        XmlNode valueNode = verificationAttributesEntry.FirstChild("value");
        m_verificationAttributes[keyNode.GetText()] =
            valueNode;
        verificationAttributesEntry = verificationAttributesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetIdentityVerificationAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
