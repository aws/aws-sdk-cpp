/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AvailabilityZoneAddress.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AvailabilityZoneAddress::AvailabilityZoneAddress(const XmlNode& xmlNode) { *this = xmlNode; }

AvailabilityZoneAddress& AvailabilityZoneAddress::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("AvailabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode allocationIdsNode = resultNode.FirstChild("AllocationId");
    if (!allocationIdsNode.IsNull()) {
      XmlNode allocationIdsMember = allocationIdsNode.FirstChild("AllocationId");
      m_allocationIdsHasBeenSet = !allocationIdsMember.IsNull();
      while (!allocationIdsMember.IsNull()) {
        m_allocationIds.push_back(allocationIdsMember.GetText());
        allocationIdsMember = allocationIdsMember.NextNode("AllocationId");
      }

      m_allocationIdsHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZoneAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_allocationIdsHasBeenSet) {
    unsigned allocationIdsIdx = 1;
    for (auto& item : m_allocationIds) {
      oStream << location << index << locationValue << ".AllocationId." << allocationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void AvailabilityZoneAddress::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_allocationIdsHasBeenSet) {
    unsigned allocationIdsIdx = 1;
    for (auto& item : m_allocationIds) {
      oStream << location << ".AllocationId." << allocationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
