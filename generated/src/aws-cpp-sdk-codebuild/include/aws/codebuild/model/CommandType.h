/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class CommandType
  {
    NOT_SET,
    SHELL
  };

namespace CommandTypeMapper
{
AWS_CODEBUILD_API CommandType GetCommandTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForCommandType(CommandType value);
} // namespace CommandTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
