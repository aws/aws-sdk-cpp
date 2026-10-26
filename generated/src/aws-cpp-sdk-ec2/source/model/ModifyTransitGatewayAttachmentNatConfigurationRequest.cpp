/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyTransitGatewayAttachmentNatConfigurationRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyTransitGatewayAttachmentNatConfigurationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyTransitGatewayAttachmentNatConfiguration&";
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_natGatewaySupportHasBeenSet) {
    ss << "NatGatewaySupport="
       << StringUtils::URLEncode(
              TransitGatewayAttachmentNatGatewaySupportValueMapper::GetNameForTransitGatewayAttachmentNatGatewaySupportValue(
                  m_natGatewaySupport))
       << "&";
  }

  if (m_natSystemRouteSupportHasBeenSet) {
    ss << "NatSystemRouteSupport="
       << StringUtils::URLEncode(
              TransitGatewayAttachmentNatSystemRouteSupportValueMapper::GetNameForTransitGatewayAttachmentNatSystemRouteSupportValue(
                  m_natSystemRouteSupport))
       << "&";
  }

  if (m_natGatewayRulesHasBeenSet) {
    unsigned natGatewayRulesCount = 1;
    for (auto& item : m_natGatewayRules) {
      item.OutputToStream(ss, "NatGatewayRule.", natGatewayRulesCount, "");
      natGatewayRulesCount++;
    }
  }

  if (m_resetNatGatewayRulesHasBeenSet) {
    ss << "ResetNatGatewayRules=" << std::boolalpha << m_resetNatGatewayRules << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyTransitGatewayAttachmentNatConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const {
  uri.SetQueryString(SerializePayload());
}
