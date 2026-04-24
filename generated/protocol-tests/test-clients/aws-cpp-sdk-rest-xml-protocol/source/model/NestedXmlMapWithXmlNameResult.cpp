/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

NestedXmlMapWithXmlNameResult::NestedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

NestedXmlMapWithXmlNameResult& NestedXmlMapWithXmlNameResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode nestedXmlMapWithXmlNameMapNode = resultNode.FirstChild("nestedXmlMapWithXmlNameMap");

    if (!nestedXmlMapWithXmlNameMapNode.IsNull()) {
      XmlNode nestedXmlMapWithXmlNameMapEntry = nestedXmlMapWithXmlNameMapNode.FirstChild("entry");
      m_nestedXmlMapWithXmlNameMapHasBeenSet = !nestedXmlMapWithXmlNameMapEntry.IsNull();
      while (!nestedXmlMapWithXmlNameMapEntry.IsNull()) {
        XmlNode keyNode = nestedXmlMapWithXmlNameMapEntry.FirstChild("key");
        XmlNode valueNode = nestedXmlMapWithXmlNameMapEntry.FirstChild("value");
        m_nestedXmlMapWithXmlNameMap[keyNode.GetText()] = [&valueNode]() -> Aws::Map<Aws::String, Aws::String> {
          Aws::Map<Aws::String, Aws::String> nestedMapValue;
          if (valueNode.IsNull()) {
            return nestedMapValue;
          }
          XmlNode nestedMapValueEntryNode = valueNode.FirstChild("entry");
          while (!nestedMapValueEntryNode.IsNull()) {
            XmlNode nestedMapValueKeyNode = nestedMapValueEntryNode.FirstChild("InnerKey");
            XmlNode nestedMapValueValNode = nestedMapValueEntryNode.FirstChild("InnerValue");
            nestedMapValue[nestedMapValueKeyNode.GetText()] = nestedMapValueValNode.GetText();
            nestedMapValueEntryNode = nestedMapValueEntryNode.NextNode("entry");
          }
          return nestedMapValue;
        }(/*IIFE*/);
        nestedXmlMapWithXmlNameMapEntry = nestedXmlMapWithXmlNameMapEntry.NextNode("entry");
      }

      m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
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
