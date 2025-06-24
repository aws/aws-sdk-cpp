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
  enum class CodeRepositoryProviderType
  {
    NOT_SET,
    GITHUB,
    GITLAB_SELF_MANAGED
  };

namespace CodeRepositoryProviderTypeMapper
{
AWS_INSPECTOR2_API CodeRepositoryProviderType GetCodeRepositoryProviderTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCodeRepositoryProviderType(CodeRepositoryProviderType value);
} // namespace CodeRepositoryProviderTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
