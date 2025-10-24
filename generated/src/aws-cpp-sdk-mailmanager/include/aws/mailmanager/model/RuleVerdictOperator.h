/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Model {
enum class RuleVerdictOperator { NOT_SET, EQUALS, NOT_EQUALS };

namespace RuleVerdictOperatorMapper {
AWS_MAILMANAGER_API RuleVerdictOperator GetRuleVerdictOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleVerdictOperator(RuleVerdictOperator value);
}  // namespace RuleVerdictOperatorMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
