/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesOutputNested1.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2Protocol {
namespace Model {

RecursiveXmlShapesOutputNested2::RecursiveXmlShapesOutputNested2(const XmlNode& xmlNode) { *this = xmlNode; }

RecursiveXmlShapesOutputNested2& RecursiveXmlShapesOutputNested2::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode barNode = resultNode.FirstChild("bar");
    if (!barNode.IsNull()) {
      m_bar = Aws::Utils::Xml::DecodeEscapedXmlText(barNode.GetText());
      m_barHasBeenSet = true;
    }
    XmlNode recursiveMemberNode = resultNode.FirstChild("recursiveMember");
    if (!recursiveMemberNode.IsNull()) {
      m_recursiveMember = Aws::MakeShared<RecursiveXmlShapesOutputNested1>("RecursiveXmlShapesOutputNested2", recursiveMemberNode);
      m_recursiveMemberHasBeenSet = true;
    }
  }

  return *this;
}

void RecursiveXmlShapesOutputNested2::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_barHasBeenSet) {
    oStream << location << index << locationValue << ".bar=" << StringUtils::URLEncode(m_bar.c_str()) << "&";
  }

  if (m_recursiveMemberHasBeenSet) {
    Aws::StringStream recursiveMemberLocationAndMemberSs;
    recursiveMemberLocationAndMemberSs << location << index << locationValue << ".recursiveMember";
    m_recursiveMember->OutputToStream(oStream, recursiveMemberLocationAndMemberSs.str().c_str());
  }
}

void RecursiveXmlShapesOutputNested2::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_barHasBeenSet) {
    oStream << location << ".bar=" << StringUtils::URLEncode(m_bar.c_str()) << "&";
  }
  if (m_recursiveMemberHasBeenSet) {
    Aws::String recursiveMemberLocationAndMember(location);
    recursiveMemberLocationAndMember += ".recursiveMember";
    m_recursiveMember->OutputToStream(oStream, recursiveMemberLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
