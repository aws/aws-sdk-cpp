/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyTransitGatewayNetworkFunctionAttachmentRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyTransitGatewayNetworkFunctionAttachmentRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyTransitGatewayNetworkFunctionAttachment&";
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_addAvailabilityZonesHasBeenSet) {
    unsigned addAvailabilityZonesCount = 1;
    for (auto& item : m_addAvailabilityZones) {
      ss << "AddAvailabilityZone." << addAvailabilityZonesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      addAvailabilityZonesCount++;
    }
  }

  if (m_addAvailabilityZoneIdsHasBeenSet) {
    unsigned addAvailabilityZoneIdsCount = 1;
    for (auto& item : m_addAvailabilityZoneIds) {
      ss << "AddAvailabilityZoneId." << addAvailabilityZoneIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      addAvailabilityZoneIdsCount++;
    }
  }

  if (m_removeAvailabilityZonesHasBeenSet) {
    unsigned removeAvailabilityZonesCount = 1;
    for (auto& item : m_removeAvailabilityZones) {
      ss << "RemoveAvailabilityZone." << removeAvailabilityZonesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      removeAvailabilityZonesCount++;
    }
  }

  if (m_removeAvailabilityZoneIdsHasBeenSet) {
    unsigned removeAvailabilityZoneIdsCount = 1;
    for (auto& item : m_removeAvailabilityZoneIds) {
      ss << "RemoveAvailabilityZoneId." << removeAvailabilityZoneIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      removeAvailabilityZoneIdsCount++;
    }
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyTransitGatewayNetworkFunctionAttachmentRequest::DumpBodyToUrl(Aws::Http::URI& uri) const {
  uri.SetQueryString(SerializePayload());
}
