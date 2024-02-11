/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class PreferredResourceName
  {
    NOT_SET,
    Ec2InstanceTypes
  };

namespace PreferredResourceNameMapper
{
AWS_COMPUTEOPTIMIZER_API PreferredResourceName GetPreferredResourceNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForPreferredResourceName(PreferredResourceName value);
} // namespace PreferredResourceNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
