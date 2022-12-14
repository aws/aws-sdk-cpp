/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
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
    CASE_SENSITIVE,
    CASE_INSENSITIVE,
    GREATER_THAN_OR_EQUAL
  };

namespace MatchOptionMapper
{
AWS_COSTEXPLORER_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
