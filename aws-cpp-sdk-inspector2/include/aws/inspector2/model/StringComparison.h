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
  enum class StringComparison
  {
    NOT_SET,
    EQUALS,
    PREFIX,
    NOT_EQUALS
  };

namespace StringComparisonMapper
{
AWS_INSPECTOR2_API StringComparison GetStringComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForStringComparison(StringComparison value);
} // namespace StringComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
