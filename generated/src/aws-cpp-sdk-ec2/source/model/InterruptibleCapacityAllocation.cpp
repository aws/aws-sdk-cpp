/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InterruptibleCapacityAllocation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InterruptibleCapacityAllocation::InterruptibleCapacityAllocation(const XmlNode& xmlNode) { *this = xmlNode; }

InterruptibleCapacityAllocation& InterruptibleCapacityAllocation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if (!instanceCountNode.IsNull()) {
      m_instanceCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode targetInstanceCountNode = resultNode.FirstChild("targetInstanceCount");
    if (!targetInstanceCountNode.IsNull()) {
      m_targetInstanceCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetInstanceCountNode.GetText()).c_str()).c_str());
      m_targetInstanceCountHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = InterruptibleCapacityReservationAllocationStatusMapper::GetInterruptibleCapacityReservationAllocationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode interruptibleCapacityReservationIdNode = resultNode.FirstChild("interruptibleCapacityReservationId");
    if (!interruptibleCapacityReservationIdNode.IsNull()) {
      m_interruptibleCapacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(interruptibleCapacityReservationIdNode.GetText());
      m_interruptibleCapacityReservationIdHasBeenSet = true;
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

void InterruptibleCapacityAllocation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if (m_targetInstanceCountHasBeenSet) {
    oStream << location << index << locationValue << ".TargetInstanceCount=" << m_targetInstanceCount << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status="
            << StringUtils::URLEncode(
                   InterruptibleCapacityReservationAllocationStatusMapper::GetNameForInterruptibleCapacityReservationAllocationStatus(
                       m_status))
            << "&";
  }

  if (m_interruptibleCapacityReservationIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".InterruptibleCapacityReservationId=" << StringUtils::URLEncode(m_interruptibleCapacityReservationId.c_str()) << "&";
  }

  if (m_interruptionTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".InterruptionType=" << StringUtils::URLEncode(InterruptionTypeMapper::GetNameForInterruptionType(m_interruptionType))
            << "&";
  }
}

void InterruptibleCapacityAllocation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if (m_targetInstanceCountHasBeenSet) {
    oStream << location << ".TargetInstanceCount=" << m_targetInstanceCount << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status="
            << StringUtils::URLEncode(
                   InterruptibleCapacityReservationAllocationStatusMapper::GetNameForInterruptibleCapacityReservationAllocationStatus(
                       m_status))
            << "&";
  }
  if (m_interruptibleCapacityReservationIdHasBeenSet) {
    oStream << location << ".InterruptibleCapacityReservationId=" << StringUtils::URLEncode(m_interruptibleCapacityReservationId.c_str())
            << "&";
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
