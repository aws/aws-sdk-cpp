/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeIpamPrefixListResolversResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeIpamPrefixListResolversResponse::DescribeIpamPrefixListResolversResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeIpamPrefixListResolversResponse& DescribeIpamPrefixListResolversResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpamPrefixListResolversResponse")) {
    resultNode = rootNode.FirstChild("DescribeIpamPrefixListResolversResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode ipamPrefixListResolversNode = resultNode.FirstChild("ipamPrefixListResolverSet");
    if (!ipamPrefixListResolversNode.IsNull()) {
      XmlNode ipamPrefixListResolversMember = ipamPrefixListResolversNode.FirstChild("item");
      m_ipamPrefixListResolversHasBeenSet = !ipamPrefixListResolversMember.IsNull();
      while (!ipamPrefixListResolversMember.IsNull()) {
        m_ipamPrefixListResolvers.push_back(ipamPrefixListResolversMember);
        ipamPrefixListResolversMember = ipamPrefixListResolversMember.NextNode("item");
      }

      m_ipamPrefixListResolversHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpamPrefixListResolversResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
