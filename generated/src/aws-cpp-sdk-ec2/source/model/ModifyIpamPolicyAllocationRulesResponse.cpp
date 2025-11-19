/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModifyIpamPolicyAllocationRulesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyIpamPolicyAllocationRulesResponse::ModifyIpamPolicyAllocationRulesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyIpamPolicyAllocationRulesResponse& ModifyIpamPolicyAllocationRulesResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyIpamPolicyAllocationRulesResponse")) {
    resultNode = rootNode.FirstChild("ModifyIpamPolicyAllocationRulesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamPolicyDocumentNode = resultNode.FirstChild("ipamPolicyDocument");
    if (!ipamPolicyDocumentNode.IsNull()) {
      m_ipamPolicyDocument = ipamPolicyDocumentNode;
      m_ipamPolicyDocumentHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyIpamPolicyAllocationRulesResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
