/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class MachineType
  {
    NOT_SET,
    GENERAL,
    NVME
  };

namespace MachineTypeMapper
{
AWS_CODEBUILD_API MachineType GetMachineTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForMachineType(MachineType value);
} // namespace MachineTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
