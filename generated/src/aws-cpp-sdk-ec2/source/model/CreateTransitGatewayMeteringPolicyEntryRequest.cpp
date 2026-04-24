/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateTransitGatewayMeteringPolicyEntryRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateTransitGatewayMeteringPolicyEntryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayMeteringPolicyEntry&";
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    ss << "TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }

  if (m_policyRuleNumberHasBeenSet) {
    ss << "PolicyRuleNumber=" << m_policyRuleNumber << "&";
  }

  if (m_sourceTransitGatewayAttachmentIdHasBeenSet) {
    ss << "SourceTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_sourceTransitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_sourceTransitGatewayAttachmentTypeHasBeenSet) {
    ss << "SourceTransitGatewayAttachmentType="
       << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
              m_sourceTransitGatewayAttachmentType))
       << "&";
  }

  if (m_sourceCidrBlockHasBeenSet) {
    ss << "SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }

  if (m_sourcePortRangeHasBeenSet) {
    ss << "SourcePortRange=" << StringUtils::URLEncode(m_sourcePortRange.c_str()) << "&";
  }

  if (m_destinationTransitGatewayAttachmentIdHasBeenSet) {
    ss << "DestinationTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_destinationTransitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_destinationTransitGatewayAttachmentTypeHasBeenSet) {
    ss << "DestinationTransitGatewayAttachmentType="
       << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
              m_destinationTransitGatewayAttachmentType))
       << "&";
  }

  if (m_destinationCidrBlockHasBeenSet) {
    ss << "DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if (m_destinationPortRangeHasBeenSet) {
    ss << "DestinationPortRange=" << StringUtils::URLEncode(m_destinationPortRange.c_str()) << "&";
  }

  if (m_protocolHasBeenSet) {
    ss << "Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if (m_meteredAccountHasBeenSet) {
    ss << "MeteredAccount="
       << StringUtils::URLEncode(TransitGatewayMeteringPayerTypeMapper::GetNameForTransitGatewayMeteringPayerType(m_meteredAccount)) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateTransitGatewayMeteringPolicyEntryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
