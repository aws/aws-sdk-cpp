/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class ComputePlatform
  {
    NOT_SET,
    Default,
    AWSLambda
  };

namespace ComputePlatformMapper
{
AWS_CODEGURUPROFILER_API ComputePlatform GetComputePlatformForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForComputePlatform(ComputePlatform value);
} // namespace ComputePlatformMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
