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
  enum class RuleIpOperator
  {
    NOT_SET,
    CIDR_MATCHES,
    NOT_CIDR_MATCHES
  };

namespace RuleIpOperatorMapper
{
AWS_MAILMANAGER_API RuleIpOperator GetRuleIpOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleIpOperator(RuleIpOperator value);
} // namespace RuleIpOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
