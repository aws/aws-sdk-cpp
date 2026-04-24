/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlEnumsResult.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlEnumsResult::XmlEnumsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlEnumsResult& XmlEnumsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlEnumsResult")) {
    resultNode = rootNode.FirstChild("XmlEnumsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode fooEnum1Node = resultNode.FirstChild("fooEnum1");
    if (!fooEnum1Node.IsNull()) {
      m_fooEnum1 =
          FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum1Node.GetText()).c_str()));
      m_fooEnum1HasBeenSet = true;
    }
    XmlNode fooEnum2Node = resultNode.FirstChild("fooEnum2");
    if (!fooEnum2Node.IsNull()) {
      m_fooEnum2 =
          FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum2Node.GetText()).c_str()));
      m_fooEnum2HasBeenSet = true;
    }
    XmlNode fooEnum3Node = resultNode.FirstChild("fooEnum3");
    if (!fooEnum3Node.IsNull()) {
      m_fooEnum3 =
          FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum3Node.GetText()).c_str()));
      m_fooEnum3HasBeenSet = true;
    }
    XmlNode fooEnumListNode = resultNode.FirstChild("fooEnumList");
    if (!fooEnumListNode.IsNull()) {
      XmlNode fooEnumListMember = fooEnumListNode.FirstChild("member");
      m_fooEnumListHasBeenSet = !fooEnumListMember.IsNull();
      while (!fooEnumListMember.IsNull()) {
        m_fooEnumList.push_back(FooEnumMapper::GetFooEnumForName(StringUtils::Trim(fooEnumListMember.GetText().c_str())));
        fooEnumListMember = fooEnumListMember.NextNode("member");
      }

      m_fooEnumListHasBeenSet = true;
    }
    XmlNode fooEnumSetNode = resultNode.FirstChild("fooEnumSet");
    if (!fooEnumSetNode.IsNull()) {
      XmlNode fooEnumSetMember = fooEnumSetNode.FirstChild("member");
      m_fooEnumSetHasBeenSet = !fooEnumSetMember.IsNull();
      while (!fooEnumSetMember.IsNull()) {
        m_fooEnumSet.push_back(FooEnumMapper::GetFooEnumForName(StringUtils::Trim(fooEnumSetMember.GetText().c_str())));
        fooEnumSetMember = fooEnumSetMember.NextNode("member");
      }

      m_fooEnumSetHasBeenSet = true;
    }
    XmlNode fooEnumMapNode = resultNode.FirstChild("fooEnumMap");

    if (!fooEnumMapNode.IsNull()) {
      XmlNode fooEnumMapEntry = fooEnumMapNode.FirstChild("entry");
      m_fooEnumMapHasBeenSet = !fooEnumMapEntry.IsNull();
      while (!fooEnumMapEntry.IsNull()) {
        XmlNode keyNode = fooEnumMapEntry.FirstChild("key");
        XmlNode valueNode = fooEnumMapEntry.FirstChild("value");
        m_fooEnumMap[keyNode.GetText()] = FooEnumMapper::GetFooEnumForName(StringUtils::Trim(valueNode.GetText().c_str()));
        fooEnumMapEntry = fooEnumMapEntry.NextNode("entry");
      }

      m_fooEnumMapHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlEnumsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
