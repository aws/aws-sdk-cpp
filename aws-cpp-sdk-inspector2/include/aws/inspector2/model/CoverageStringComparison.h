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
  enum class CoverageStringComparison
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS
  };

namespace CoverageStringComparisonMapper
{
AWS_INSPECTOR2_API CoverageStringComparison GetCoverageStringComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCoverageStringComparison(CoverageStringComparison value);
} // namespace CoverageStringComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
