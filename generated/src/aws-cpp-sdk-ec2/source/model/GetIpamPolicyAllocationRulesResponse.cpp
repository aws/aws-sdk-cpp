/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamPolicyAllocationRulesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamPolicyAllocationRulesResponse::GetIpamPolicyAllocationRulesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIpamPolicyAllocationRulesResponse& GetIpamPolicyAllocationRulesResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamPolicyAllocationRulesResponse")) {
    resultNode = rootNode.FirstChild("GetIpamPolicyAllocationRulesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamPolicyDocumentsNode = resultNode.FirstChild("ipamPolicyDocumentSet");
    if (!ipamPolicyDocumentsNode.IsNull()) {
      XmlNode ipamPolicyDocumentsMember = ipamPolicyDocumentsNode.FirstChild("item");
      m_ipamPolicyDocumentsHasBeenSet = !ipamPolicyDocumentsMember.IsNull();
      while (!ipamPolicyDocumentsMember.IsNull()) {
        m_ipamPolicyDocuments.push_back(ipamPolicyDocumentsMember);
        ipamPolicyDocumentsMember = ipamPolicyDocumentsMember.NextNode("item");
      }

      m_ipamPolicyDocumentsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamPolicyAllocationRulesResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
