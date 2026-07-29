/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateTransitGatewayPolicyTableEntryRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateTransitGatewayPolicyTableEntryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayPolicyTableEntry&";
  if (m_transitGatewayPolicyTableIdHasBeenSet) {
    ss << "TransitGatewayPolicyTableId=" << StringUtils::URLEncode(m_transitGatewayPolicyTableId.c_str()) << "&";
  }

  if (m_policyRuleNumberHasBeenSet) {
    ss << "PolicyRuleNumber=" << StringUtils::URLEncode(m_policyRuleNumber.c_str()) << "&";
  }

  if (m_policyRuleHasBeenSet) {
    m_policyRule.OutputToStream(ss, "PolicyRule");
  }

  if (m_targetRouteTableIdHasBeenSet) {
    ss << "TargetRouteTableId=" << StringUtils::URLEncode(m_targetRouteTableId.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateTransitGatewayPolicyTableEntryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
