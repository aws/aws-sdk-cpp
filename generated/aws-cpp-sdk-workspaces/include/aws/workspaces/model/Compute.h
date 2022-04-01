/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class Compute
  {
    NOT_SET,
    VALUE,
    STANDARD,
    PERFORMANCE,
    POWER,
    GRAPHICS,
    POWERPRO,
    GRAPHICSPRO
  };

namespace ComputeMapper
{
AWS_WORKSPACES_API Compute GetComputeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCompute(Compute value);
} // namespace ComputeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
