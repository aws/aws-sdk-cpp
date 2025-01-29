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
  enum class RuleAddressListEmailAttribute
  {
    NOT_SET,
    RECIPIENT,
    MAIL_FROM,
    SENDER,
    FROM,
    TO,
    CC
  };

namespace RuleAddressListEmailAttributeMapper
{
AWS_MAILMANAGER_API RuleAddressListEmailAttribute GetRuleAddressListEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleAddressListEmailAttribute(RuleAddressListEmailAttribute value);
} // namespace RuleAddressListEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
