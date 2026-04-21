/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayConfigurationDescribeEndpointStructure.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayConfigurationDescribeEndpointStructure::TransitGatewayConfigurationDescribeEndpointStructure(const XmlNode& xmlNode) {
  *this = xmlNode;
}

TransitGatewayConfigurationDescribeEndpointStructure& TransitGatewayConfigurationDescribeEndpointStructure::operator=(
    const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if (!transitGatewayIdNode.IsNull()) {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if (!transitGatewayAttachmentIdNode.IsNull()) {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("availabilityZoneSet");
    if (!availabilityZonesNode.IsNull()) {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("item");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
      while (!availabilityZonesMember.IsNull()) {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("item");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode availabilityZoneIdsNode = resultNode.FirstChild("availabilityZoneIdSet");
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

void TransitGatewayConfigurationDescribeEndpointStructure::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                                          const char* locationValue) const {
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << index << locationValue << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << index << locationValue << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void TransitGatewayConfigurationDescribeEndpointStructure::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
