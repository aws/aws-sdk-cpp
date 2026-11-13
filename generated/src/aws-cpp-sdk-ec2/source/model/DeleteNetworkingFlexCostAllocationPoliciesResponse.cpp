/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DeleteNetworkingFlexCostAllocationPoliciesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteNetworkingFlexCostAllocationPoliciesResponse::DeleteNetworkingFlexCostAllocationPoliciesResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DeleteNetworkingFlexCostAllocationPoliciesResponse& DeleteNetworkingFlexCostAllocationPoliciesResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteNetworkingFlexCostAllocationPoliciesResponse")) {
    resultNode = rootNode.FirstChild("DeleteNetworkingFlexCostAllocationPoliciesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode successfulNode = resultNode.FirstChild("successful");
    if (!successfulNode.IsNull()) {
      XmlNode successfulMember = successfulNode.FirstChild("item");
      m_successfulHasBeenSet = !successfulMember.IsNull();
      while (!successfulMember.IsNull()) {
        m_successful.push_back(successfulMember.GetText());
        successfulMember = successfulMember.NextNode("item");
      }

      m_successfulHasBeenSet = true;
    }
    XmlNode failedNode = resultNode.FirstChild("failed");
    if (!failedNode.IsNull()) {
      XmlNode failedMember = failedNode.FirstChild("item");
      m_failedHasBeenSet = !failedMember.IsNull();
      while (!failedMember.IsNull()) {
        m_failed.push_back(failedMember);
        failedMember = failedMember.NextNode("item");
      }

      m_failedHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteNetworkingFlexCostAllocationPoliciesResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
