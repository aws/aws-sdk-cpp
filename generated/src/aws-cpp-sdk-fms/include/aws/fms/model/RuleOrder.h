/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class RuleOrder
  {
    NOT_SET,
    STRICT_ORDER,
    DEFAULT_ACTION_ORDER
  };

namespace RuleOrderMapper
{
AWS_FMS_API RuleOrder GetRuleOrderForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForRuleOrder(RuleOrder value);
} // namespace RuleOrderMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
