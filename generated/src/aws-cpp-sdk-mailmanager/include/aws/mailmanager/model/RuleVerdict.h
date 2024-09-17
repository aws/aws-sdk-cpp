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
  enum class RuleVerdict
  {
    NOT_SET,
    PASS,
    FAIL,
    GRAY,
    PROCESSING_FAILED
  };

namespace RuleVerdictMapper
{
AWS_MAILMANAGER_API RuleVerdict GetRuleVerdictForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleVerdict(RuleVerdict value);
} // namespace RuleVerdictMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
