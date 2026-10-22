/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModifyTransitGatewayAttachmentNatConfigurationResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyTransitGatewayAttachmentNatConfigurationResponse::ModifyTransitGatewayAttachmentNatConfigurationResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyTransitGatewayAttachmentNatConfigurationResponse& ModifyTransitGatewayAttachmentNatConfigurationResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyTransitGatewayAttachmentNatConfigurationResponse")) {
    resultNode = rootNode.FirstChild("ModifyTransitGatewayAttachmentNatConfigurationResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if (!transitGatewayAttachmentIdNode.IsNull()) {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode natGatewaySupportNode = resultNode.FirstChild("natGatewaySupport");
    if (!natGatewaySupportNode.IsNull()) {
      m_natGatewaySupport = TransitGatewayAttachmentNatGatewaySupportStateMapper::GetTransitGatewayAttachmentNatGatewaySupportStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(natGatewaySupportNode.GetText()).c_str()));
      m_natGatewaySupportHasBeenSet = true;
    }
    XmlNode natSystemRouteSupportNode = resultNode.FirstChild("natSystemRouteSupport");
    if (!natSystemRouteSupportNode.IsNull()) {
      m_natSystemRouteSupport =
          TransitGatewayAttachmentNatSystemRouteSupportValueMapper::GetTransitGatewayAttachmentNatSystemRouteSupportValueForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(natSystemRouteSupportNode.GetText()).c_str()));
      m_natSystemRouteSupportHasBeenSet = true;
    }
    XmlNode natGatewayRulesNode = resultNode.FirstChild("natGatewayRuleSet");
    if (!natGatewayRulesNode.IsNull()) {
      XmlNode natGatewayRulesMember = natGatewayRulesNode.FirstChild("item");
      m_natGatewayRulesHasBeenSet = !natGatewayRulesMember.IsNull();
      while (!natGatewayRulesMember.IsNull()) {
        m_natGatewayRules.push_back(natGatewayRulesMember);
        natGatewayRulesMember = natGatewayRulesMember.NextNode("item");
      }

      m_natGatewayRulesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyTransitGatewayAttachmentNatConfigurationResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
