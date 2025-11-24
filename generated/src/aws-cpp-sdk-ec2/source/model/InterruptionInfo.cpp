/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InterruptionInfo.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InterruptionInfo::InterruptionInfo(const XmlNode& xmlNode) { *this = xmlNode; }

InterruptionInfo& InterruptionInfo::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceCapacityReservationIdNode = resultNode.FirstChild("sourceCapacityReservationId");
    if (!sourceCapacityReservationIdNode.IsNull()) {
      m_sourceCapacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCapacityReservationIdNode.GetText());
      m_sourceCapacityReservationIdHasBeenSet = true;
    }
    XmlNode interruptionTypeNode = resultNode.FirstChild("interruptionType");
    if (!interruptionTypeNode.IsNull()) {
      m_interruptionType = InterruptionTypeMapper::GetInterruptionTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interruptionTypeNode.GetText()).c_str()));
      m_interruptionTypeHasBeenSet = true;
    }
  }

  return *this;
}

void InterruptionInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_sourceCapacityReservationIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".SourceCapacityReservationId=" << StringUtils::URLEncode(m_sourceCapacityReservationId.c_str()) << "&";
  }

  if (m_interruptionTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".InterruptionType=" << StringUtils::URLEncode(InterruptionTypeMapper::GetNameForInterruptionType(m_interruptionType))
            << "&";
  }
}

void InterruptionInfo::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceCapacityReservationIdHasBeenSet) {
    oStream << location << ".SourceCapacityReservationId=" << StringUtils::URLEncode(m_sourceCapacityReservationId.c_str()) << "&";
  }
  if (m_interruptionTypeHasBeenSet) {
    oStream << location
            << ".InterruptionType=" << StringUtils::URLEncode(InterruptionTypeMapper::GetNameForInterruptionType(m_interruptionType))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
