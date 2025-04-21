/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class MatchOption
  {
    NOT_SET,
    EQUALS,
    ABSENT,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS,
    GREATER_THAN_OR_EQUAL,
    CASE_SENSITIVE,
    CASE_INSENSITIVE
  };

namespace MatchOptionMapper
{
AWS_BUDGETS_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
