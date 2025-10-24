﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeOutpostLagsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeOutpostLagsResponse::DescribeOutpostLagsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

DescribeOutpostLagsResponse& DescribeOutpostLagsResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeOutpostLagsResponse")) {
    resultNode = rootNode.FirstChild("DescribeOutpostLagsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode outpostLagsNode = resultNode.FirstChild("outpostLagSet");
    if (!outpostLagsNode.IsNull()) {
      XmlNode outpostLagsMember = outpostLagsNode.FirstChild("item");
      m_outpostLagsHasBeenSet = !outpostLagsMember.IsNull();
      while (!outpostLagsMember.IsNull()) {
        m_outpostLags.push_back(outpostLagsMember);
        outpostLagsMember = outpostLagsMember.NextNode("item");
      }

      m_outpostLagsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeOutpostLagsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
