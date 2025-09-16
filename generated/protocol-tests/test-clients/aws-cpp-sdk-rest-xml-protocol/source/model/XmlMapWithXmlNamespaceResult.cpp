/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

XmlMapWithXmlNamespaceResult::XmlMapWithXmlNamespaceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlMapWithXmlNamespaceResult& XmlMapWithXmlNamespaceResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode myMapNode = resultNode.FirstChild("KVP");
    if (!myMapNode.IsNull()) {
      XmlNode kVPEntry = myMapNode;
      m_myMapHasBeenSet = !kVPEntry.IsNull();
      while (!kVPEntry.IsNull()) {
        XmlNode keyNode = kVPEntry.FirstChild("K");
        XmlNode valueNode = kVPEntry.FirstChild("V");
        m_myMap[keyNode.GetText()] = valueNode.GetText();
        kVPEntry = kVPEntry.NextNode("KVP");
      }

      m_myMapHasBeenSet = true;
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
