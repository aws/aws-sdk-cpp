/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class RuleSchema { NOT_SET, CloudTrail };

namespace RuleSchemaMapper {
AWS_GUARDDUTY_API RuleSchema GetRuleSchemaForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForRuleSchema(RuleSchema value);
}  // namespace RuleSchemaMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
