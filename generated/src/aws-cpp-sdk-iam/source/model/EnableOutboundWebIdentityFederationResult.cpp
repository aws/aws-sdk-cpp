/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/EnableOutboundWebIdentityFederationResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

EnableOutboundWebIdentityFederationResult::EnableOutboundWebIdentityFederationResult(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

EnableOutboundWebIdentityFederationResult& EnableOutboundWebIdentityFederationResult::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableOutboundWebIdentityFederationResult")) {
    resultNode = rootNode.FirstChild("EnableOutboundWebIdentityFederationResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode issuerIdentifierNode = resultNode.FirstChild("IssuerIdentifier");
    if (!issuerIdentifierNode.IsNull()) {
      m_issuerIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(issuerIdentifierNode.GetText());
      m_issuerIdentifierHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::EnableOutboundWebIdentityFederationResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
