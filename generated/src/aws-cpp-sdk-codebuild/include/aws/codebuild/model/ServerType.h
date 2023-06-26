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
  enum class ServerType
  {
    NOT_SET,
    GITHUB,
    BITBUCKET,
    GITHUB_ENTERPRISE
  };

namespace ServerTypeMapper
{
AWS_CODEBUILD_API ServerType GetServerTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForServerType(ServerType value);
} // namespace ServerTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
