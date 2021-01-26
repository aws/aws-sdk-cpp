/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class RuleState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RuleStateMapper
{
AWS_EVENTBRIDGE_API RuleState GetRuleStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForRuleState(RuleState value);
} // namespace RuleStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
