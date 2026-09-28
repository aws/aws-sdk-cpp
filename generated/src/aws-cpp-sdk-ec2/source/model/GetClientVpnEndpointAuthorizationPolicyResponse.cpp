/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetClientVpnEndpointAuthorizationPolicyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetClientVpnEndpointAuthorizationPolicyResponse::GetClientVpnEndpointAuthorizationPolicyResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetClientVpnEndpointAuthorizationPolicyResponse& GetClientVpnEndpointAuthorizationPolicyResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetClientVpnEndpointAuthorizationPolicyResponse")) {
    resultNode = rootNode.FirstChild("GetClientVpnEndpointAuthorizationPolicyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if (!clientVpnEndpointIdNode.IsNull()) {
      m_clientVpnEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(clientVpnEndpointIdNode.GetText());
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode policyDocumentNode = resultNode.FirstChild("policyDocument");
    if (!policyDocumentNode.IsNull()) {
      m_policyDocument = Aws::Utils::Xml::DecodeEscapedXmlText(policyDocumentNode.GetText());
      m_policyDocumentHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode shadowModeNode = resultNode.FirstChild("shadowMode");
    if (!shadowModeNode.IsNull()) {
      m_shadowMode = ClientVpnAuthorizationPolicyShadowModeMapper::GetClientVpnAuthorizationPolicyShadowModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(shadowModeNode.GetText()).c_str()));
      m_shadowModeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = ClientVpnAuthorizationPolicyStatusMapper::GetClientVpnAuthorizationPolicyStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetClientVpnEndpointAuthorizationPolicyResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
