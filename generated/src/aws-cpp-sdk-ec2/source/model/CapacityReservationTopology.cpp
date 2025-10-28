/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityReservationTopology.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityReservationTopology::CapacityReservationTopology(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityReservationTopology& CapacityReservationTopology::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if (!capacityReservationIdNode.IsNull()) {
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode capacityBlockIdNode = resultNode.FirstChild("capacityBlockId");
    if (!capacityBlockIdNode.IsNull()) {
      m_capacityBlockId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockIdNode.GetText());
      m_capacityBlockIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if (!instanceTypeNode.IsNull()) {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if (!groupNameNode.IsNull()) {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
    XmlNode networkNodesNode = resultNode.FirstChild("networkNodeSet");
    if (!networkNodesNode.IsNull()) {
      XmlNode networkNodesMember = networkNodesNode.FirstChild("item");
      m_networkNodesHasBeenSet = !networkNodesMember.IsNull();
      while (!networkNodesMember.IsNull()) {
        m_networkNodes.push_back(networkNodesMember.GetText());
        networkNodesMember = networkNodesMember.NextNode("item");
      }

      m_networkNodesHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationTopology::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_capacityReservationIdHasBeenSet) {
    oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str())
            << "&";
  }

  if (m_capacityBlockIdHasBeenSet) {
    oStream << location << index << locationValue << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if (m_instanceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if (m_groupNameHasBeenSet) {
    oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if (m_networkNodesHasBeenSet) {
    unsigned networkNodesIdx = 1;
    for (auto& item : m_networkNodes) {
      oStream << location << index << locationValue << ".NetworkNodeSet." << networkNodesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
}

void CapacityReservationTopology::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_capacityReservationIdHasBeenSet) {
    oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if (m_capacityBlockIdHasBeenSet) {
    oStream << location << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if (m_instanceTypeHasBeenSet) {
    oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if (m_groupNameHasBeenSet) {
    oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if (m_networkNodesHasBeenSet) {
    unsigned networkNodesIdx = 1;
    for (auto& item : m_networkNodes) {
      oStream << location << ".NetworkNodeSet." << networkNodesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
