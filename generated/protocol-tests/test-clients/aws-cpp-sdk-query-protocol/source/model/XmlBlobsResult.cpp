/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlBlobsResult.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlBlobsResult::XmlBlobsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlBlobsResult& XmlBlobsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlBlobsResult")) {
    resultNode = rootNode.FirstChild("XmlBlobsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode dataNode = resultNode.FirstChild("data");
    if (!dataNode.IsNull()) {
      m_data = HashingUtils::Base64Decode(Aws::Utils::Xml::DecodeEscapedXmlText(dataNode.GetText()));
      m_dataHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlBlobsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
