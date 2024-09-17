/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class RuleStringOperator
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS
  };

namespace RuleStringOperatorMapper
{
AWS_MAILMANAGER_API RuleStringOperator GetRuleStringOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleStringOperator(RuleStringOperator value);
} // namespace RuleStringOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
