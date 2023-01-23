/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class CPUArchitecture
  {
    NOT_SET,
    X86_64,
    ARM64
  };

namespace CPUArchitectureMapper
{
AWS_ECS_API CPUArchitecture GetCPUArchitectureForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCPUArchitecture(CPUArchitecture value);
} // namespace CPUArchitectureMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
