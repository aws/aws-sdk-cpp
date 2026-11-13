/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetNetworkingFlexCostAllocationPolicyVersionsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkingFlexCostAllocationPolicyVersionsResponse::GetNetworkingFlexCostAllocationPolicyVersionsResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetNetworkingFlexCostAllocationPolicyVersionsResponse& GetNetworkingFlexCostAllocationPolicyVersionsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetNetworkingFlexCostAllocationPolicyVersionsResponse")) {
    resultNode = rootNode.FirstChild("GetNetworkingFlexCostAllocationPolicyVersionsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyVersionsNode = resultNode.FirstChild("fcaPolicyVersions");
    if (!fcaPolicyVersionsNode.IsNull()) {
      XmlNode fcaPolicyVersionsMember = fcaPolicyVersionsNode.FirstChild("item");
      m_fcaPolicyVersionsHasBeenSet = !fcaPolicyVersionsMember.IsNull();
      while (!fcaPolicyVersionsMember.IsNull()) {
        m_fcaPolicyVersions.push_back(fcaPolicyVersionsMember);
        fcaPolicyVersionsMember = fcaPolicyVersionsMember.NextNode("item");
      }

      m_fcaPolicyVersionsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetNetworkingFlexCostAllocationPolicyVersionsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
