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
  enum class FargateProfileStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace FargateProfileStatusMapper
{
AWS_EKS_API FargateProfileStatus GetFargateProfileStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForFargateProfileStatus(FargateProfileStatus value);
} // namespace FargateProfileStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
