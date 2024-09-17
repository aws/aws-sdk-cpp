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
  enum class RuleStringEmailAttribute
  {
    NOT_SET,
    MAIL_FROM,
    HELO,
    RECIPIENT,
    SENDER,
    FROM,
    SUBJECT,
    TO,
    CC
  };

namespace RuleStringEmailAttributeMapper
{
AWS_MAILMANAGER_API RuleStringEmailAttribute GetRuleStringEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleStringEmailAttribute(RuleStringEmailAttribute value);
} // namespace RuleStringEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
