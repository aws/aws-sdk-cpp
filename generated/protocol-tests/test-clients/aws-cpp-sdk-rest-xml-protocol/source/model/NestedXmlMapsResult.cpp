/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

NestedXmlMapsResult::NestedXmlMapsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

NestedXmlMapsResult& NestedXmlMapsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode nestedMapNode = resultNode.FirstChild("nestedMap");

    if (!nestedMapNode.IsNull()) {
      XmlNode nestedMapEntry = nestedMapNode.FirstChild("entry");
      m_nestedMapHasBeenSet = !nestedMapEntry.IsNull();
      while (!nestedMapEntry.IsNull()) {
        XmlNode keyNode = nestedMapEntry.FirstChild("key");
        XmlNode valueNode = nestedMapEntry.FirstChild("value");
        m_nestedMap[keyNode.GetText()] = [&valueNode]() -> Aws::Map<Aws::String, FooEnum> {
          Aws::Map<Aws::String, FooEnum> nestedMapValue;
          if (valueNode.IsNull()) {
            return nestedMapValue;
          }
          XmlNode nestedMapValueEntryNode = valueNode.FirstChild("entry");
          while (!nestedMapValueEntryNode.IsNull()) {
            XmlNode nestedMapValueKeyNode = nestedMapValueEntryNode.FirstChild("key");
            XmlNode nestedMapValueValNode = nestedMapValueEntryNode.FirstChild("value");
            nestedMapValue[nestedMapValueKeyNode.GetText()] =
                FooEnumMapper::GetFooEnumForName(StringUtils::Trim(nestedMapValueValNode.GetText().c_str()));
            nestedMapValueEntryNode = nestedMapValueEntryNode.NextNode("entry");
          }
          return nestedMapValue;
        }(/*IIFE*/);
        nestedMapEntry = nestedMapEntry.NextNode("entry");
      }

      m_nestedMapHasBeenSet = true;
    }
    XmlNode flatNestedMapNode = resultNode.FirstChild("flatNestedMap");

    if (!flatNestedMapNode.IsNull()) {
      XmlNode flatNestedMapEntry = flatNestedMapNode.FirstChild("entry");
      m_flatNestedMapHasBeenSet = !flatNestedMapEntry.IsNull();
      while (!flatNestedMapEntry.IsNull()) {
        XmlNode keyNode = flatNestedMapEntry.FirstChild("key");
        XmlNode valueNode = flatNestedMapEntry.FirstChild("value");
        m_flatNestedMap[keyNode.GetText()] = [&valueNode]() -> Aws::Map<Aws::String, FooEnum> {
          Aws::Map<Aws::String, FooEnum> nestedMapValue;
          if (valueNode.IsNull()) {
            return nestedMapValue;
          }
          XmlNode nestedMapValueEntryNode = valueNode.FirstChild("entry");
          while (!nestedMapValueEntryNode.IsNull()) {
            XmlNode nestedMapValueKeyNode = nestedMapValueEntryNode.FirstChild("key");
            XmlNode nestedMapValueValNode = nestedMapValueEntryNode.FirstChild("value");
            nestedMapValue[nestedMapValueKeyNode.GetText()] =
                FooEnumMapper::GetFooEnumForName(StringUtils::Trim(nestedMapValueValNode.GetText().c_str()));
            nestedMapValueEntryNode = nestedMapValueEntryNode.NextNode("entry");
          }
          return nestedMapValue;
        }(/*IIFE*/);
        flatNestedMapEntry = flatNestedMapEntry.NextNode("entry");
      }

      m_flatNestedMapHasBeenSet = true;
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
