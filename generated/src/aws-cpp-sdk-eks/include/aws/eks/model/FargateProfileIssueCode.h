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
  enum class FargateProfileIssueCode
  {
    NOT_SET,
    PodExecutionRoleAlreadyInUse,
    AccessDenied,
    ClusterUnreachable,
    InternalFailure
  };

namespace FargateProfileIssueCodeMapper
{
AWS_EKS_API FargateProfileIssueCode GetFargateProfileIssueCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForFargateProfileIssueCode(FargateProfileIssueCode value);
} // namespace FargateProfileIssueCodeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
