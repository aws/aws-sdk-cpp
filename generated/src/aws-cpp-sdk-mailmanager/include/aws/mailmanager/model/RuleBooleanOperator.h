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
  enum class RuleBooleanOperator
  {
    NOT_SET,
    IS_TRUE,
    IS_FALSE
  };

namespace RuleBooleanOperatorMapper
{
AWS_MAILMANAGER_API RuleBooleanOperator GetRuleBooleanOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleBooleanOperator(RuleBooleanOperator value);
} // namespace RuleBooleanOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
