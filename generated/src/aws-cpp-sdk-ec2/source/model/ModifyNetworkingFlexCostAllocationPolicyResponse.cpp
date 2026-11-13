/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModifyNetworkingFlexCostAllocationPolicyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyNetworkingFlexCostAllocationPolicyResponse::ModifyNetworkingFlexCostAllocationPolicyResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyNetworkingFlexCostAllocationPolicyResponse& ModifyNetworkingFlexCostAllocationPolicyResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyNetworkingFlexCostAllocationPolicyResponse")) {
    resultNode = rootNode.FirstChild("ModifyNetworkingFlexCostAllocationPolicyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyIdNode = resultNode.FirstChild("fcaPolicyId");
    if (!fcaPolicyIdNode.IsNull()) {
      m_fcaPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyIdNode.GetText());
      m_fcaPolicyIdHasBeenSet = true;
    }
    XmlNode updatedAtNode = resultNode.FirstChild("updatedAt");
    if (!updatedAtNode.IsNull()) {
      m_updatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_updatedAtHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("version");
    if (!versionNode.IsNull()) {
      m_version =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText()).c_str()).c_str());
      m_versionHasBeenSet = true;
    }
    XmlNode versionExpectedEffectiveAtNode = resultNode.FirstChild("versionExpectedEffectiveAt");
    if (!versionExpectedEffectiveAtNode.IsNull()) {
      m_versionExpectedEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionExpectedEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_versionExpectedEffectiveAtHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyNetworkingFlexCostAllocationPolicyResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
