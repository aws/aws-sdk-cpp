/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LaunchInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String LaunchInstancesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=LaunchInstances&";
  if (m_autoScalingGroupNameHasBeenSet) {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if (m_requestedCapacityHasBeenSet) {
    ss << "RequestedCapacity=" << m_requestedCapacity << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    if (m_availabilityZones.empty()) {
      ss << "AvailabilityZones=&";
    } else {
      unsigned availabilityZonesCount = 1;
      for (auto& item : m_availabilityZones) {
        ss << "AvailabilityZones.member." << availabilityZonesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZonesCount++;
      }
    }
  }

  if (m_availabilityZoneIdsHasBeenSet) {
    if (m_availabilityZoneIds.empty()) {
      ss << "AvailabilityZoneIds=&";
    } else {
      unsigned availabilityZoneIdsCount = 1;
      for (auto& item : m_availabilityZoneIds) {
        ss << "AvailabilityZoneIds.member." << availabilityZoneIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZoneIdsCount++;
      }
    }
  }

  if (m_subnetIdsHasBeenSet) {
    if (m_subnetIds.empty()) {
      ss << "SubnetIds=&";
    } else {
      unsigned subnetIdsCount = 1;
      for (auto& item : m_subnetIds) {
        ss << "SubnetIds.member." << subnetIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        subnetIdsCount++;
      }
    }
  }

  if (m_retryStrategyHasBeenSet) {
    ss << "RetryStrategy=" << StringUtils::URLEncode(RetryStrategyMapper::GetNameForRetryStrategy(m_retryStrategy)) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

void LaunchInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
