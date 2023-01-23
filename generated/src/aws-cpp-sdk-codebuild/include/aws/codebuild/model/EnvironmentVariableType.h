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
  enum class EnvironmentVariableType
  {
    NOT_SET,
    PLAINTEXT,
    PARAMETER_STORE,
    SECRETS_MANAGER
  };

namespace EnvironmentVariableTypeMapper
{
AWS_CODEBUILD_API EnvironmentVariableType GetEnvironmentVariableTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForEnvironmentVariableType(EnvironmentVariableType value);
} // namespace EnvironmentVariableTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
