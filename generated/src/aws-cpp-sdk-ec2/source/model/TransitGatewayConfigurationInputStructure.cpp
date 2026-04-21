/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayConfigurationInputStructure.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayConfigurationInputStructure::TransitGatewayConfigurationInputStructure(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayConfigurationInputStructure& TransitGatewayConfigurationInputStructure::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayIdNode = resultNode.FirstChild("TransitGatewayId");
    if (!transitGatewayIdNode.IsNull()) {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZone");
    if (!availabilityZonesNode.IsNull()) {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("item");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
      while (!availabilityZonesMember.IsNull()) {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("item");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode availabilityZoneIdsNode = resultNode.FirstChild("AvailabilityZoneId");
    if (!availabilityZoneIdsNode.IsNull()) {
      XmlNode availabilityZoneIdsMember = availabilityZoneIdsNode.FirstChild("item");
      m_availabilityZoneIdsHasBeenSet = !availabilityZoneIdsMember.IsNull();
      while (!availabilityZoneIdsMember.IsNull()) {
        m_availabilityZoneIds.push_back(availabilityZoneIdsMember.GetText());
        availabilityZoneIdsMember = availabilityZoneIdsMember.NextNode("item");
      }

      m_availabilityZoneIdsHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayConfigurationInputStructure::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                               const char* locationValue) const {
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << index << locationValue << ".AvailabilityZoneId." << availabilityZoneIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void TransitGatewayConfigurationInputStructure::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << ".AvailabilityZoneId." << availabilityZoneIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
