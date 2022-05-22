/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class ComputeType
  {
    NOT_SET,
    CPU,
    GPU_AND_CPU
  };

namespace ComputeTypeMapper
{
AWS_ROBOMAKER_API ComputeType GetComputeTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForComputeType(ComputeType value);
} // namespace ComputeTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
