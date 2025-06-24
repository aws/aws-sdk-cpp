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
  enum class CodeRepositorySortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace CodeRepositorySortByMapper
{
AWS_INSPECTOR2_API CodeRepositorySortBy GetCodeRepositorySortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCodeRepositorySortBy(CodeRepositorySortBy value);
} // namespace CodeRepositorySortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
