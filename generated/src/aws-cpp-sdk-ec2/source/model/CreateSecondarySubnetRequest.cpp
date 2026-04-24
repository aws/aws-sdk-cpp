/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateSecondarySubnetRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateSecondarySubnetRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateSecondarySubnet&";
  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipv4CidrBlockHasBeenSet) {
    ss << "Ipv4CidrBlock=" << StringUtils::URLEncode(m_ipv4CidrBlock.c_str()) << "&";
  }

  if (m_secondaryNetworkIdHasBeenSet) {
    ss << "SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateSecondarySubnetRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
