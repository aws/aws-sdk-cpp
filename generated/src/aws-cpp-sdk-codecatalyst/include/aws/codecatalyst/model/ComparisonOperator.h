/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    EQ,
    GT,
    GE,
    LT,
    LE
  };

namespace ComparisonOperatorMapper
{
AWS_CODECATALYST_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
