/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeIpamPoliciesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeIpamPoliciesResponse::DescribeIpamPoliciesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

DescribeIpamPoliciesResponse& DescribeIpamPoliciesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpamPoliciesResponse")) {
    resultNode = rootNode.FirstChild("DescribeIpamPoliciesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode ipamPoliciesNode = resultNode.FirstChild("ipamPolicySet");
    if (!ipamPoliciesNode.IsNull()) {
      XmlNode ipamPoliciesMember = ipamPoliciesNode.FirstChild("item");
      m_ipamPoliciesHasBeenSet = !ipamPoliciesMember.IsNull();
      while (!ipamPoliciesMember.IsNull()) {
        m_ipamPolicies.push_back(ipamPoliciesMember);
        ipamPoliciesMember = ipamPoliciesMember.NextNode("item");
      }

      m_ipamPoliciesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpamPoliciesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
