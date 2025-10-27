/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/Finspace_EXPORTS.h>

namespace Aws {
namespace finspace {
namespace Model {
enum class RuleAction { NOT_SET, allow, deny };

namespace RuleActionMapper {
AWS_FINSPACE_API RuleAction GetRuleActionForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForRuleAction(RuleAction value);
}  // namespace RuleActionMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
