/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListConnectionFunctions2020_05_31Result.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListConnectionFunctions2020_05_31Result::ListConnectionFunctions2020_05_31Result(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ListConnectionFunctions2020_05_31Result& ListConnectionFunctions2020_05_31Result::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if (!nextMarkerNode.IsNull()) {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
      m_nextMarkerHasBeenSet = true;
    }
    XmlNode connectionFunctionsNode = resultNode.FirstChild("ConnectionFunctions");
    if (!connectionFunctionsNode.IsNull()) {
      XmlNode connectionFunctionsMember = connectionFunctionsNode.FirstChild("ConnectionFunctionSummary");
      m_connectionFunctionsHasBeenSet = !connectionFunctionsMember.IsNull();
      while (!connectionFunctionsMember.IsNull()) {
        m_connectionFunctions.push_back(connectionFunctionsMember);
        connectionFunctionsMember = connectionFunctionsMember.NextNode("ConnectionFunctionSummary");
      }

      m_connectionFunctionsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
