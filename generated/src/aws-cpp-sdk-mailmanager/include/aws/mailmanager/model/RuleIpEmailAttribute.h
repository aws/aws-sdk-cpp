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
  enum class RuleIpEmailAttribute
  {
    NOT_SET,
    SOURCE_IP
  };

namespace RuleIpEmailAttributeMapper
{
AWS_MAILMANAGER_API RuleIpEmailAttribute GetRuleIpEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleIpEmailAttribute(RuleIpEmailAttribute value);
} // namespace RuleIpEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
