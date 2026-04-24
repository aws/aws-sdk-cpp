/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/EventBridge_EXPORTS.h>

namespace Aws {
namespace EventBridge {
namespace Model {
enum class RuleState { NOT_SET, ENABLED, DISABLED, ENABLED_WITH_ALL_CLOUDTRAIL_MANAGEMENT_EVENTS };

namespace RuleStateMapper {
AWS_EVENTBRIDGE_API RuleState GetRuleStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForRuleState(RuleState value);
}  // namespace RuleStateMapper
}  // namespace Model
}  // namespace EventBridge
}  // namespace Aws
