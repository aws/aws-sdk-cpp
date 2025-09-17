/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/ComplexNestedErrorData.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2Protocol {
namespace Model {

ComplexNestedErrorData::ComplexNestedErrorData(const XmlNode& xmlNode) { *this = xmlNode; }

ComplexNestedErrorData& ComplexNestedErrorData::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("Foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
  }

  return *this;
}

void ComplexNestedErrorData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_fooHasBeenSet) {
    oStream << location << index << locationValue << ".Foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }
}

void ComplexNestedErrorData::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fooHasBeenSet) {
    oStream << location << ".Foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
