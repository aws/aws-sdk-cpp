/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class LustreDeploymentType
  {
    NOT_SET,
    SCRATCH_1,
    SCRATCH_2,
    PERSISTENT_1
  };

namespace LustreDeploymentTypeMapper
{
AWS_FSX_API LustreDeploymentType GetLustreDeploymentTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForLustreDeploymentType(LustreDeploymentType value);
} // namespace LustreDeploymentTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
