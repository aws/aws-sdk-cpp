/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class MatchOption
  {
    NOT_SET,
    EQUALS,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS,
    GREATER_THAN_OR_EQUAL
  };

namespace MatchOptionMapper
{
AWS_FREETIER_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws
