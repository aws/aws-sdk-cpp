/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamRoutingPolicyRegistrationDeltasResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamRoutingPolicyRegistrationDeltasResponse::GetIpamRoutingPolicyRegistrationDeltasResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIpamRoutingPolicyRegistrationDeltasResponse& GetIpamRoutingPolicyRegistrationDeltasResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamRoutingPolicyRegistrationDeltasResponse")) {
    resultNode = rootNode.FirstChild("GetIpamRoutingPolicyRegistrationDeltasResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamRoutingPolicyRegistrationDeltasNode = resultNode.FirstChild("ipamRoutingPolicyRegistrationDeltaSet");
    if (!ipamRoutingPolicyRegistrationDeltasNode.IsNull()) {
      XmlNode ipamRoutingPolicyRegistrationDeltasMember = ipamRoutingPolicyRegistrationDeltasNode.FirstChild("item");
      m_ipamRoutingPolicyRegistrationDeltasHasBeenSet = !ipamRoutingPolicyRegistrationDeltasMember.IsNull();
      while (!ipamRoutingPolicyRegistrationDeltasMember.IsNull()) {
        m_ipamRoutingPolicyRegistrationDeltas.push_back(ipamRoutingPolicyRegistrationDeltasMember);
        ipamRoutingPolicyRegistrationDeltasMember = ipamRoutingPolicyRegistrationDeltasMember.NextNode("item");
      }

      m_ipamRoutingPolicyRegistrationDeltasHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamRoutingPolicyRegistrationDeltasResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
