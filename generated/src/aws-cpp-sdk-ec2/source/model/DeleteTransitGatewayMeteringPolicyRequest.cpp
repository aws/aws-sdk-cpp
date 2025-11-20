/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteTransitGatewayMeteringPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayMeteringPolicy&";
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    ss << "TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteTransitGatewayMeteringPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
