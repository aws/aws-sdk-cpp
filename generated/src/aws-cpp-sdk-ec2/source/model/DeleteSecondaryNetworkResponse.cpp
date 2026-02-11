/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DeleteSecondaryNetworkResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteSecondaryNetworkResponse::DeleteSecondaryNetworkResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

DeleteSecondaryNetworkResponse& DeleteSecondaryNetworkResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteSecondaryNetworkResponse")) {
    resultNode = rootNode.FirstChild("DeleteSecondaryNetworkResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode secondaryNetworkNode = resultNode.FirstChild("secondaryNetwork");
    if (!secondaryNetworkNode.IsNull()) {
      m_secondaryNetwork = secondaryNetworkNode;
      m_secondaryNetworkHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if (!clientTokenNode.IsNull()) {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteSecondaryNetworkResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
