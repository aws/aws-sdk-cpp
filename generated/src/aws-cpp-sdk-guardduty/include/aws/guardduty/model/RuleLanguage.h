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
enum class RuleLanguage { NOT_SET, SQL };

namespace RuleLanguageMapper {
AWS_GUARDDUTY_API RuleLanguage GetRuleLanguageForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForRuleLanguage(RuleLanguage value);
}  // namespace RuleLanguageMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
