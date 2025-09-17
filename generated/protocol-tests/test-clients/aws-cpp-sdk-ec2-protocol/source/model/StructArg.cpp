/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/StructArg.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2Protocol {
namespace Model {

StructArg::StructArg(const XmlNode& xmlNode) { *this = xmlNode; }

StructArg& StructArg::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode stringArgNode = resultNode.FirstChild("StringArg");
    if (!stringArgNode.IsNull()) {
      m_stringArg = Aws::Utils::Xml::DecodeEscapedXmlText(stringArgNode.GetText());
      m_stringArgHasBeenSet = true;
    }
    XmlNode otherArgNode = resultNode.FirstChild("OtherArg");
    if (!otherArgNode.IsNull()) {
      m_otherArg =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(otherArgNode.GetText()).c_str()).c_str());
      m_otherArgHasBeenSet = true;
    }
    XmlNode recursiveArgNode = resultNode.FirstChild("RecursiveArg");
    if (!recursiveArgNode.IsNull()) {
      m_recursiveArg = Aws::MakeShared<StructArg>("StructArg", recursiveArgNode);
      m_recursiveArgHasBeenSet = true;
    }
  }

  return *this;
}

void StructArg::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_stringArgHasBeenSet) {
    oStream << location << index << locationValue << ".StringArg=" << StringUtils::URLEncode(m_stringArg.c_str()) << "&";
  }

  if (m_otherArgHasBeenSet) {
    oStream << location << index << locationValue << ".OtherArg=" << std::boolalpha << m_otherArg << "&";
  }

  if (m_recursiveArgHasBeenSet) {
    Aws::StringStream recursiveArgLocationAndMemberSs;
    recursiveArgLocationAndMemberSs << location << index << locationValue << ".RecursiveArg";
    m_recursiveArg->OutputToStream(oStream, recursiveArgLocationAndMemberSs.str().c_str());
  }
}

void StructArg::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_stringArgHasBeenSet) {
    oStream << location << ".StringArg=" << StringUtils::URLEncode(m_stringArg.c_str()) << "&";
  }
  if (m_otherArgHasBeenSet) {
    oStream << location << ".OtherArg=" << std::boolalpha << m_otherArg << "&";
  }
  if (m_recursiveArgHasBeenSet) {
    Aws::String recursiveArgLocationAndMember(location);
    recursiveArgLocationAndMember += ".RecursiveArg";
    m_recursiveArg->OutputToStream(oStream, recursiveArgLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
