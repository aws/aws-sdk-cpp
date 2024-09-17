/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class CpuArchitectureType
  {
    NOT_SET,
    x86_64,
    arm64
  };

namespace CpuArchitectureTypeMapper
{
AWS_DEADLINE_API CpuArchitectureType GetCpuArchitectureTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForCpuArchitectureType(CpuArchitectureType value);
} // namespace CpuArchitectureTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
