/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModifyVpcEndpointPayerResponsibilityResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyVpcEndpointPayerResponsibilityResponse::ModifyVpcEndpointPayerResponsibilityResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyVpcEndpointPayerResponsibilityResponse& ModifyVpcEndpointPayerResponsibilityResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyVpcEndpointPayerResponsibilityResponse")) {
    resultNode = rootNode.FirstChild("ModifyVpcEndpointPayerResponsibilityResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if (!vpcEndpointIdNode.IsNull()) {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode payerResponsibilitiesNode = resultNode.FirstChild("payerResponsibilitySet");
    if (!payerResponsibilitiesNode.IsNull()) {
      XmlNode payerResponsibilitiesMember = payerResponsibilitiesNode.FirstChild("item");
      m_payerResponsibilitiesHasBeenSet = !payerResponsibilitiesMember.IsNull();
      while (!payerResponsibilitiesMember.IsNull()) {
        m_payerResponsibilities.push_back(payerResponsibilitiesMember);
        payerResponsibilitiesMember = payerResponsibilitiesMember.NextNode("item");
      }

      m_payerResponsibilitiesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyVpcEndpointPayerResponsibilityResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
