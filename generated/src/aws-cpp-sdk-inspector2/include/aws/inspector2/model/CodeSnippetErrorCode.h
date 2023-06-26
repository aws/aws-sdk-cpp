/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class CodeSnippetErrorCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    ACCESS_DENIED,
    CODE_SNIPPET_NOT_FOUND,
    INVALID_INPUT
  };

namespace CodeSnippetErrorCodeMapper
{
AWS_INSPECTOR2_API CodeSnippetErrorCode GetCodeSnippetErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCodeSnippetErrorCode(CodeSnippetErrorCode value);
} // namespace CodeSnippetErrorCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
