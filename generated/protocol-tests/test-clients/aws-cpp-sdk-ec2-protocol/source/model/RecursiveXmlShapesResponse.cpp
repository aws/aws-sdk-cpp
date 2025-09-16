/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesResponse.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RecursiveXmlShapesResponse::RecursiveXmlShapesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

RecursiveXmlShapesResponse& RecursiveXmlShapesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RecursiveXmlShapesResponse")) {
    resultNode = rootNode.FirstChild("RecursiveXmlShapesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nestedNode = resultNode.FirstChild("nested");
    if (!nestedNode.IsNull()) {
      m_nested = nestedNode;
      m_nestedHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::RecursiveXmlShapesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
