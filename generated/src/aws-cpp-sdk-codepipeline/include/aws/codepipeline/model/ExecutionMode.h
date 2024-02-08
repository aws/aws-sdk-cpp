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
  enum class ExecutionMode
  {
    NOT_SET,
    QUEUED,
    SUPERSEDED,
    PARALLEL
  };

namespace ExecutionModeMapper
{
AWS_CODEPIPELINE_API ExecutionMode GetExecutionModeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForExecutionMode(ExecutionMode value);
} // namespace ExecutionModeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
