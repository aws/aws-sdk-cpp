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
  enum class AMITypes
  {
    NOT_SET,
    AL2_x86_64,
    AL2_x86_64_GPU,
    AL2_ARM_64,
    CUSTOM,
    BOTTLEROCKET_ARM_64,
    BOTTLEROCKET_x86_64,
    BOTTLEROCKET_ARM_64_NVIDIA,
    BOTTLEROCKET_x86_64_NVIDIA,
    WINDOWS_CORE_2019_x86_64,
    WINDOWS_FULL_2019_x86_64,
    WINDOWS_CORE_2022_x86_64,
    WINDOWS_FULL_2022_x86_64
  };

namespace AMITypesMapper
{
AWS_EKS_API AMITypes GetAMITypesForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForAMITypes(AMITypes value);
} // namespace AMITypesMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
