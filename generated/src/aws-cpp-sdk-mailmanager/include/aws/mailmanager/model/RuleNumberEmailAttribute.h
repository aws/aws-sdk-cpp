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
  enum class RuleNumberEmailAttribute
  {
    NOT_SET,
    MESSAGE_SIZE
  };

namespace RuleNumberEmailAttributeMapper
{
AWS_MAILMANAGER_API RuleNumberEmailAttribute GetRuleNumberEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleNumberEmailAttribute(RuleNumberEmailAttribute value);
} // namespace RuleNumberEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
