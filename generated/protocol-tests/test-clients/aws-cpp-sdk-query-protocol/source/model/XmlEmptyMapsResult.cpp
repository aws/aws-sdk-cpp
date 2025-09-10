/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlEmptyMapsResult.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlEmptyMapsResult::XmlEmptyMapsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlEmptyMapsResult& XmlEmptyMapsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlEmptyMapsResult")) {
    resultNode = rootNode.FirstChild("XmlEmptyMapsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode myMapNode = resultNode.FirstChild("myMap");

    if (!myMapNode.IsNull()) {
      XmlNode myMapEntry = myMapNode.FirstChild("entry");
      m_myMapHasBeenSet = !myMapEntry.IsNull();
      while (!myMapEntry.IsNull()) {
        XmlNode keyNode = myMapEntry.FirstChild("key");
        XmlNode valueNode = myMapEntry.FirstChild("value");
        m_myMap[keyNode.GetText()] = valueNode;
        myMapEntry = myMapEntry.NextNode("entry");
      }

      m_myMapHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlEmptyMapsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
