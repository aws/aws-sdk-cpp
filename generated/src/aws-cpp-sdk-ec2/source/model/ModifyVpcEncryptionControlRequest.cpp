/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyVpcEncryptionControlRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVpcEncryptionControlRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEncryptionControl&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_vpcEncryptionControlIdHasBeenSet) {
    ss << "VpcEncryptionControlId=" << StringUtils::URLEncode(m_vpcEncryptionControlId.c_str()) << "&";
  }

  if (m_modeHasBeenSet) {
    ss << "Mode=" << StringUtils::URLEncode(VpcEncryptionControlModeMapper::GetNameForVpcEncryptionControlMode(m_mode)) << "&";
  }

  if (m_internetGatewayExclusionHasBeenSet) {
    ss << "InternetGatewayExclusion="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_internetGatewayExclusion))
       << "&";
  }

  if (m_egressOnlyInternetGatewayExclusionHasBeenSet) {
    ss << "EgressOnlyInternetGatewayExclusion="
       << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
              m_egressOnlyInternetGatewayExclusion))
       << "&";
  }

  if (m_natGatewayExclusionHasBeenSet) {
    ss << "NatGatewayExclusion="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_natGatewayExclusion))
       << "&";
  }

  if (m_virtualPrivateGatewayExclusionHasBeenSet) {
    ss << "VirtualPrivateGatewayExclusion="
       << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
              m_virtualPrivateGatewayExclusion))
       << "&";
  }

  if (m_vpcPeeringExclusionHasBeenSet) {
    ss << "VpcPeeringExclusion="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcPeeringExclusion))
       << "&";
  }

  if (m_lambdaExclusionHasBeenSet) {
    ss << "LambdaExclusion="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_lambdaExclusion))
       << "&";
  }

  if (m_vpcLatticeExclusionHasBeenSet) {
    ss << "VpcLatticeExclusion="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcLatticeExclusion))
       << "&";
  }

  if (m_elasticFileSystemExclusionHasBeenSet) {
    ss << "ElasticFileSystemExclusion="
       << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
              m_elasticFileSystemExclusion))
       << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyVpcEncryptionControlRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
