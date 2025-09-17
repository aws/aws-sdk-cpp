/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlNamespaceNested.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

XmlNamespaceNested::XmlNamespaceNested(const XmlNode& xmlNode) { *this = xmlNode; }

XmlNamespaceNested& XmlNamespaceNested::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("values");
    if (!valuesNode.IsNull()) {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      m_valuesHasBeenSet = !valuesMember.IsNull();
      while (!valuesMember.IsNull()) {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void XmlNamespaceNested::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_fooHasBeenSet) {
    oStream << location << index << locationValue << ".foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }

  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << index << locationValue << ".values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void XmlNamespaceNested::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fooHasBeenSet) {
    oStream << location << ".foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }
  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << ".values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
