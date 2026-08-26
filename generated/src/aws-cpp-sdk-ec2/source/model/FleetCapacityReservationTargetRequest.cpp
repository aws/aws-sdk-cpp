/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FleetCapacityReservationTargetRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FleetCapacityReservationTargetRequest::FleetCapacityReservationTargetRequest(const XmlNode& xmlNode) { *this = xmlNode; }

FleetCapacityReservationTargetRequest& FleetCapacityReservationTargetRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationIdsNode = resultNode.FirstChild("CapacityReservationId");
    if (!capacityReservationIdsNode.IsNull()) {
      XmlNode capacityReservationIdsMember = capacityReservationIdsNode.FirstChild("item");
      m_capacityReservationIdsHasBeenSet = !capacityReservationIdsMember.IsNull();
      while (!capacityReservationIdsMember.IsNull()) {
        m_capacityReservationIds.push_back(capacityReservationIdsMember.GetText());
        capacityReservationIdsMember = capacityReservationIdsMember.NextNode("item");
      }

      m_capacityReservationIdsHasBeenSet = true;
    }
    XmlNode capacityReservationResourceGroupArnsNode = resultNode.FirstChild("CapacityReservationResourceGroupArn");
    if (!capacityReservationResourceGroupArnsNode.IsNull()) {
      XmlNode capacityReservationResourceGroupArnsMember = capacityReservationResourceGroupArnsNode.FirstChild("item");
      m_capacityReservationResourceGroupArnsHasBeenSet = !capacityReservationResourceGroupArnsMember.IsNull();
      while (!capacityReservationResourceGroupArnsMember.IsNull()) {
        m_capacityReservationResourceGroupArns.push_back(capacityReservationResourceGroupArnsMember.GetText());
        capacityReservationResourceGroupArnsMember = capacityReservationResourceGroupArnsMember.NextNode("item");
      }

      m_capacityReservationResourceGroupArnsHasBeenSet = true;
    }
  }

  return *this;
}

void FleetCapacityReservationTargetRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_capacityReservationIdsHasBeenSet) {
    unsigned capacityReservationIdsIdx = 1;
    for (auto& item : m_capacityReservationIds) {
      oStream << location << index << locationValue << ".CapacityReservationId." << capacityReservationIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_capacityReservationResourceGroupArnsHasBeenSet) {
    unsigned capacityReservationResourceGroupArnsIdx = 1;
    for (auto& item : m_capacityReservationResourceGroupArns) {
      oStream << location << index << locationValue << ".CapacityReservationResourceGroupArn." << capacityReservationResourceGroupArnsIdx++
              << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void FleetCapacityReservationTargetRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_capacityReservationIdsHasBeenSet) {
    unsigned capacityReservationIdsIdx = 1;
    for (auto& item : m_capacityReservationIds) {
      oStream << location << ".CapacityReservationId." << capacityReservationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_capacityReservationResourceGroupArnsHasBeenSet) {
    unsigned capacityReservationResourceGroupArnsIdx = 1;
    for (auto& item : m_capacityReservationResourceGroupArns) {
      oStream << location << ".CapacityReservationResourceGroupArn." << capacityReservationResourceGroupArnsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
