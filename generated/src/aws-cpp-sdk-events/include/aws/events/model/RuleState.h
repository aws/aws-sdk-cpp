/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/CloudWatchEvents_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvents {
namespace Model {
enum class RuleState { NOT_SET, ENABLED, DISABLED };

namespace RuleStateMapper {
AWS_CLOUDWATCHEVENTS_API RuleState GetRuleStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForRuleState(RuleState value);
}  // namespace RuleStateMapper
}  // namespace Model
}  // namespace CloudWatchEvents
}  // namespace Aws
