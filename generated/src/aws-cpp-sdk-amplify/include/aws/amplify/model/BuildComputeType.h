/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class BuildComputeType
  {
    NOT_SET,
    STANDARD_8GB,
    LARGE_16GB,
    XLARGE_72GB
  };

namespace BuildComputeTypeMapper
{
AWS_AMPLIFY_API BuildComputeType GetBuildComputeTypeForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForBuildComputeType(BuildComputeType value);
} // namespace BuildComputeTypeMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
