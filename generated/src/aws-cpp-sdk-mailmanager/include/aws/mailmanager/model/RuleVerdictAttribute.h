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
  enum class RuleVerdictAttribute
  {
    NOT_SET,
    SPF,
    DKIM
  };

namespace RuleVerdictAttributeMapper
{
AWS_MAILMANAGER_API RuleVerdictAttribute GetRuleVerdictAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleVerdictAttribute(RuleVerdictAttribute value);
} // namespace RuleVerdictAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
