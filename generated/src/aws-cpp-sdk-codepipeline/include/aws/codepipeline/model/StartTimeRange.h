/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class StartTimeRange
  {
    NOT_SET,
    Latest,
    All
  };

namespace StartTimeRangeMapper
{
AWS_CODEPIPELINE_API StartTimeRange GetStartTimeRangeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForStartTimeRange(StartTimeRange value);
} // namespace StartTimeRangeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
