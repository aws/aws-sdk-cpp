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
  enum class EnvironmentVariableType
  {
    NOT_SET,
    PLAINTEXT,
    SECRETS_MANAGER
  };

namespace EnvironmentVariableTypeMapper
{
AWS_CODEPIPELINE_API EnvironmentVariableType GetEnvironmentVariableTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForEnvironmentVariableType(EnvironmentVariableType value);
} // namespace EnvironmentVariableTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
