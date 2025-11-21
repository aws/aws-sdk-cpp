/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyEntryRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteTransitGatewayMeteringPolicyEntryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayMeteringPolicyEntry&";
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    ss << "TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }

  if (m_policyRuleNumberHasBeenSet) {
    ss << "PolicyRuleNumber=" << m_policyRuleNumber << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteTransitGatewayMeteringPolicyEntryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
