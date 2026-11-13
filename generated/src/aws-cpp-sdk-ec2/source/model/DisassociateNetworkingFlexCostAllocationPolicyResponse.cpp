/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DisassociateNetworkingFlexCostAllocationPolicyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DisassociateNetworkingFlexCostAllocationPolicyResponse::DisassociateNetworkingFlexCostAllocationPolicyResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DisassociateNetworkingFlexCostAllocationPolicyResponse& DisassociateNetworkingFlexCostAllocationPolicyResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisassociateNetworkingFlexCostAllocationPolicyResponse")) {
    resultNode = rootNode.FirstChild("DisassociateNetworkingFlexCostAllocationPolicyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyDisassociationsNode = resultNode.FirstChild("fcaPolicyDisassociations");
    if (!fcaPolicyDisassociationsNode.IsNull()) {
      XmlNode fcaPolicyDisassociationsMember = fcaPolicyDisassociationsNode.FirstChild("item");
      m_fcaPolicyDisassociationsHasBeenSet = !fcaPolicyDisassociationsMember.IsNull();
      while (!fcaPolicyDisassociationsMember.IsNull()) {
        m_fcaPolicyDisassociations.push_back(fcaPolicyDisassociationsMember.GetText());
        fcaPolicyDisassociationsMember = fcaPolicyDisassociationsMember.NextNode("item");
      }

      m_fcaPolicyDisassociationsHasBeenSet = true;
    }
    XmlNode fcaPolicyDisassociationFailuresNode = resultNode.FirstChild("fcaPolicyDisassociationFailures");
    if (!fcaPolicyDisassociationFailuresNode.IsNull()) {
      XmlNode fcaPolicyDisassociationFailuresMember = fcaPolicyDisassociationFailuresNode.FirstChild("item");
      m_fcaPolicyDisassociationFailuresHasBeenSet = !fcaPolicyDisassociationFailuresMember.IsNull();
      while (!fcaPolicyDisassociationFailuresMember.IsNull()) {
        m_fcaPolicyDisassociationFailures.push_back(fcaPolicyDisassociationFailuresMember);
        fcaPolicyDisassociationFailuresMember = fcaPolicyDisassociationFailuresMember.NextNode("item");
      }

      m_fcaPolicyDisassociationFailuresHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisassociateNetworkingFlexCostAllocationPolicyResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
