/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class RuleApplyOrder { NOT_SET, BeforeAccountRules, AfterAccountRules };

namespace RuleApplyOrderMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API RuleApplyOrder GetRuleApplyOrderForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForRuleApplyOrder(RuleApplyOrder value);
}  // namespace RuleApplyOrderMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
