/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ConditionOperator
  {
    NOT_SET,
    GreaterThan,
    GreaterThanOrEquals,
    LessThan,
    LessThanOrEquals,
    Equals,
    NotEquals,
    Contains,
    NotContains,
    Exists,
    NotExists,
    BeginsWith
  };

namespace ConditionOperatorMapper
{
AWS_KENDRA_API ConditionOperator GetConditionOperatorForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConditionOperator(ConditionOperator value);
} // namespace ConditionOperatorMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
