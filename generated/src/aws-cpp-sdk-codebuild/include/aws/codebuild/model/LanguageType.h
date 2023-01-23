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
  enum class LanguageType
  {
    NOT_SET,
    JAVA,
    PYTHON,
    NODE_JS,
    RUBY,
    GOLANG,
    DOCKER,
    ANDROID_,
    DOTNET,
    BASE,
    PHP
  };

namespace LanguageTypeMapper
{
AWS_CODEBUILD_API LanguageType GetLanguageTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForLanguageType(LanguageType value);
} // namespace LanguageTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
