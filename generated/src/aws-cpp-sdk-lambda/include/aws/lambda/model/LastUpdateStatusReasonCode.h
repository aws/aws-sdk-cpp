/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class LastUpdateStatusReasonCode {
  NOT_SET,
  EniLimitExceeded,
  InsufficientRolePermissions,
  InvalidConfiguration,
  InternalError,
  SubnetOutOfIPAddresses,
  InvalidSubnet,
  InvalidSecurityGroup,
  ImageDeleted,
  ImageAccessDenied,
  InvalidImage,
  KMSKeyAccessDenied,
  KMSKeyNotFound,
  InvalidStateKMSKey,
  DisabledKMSKey,
  EFSIOError,
  EFSMountConnectivityError,
  EFSMountFailure,
  EFSMountTimeout,
  InvalidRuntime,
  InvalidZipFileException,
  FunctionError,
  VcpuLimitExceeded,
  CapacityProviderScalingLimitExceeded,
  InsufficientCapacity,
  EC2RequestLimitExceeded,
  FunctionError_InitTimeout,
  FunctionError_RuntimeInitError,
  FunctionError_ExtensionInitError,
  FunctionError_InvalidEntryPoint,
  FunctionError_InvalidWorkingDirectory,
  FunctionError_PermissionDenied,
  FunctionError_TooManyExtensions,
  FunctionError_InitResourceExhausted,
  DisallowedByVpcEncryptionControl
};

namespace LastUpdateStatusReasonCodeMapper {
AWS_LAMBDA_API LastUpdateStatusReasonCode GetLastUpdateStatusReasonCodeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForLastUpdateStatusReasonCode(LastUpdateStatusReasonCode value);
}  // namespace LastUpdateStatusReasonCodeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
