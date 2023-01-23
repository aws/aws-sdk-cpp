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
  enum class StageRetryMode
  {
    NOT_SET,
    FAILED_ACTIONS
  };

namespace StageRetryModeMapper
{
AWS_CODEPIPELINE_API StageRetryMode GetStageRetryModeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForStageRetryMode(StageRetryMode value);
} // namespace StageRetryModeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
