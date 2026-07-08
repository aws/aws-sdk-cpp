/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyAccountVpcEncryptionControlRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyAccountVpcEncryptionControlRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyAccountVpcEncryptionControl&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_modeHasBeenSet) {
    ss << "Mode=" << StringUtils::URLEncode(AccountVpcEncryptionControlModeMapper::GetNameForAccountVpcEncryptionControlMode(m_mode))
       << "&";
  }

  if (m_internetGatewayHasBeenSet) {
    ss << "InternetGateway="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_internetGateway))
       << "&";
  }

  if (m_egressOnlyInternetGatewayHasBeenSet) {
    ss << "EgressOnlyInternetGateway="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_egressOnlyInternetGateway))
       << "&";
  }

  if (m_natGatewayHasBeenSet) {
    ss << "NatGateway="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_natGateway))
       << "&";
  }

  if (m_virtualPrivateGatewayHasBeenSet) {
    ss << "VirtualPrivateGateway="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_virtualPrivateGateway))
       << "&";
  }

  if (m_vpcPeeringHasBeenSet) {
    ss << "VpcPeering="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcPeering))
       << "&";
  }

  if (m_lambdaHasBeenSet) {
    ss << "Lambda="
       << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_lambda))
       << "&";
  }

  if (m_vpcLatticeHasBeenSet) {
    ss << "VpcLattice="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcLattice))
       << "&";
  }

  if (m_elasticFileSystemHasBeenSet) {
    ss << "ElasticFileSystem="
       << StringUtils::URLEncode(
              VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_elasticFileSystem))
       << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyAccountVpcEncryptionControlRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
