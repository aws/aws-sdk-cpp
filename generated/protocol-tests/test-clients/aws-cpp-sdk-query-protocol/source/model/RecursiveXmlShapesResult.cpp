/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/RecursiveXmlShapesResult.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RecursiveXmlShapesResult::RecursiveXmlShapesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

RecursiveXmlShapesResult& RecursiveXmlShapesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RecursiveXmlShapesResult")) {
    resultNode = rootNode.FirstChild("RecursiveXmlShapesResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode nestedNode = resultNode.FirstChild("nested");
    if (!nestedNode.IsNull()) {
      m_nested = nestedNode;
      m_nestedHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::RecursiveXmlShapesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
