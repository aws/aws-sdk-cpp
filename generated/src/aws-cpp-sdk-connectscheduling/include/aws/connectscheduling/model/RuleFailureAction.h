/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectScheduling {
namespace Model {
enum class RuleFailureAction { NOT_SET, REJECT, OVERRIDE };

namespace RuleFailureActionMapper {
AWS_CONNECTSCHEDULING_API RuleFailureAction GetRuleFailureActionForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForRuleFailureAction(RuleFailureAction value);
}  // namespace RuleFailureActionMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
