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
  enum class TargetFilterName
  {
    NOT_SET,
    TARGET_STATUS
  };

namespace TargetFilterNameMapper
{
AWS_CODEPIPELINE_API TargetFilterName GetTargetFilterNameForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForTargetFilterName(TargetFilterName value);
} // namespace TargetFilterNameMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
