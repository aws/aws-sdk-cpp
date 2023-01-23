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
  enum class BlockerType
  {
    NOT_SET,
    Schedule
  };

namespace BlockerTypeMapper
{
AWS_CODEPIPELINE_API BlockerType GetBlockerTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForBlockerType(BlockerType value);
} // namespace BlockerTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
