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
  enum class RuleNumberOperator
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    LESS_THAN,
    GREATER_THAN,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN_OR_EQUAL
  };

namespace RuleNumberOperatorMapper
{
AWS_MAILMANAGER_API RuleNumberOperator GetRuleNumberOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleNumberOperator(RuleNumberOperator value);
} // namespace RuleNumberOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
