/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateTransitGatewayNetworkFunctionAttachmentRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateTransitGatewayNetworkFunctionAttachmentRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayNetworkFunctionAttachment&";
  if (m_transitGatewayIdHasBeenSet) {
    ss << "TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_serviceNameHasBeenSet) {
    ss << "ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesCount = 1;
    for (auto& item : m_availabilityZones) {
      ss << "AvailabilityZone." << availabilityZonesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }

  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsCount = 1;
    for (auto& item : m_availabilityZoneIds) {
      ss << "AvailabilityZoneId." << availabilityZoneIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZoneIdsCount++;
    }
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateTransitGatewayNetworkFunctionAttachmentRequest::DumpBodyToUrl(Aws::Http::URI& uri) const {
  uri.SetQueryString(SerializePayload());
}
