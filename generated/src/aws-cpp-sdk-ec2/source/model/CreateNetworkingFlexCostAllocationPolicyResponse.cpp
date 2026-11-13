/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CreateNetworkingFlexCostAllocationPolicyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateNetworkingFlexCostAllocationPolicyResponse::CreateNetworkingFlexCostAllocationPolicyResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

CreateNetworkingFlexCostAllocationPolicyResponse& CreateNetworkingFlexCostAllocationPolicyResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateNetworkingFlexCostAllocationPolicyResponse")) {
    resultNode = rootNode.FirstChild("CreateNetworkingFlexCostAllocationPolicyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyIdNode = resultNode.FirstChild("fcaPolicyId");
    if (!fcaPolicyIdNode.IsNull()) {
      m_fcaPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyIdNode.GetText());
      m_fcaPolicyIdHasBeenSet = true;
    }
    XmlNode fcaPolicyArnNode = resultNode.FirstChild("fcaPolicyArn");
    if (!fcaPolicyArnNode.IsNull()) {
      m_fcaPolicyArn = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyArnNode.GetText());
      m_fcaPolicyArnHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("createdAt");
    if (!createdAtNode.IsNull()) {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode expectedEffectiveAtNode = resultNode.FirstChild("expectedEffectiveAt");
    if (!expectedEffectiveAtNode.IsNull()) {
      m_expectedEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expectedEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_expectedEffectiveAtHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateNetworkingFlexCostAllocationPolicyResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
