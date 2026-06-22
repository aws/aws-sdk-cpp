/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class NetworkConnectorLastUpdateStatusReasonCode {
  NOT_SET,
  DisallowedByVpcEncryptionControl,
  Ec2RequestLimitExceeded,
  InsufficientRolePermissions,
  InternalError,
  InvalidSecurityGroup,
  InvalidSubnet,
  SubnetOutOfIPAddresses
};

namespace NetworkConnectorLastUpdateStatusReasonCodeMapper {
AWS_LAMBDACORE_API NetworkConnectorLastUpdateStatusReasonCode GetNetworkConnectorLastUpdateStatusReasonCodeForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForNetworkConnectorLastUpdateStatusReasonCode(NetworkConnectorLastUpdateStatusReasonCode value);
}  // namespace NetworkConnectorLastUpdateStatusReasonCodeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
