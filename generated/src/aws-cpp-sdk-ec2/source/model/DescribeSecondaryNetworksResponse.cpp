/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeSecondaryNetworksResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeSecondaryNetworksResponse::DescribeSecondaryNetworksResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeSecondaryNetworksResponse& DescribeSecondaryNetworksResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_responseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSecondaryNetworksResponse")) {
    resultNode = rootNode.FirstChild("DescribeSecondaryNetworksResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode secondaryNetworksNode = resultNode.FirstChild("secondaryNetworkSet");
    if (!secondaryNetworksNode.IsNull()) {
      XmlNode secondaryNetworksMember = secondaryNetworksNode.FirstChild("item");
      m_secondaryNetworksHasBeenSet = !secondaryNetworksMember.IsNull();
      while (!secondaryNetworksMember.IsNull()) {
        m_secondaryNetworks.push_back(secondaryNetworksMember);
        secondaryNetworksMember = secondaryNetworksMember.NextNode("item");
      }

      m_secondaryNetworksHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSecondaryNetworksResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
