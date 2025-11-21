/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeVpcEncryptionControlsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeVpcEncryptionControlsResponse::DescribeVpcEncryptionControlsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeVpcEncryptionControlsResponse& DescribeVpcEncryptionControlsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpcEncryptionControlsResponse")) {
    resultNode = rootNode.FirstChild("DescribeVpcEncryptionControlsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode vpcEncryptionControlsNode = resultNode.FirstChild("vpcEncryptionControlSet");
    if (!vpcEncryptionControlsNode.IsNull()) {
      XmlNode vpcEncryptionControlsMember = vpcEncryptionControlsNode.FirstChild("item");
      m_vpcEncryptionControlsHasBeenSet = !vpcEncryptionControlsMember.IsNull();
      while (!vpcEncryptionControlsMember.IsNull()) {
        m_vpcEncryptionControls.push_back(vpcEncryptionControlsMember);
        vpcEncryptionControlsMember = vpcEncryptionControlsMember.NextNode("item");
      }

      m_vpcEncryptionControlsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcEncryptionControlsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
