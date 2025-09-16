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

RecursiveXmlShapesOutputNested1::RecursiveXmlShapesOutputNested1(const XmlNode& xmlNode) { *this = xmlNode; }

RecursiveXmlShapesOutputNested1& RecursiveXmlShapesOutputNested1::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
    XmlNode nestedNode = resultNode.FirstChild("nested");
    if (!nestedNode.IsNull()) {
      m_nested = Aws::MakeShared<RecursiveXmlShapesOutputNested2>("RecursiveXmlShapesOutputNested1", nestedNode);
      m_nestedHasBeenSet = true;
    }
  }

  return *this;
}

void RecursiveXmlShapesOutputNested1::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_fooHasBeenSet) {
    oStream << location << index << locationValue << ".foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }

  if (m_nestedHasBeenSet) {
    Aws::StringStream nestedLocationAndMemberSs;
    nestedLocationAndMemberSs << location << index << locationValue << ".nested";
    m_nested->OutputToStream(oStream, nestedLocationAndMemberSs.str().c_str());
  }
}

void RecursiveXmlShapesOutputNested1::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fooHasBeenSet) {
    oStream << location << ".foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }
  if (m_nestedHasBeenSet) {
    Aws::String nestedLocationAndMember(location);
    nestedLocationAndMember += ".nested";
    m_nested->OutputToStream(oStream, nestedLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
