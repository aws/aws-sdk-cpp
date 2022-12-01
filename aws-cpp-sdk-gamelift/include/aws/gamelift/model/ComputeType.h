/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ComputeType
  {
    NOT_SET,
    EC2,
    ANYWHERE
  };

namespace ComputeTypeMapper
{
AWS_GAMELIFT_API ComputeType GetComputeTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForComputeType(ComputeType value);
} // namespace ComputeTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
