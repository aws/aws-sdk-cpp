/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class RuleOperator
  {
    NOT_SET,
    EQUALS,
    LESS_THAN,
    LESS_THAN_OR_EQUALS,
    GREATER_THAN,
    GREATER_THAN_OR_EQUALS,
    IN,
    NOT_IN,
    CONTAINS
  };

namespace RuleOperatorMapper
{
AWS_DEVICEFARM_API RuleOperator GetRuleOperatorForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForRuleOperator(RuleOperator value);
} // namespace RuleOperatorMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
