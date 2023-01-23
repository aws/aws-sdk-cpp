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
  enum class AuthType
  {
    NOT_SET,
    OAUTH,
    BASIC_AUTH,
    PERSONAL_ACCESS_TOKEN
  };

namespace AuthTypeMapper
{
AWS_CODEBUILD_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForAuthType(AuthType value);
} // namespace AuthTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
