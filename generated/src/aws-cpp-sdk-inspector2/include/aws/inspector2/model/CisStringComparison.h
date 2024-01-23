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
  enum class CisStringComparison
  {
    NOT_SET,
    EQUALS,
    PREFIX,
    NOT_EQUALS
  };

namespace CisStringComparisonMapper
{
AWS_INSPECTOR2_API CisStringComparison GetCisStringComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisStringComparison(CisStringComparison value);
} // namespace CisStringComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
