/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerifyDomainIdentityResult.h>
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

VerifyDomainIdentityResult::VerifyDomainIdentityResult()
{
}

VerifyDomainIdentityResult::VerifyDomainIdentityResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

VerifyDomainIdentityResult& VerifyDomainIdentityResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "VerifyDomainIdentityResult"))
  {
    resultNode = rootNode.FirstChild("VerifyDomainIdentityResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode verificationTokenNode = resultNode.FirstChild("VerificationToken");
    if(!verificationTokenNode.IsNull())
    {
      m_verificationToken = Aws::Utils::Xml::DecodeEscapedXmlText(verificationTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::VerifyDomainIdentityResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
