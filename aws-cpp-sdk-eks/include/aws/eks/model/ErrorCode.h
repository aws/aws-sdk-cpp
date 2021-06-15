/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    SubnetNotFound,
    SecurityGroupNotFound,
    EniLimitReached,
    IpNotAvailable,
    AccessDenied,
    OperationNotPermitted,
    VpcIdNotFound,
    Unknown,
    NodeCreationFailure,
    PodEvictionFailure,
    InsufficientFreeAddresses,
    ClusterUnreachable,
    InsufficientNumberOfReplicas,
    ConfigurationConflict,
    AdmissionRequestDenied
  };

namespace ErrorCodeMapper
{
AWS_EKS_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
