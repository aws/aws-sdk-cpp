/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse::DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse& DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse")) {
    resultNode = rootNode.FirstChild("DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyAssociationsNode = resultNode.FirstChild("fcaPolicyAssociations");
    if (!fcaPolicyAssociationsNode.IsNull()) {
      XmlNode fcaPolicyAssociationsMember = fcaPolicyAssociationsNode.FirstChild("item");
      m_fcaPolicyAssociationsHasBeenSet = !fcaPolicyAssociationsMember.IsNull();
      while (!fcaPolicyAssociationsMember.IsNull()) {
        m_fcaPolicyAssociations.push_back(fcaPolicyAssociationsMember);
        fcaPolicyAssociationsMember = fcaPolicyAssociationsMember.NextNode("item");
      }

      m_fcaPolicyAssociationsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeNetworkingFlexCostAllocationPolicyAssociationsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
