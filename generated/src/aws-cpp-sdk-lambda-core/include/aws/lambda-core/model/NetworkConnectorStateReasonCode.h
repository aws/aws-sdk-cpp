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
enum class NetworkConnectorStateReasonCode {
  NOT_SET,
  DisallowedByVpcEncryptionControl,
  Ec2RequestLimitExceeded,
  InsufficientRolePermissions,
  InternalError,
  InvalidSecurityGroup,
  InvalidSubnet,
  SubnetOutOfIPAddresses
};

namespace NetworkConnectorStateReasonCodeMapper {
AWS_LAMBDACORE_API NetworkConnectorStateReasonCode GetNetworkConnectorStateReasonCodeForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForNetworkConnectorStateReasonCode(NetworkConnectorStateReasonCode value);
}  // namespace NetworkConnectorStateReasonCodeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
