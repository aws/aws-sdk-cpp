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
  enum class RuleDmarcPolicy
  {
    NOT_SET,
    NONE,
    QUARANTINE,
    REJECT
  };

namespace RuleDmarcPolicyMapper
{
AWS_MAILMANAGER_API RuleDmarcPolicy GetRuleDmarcPolicyForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleDmarcPolicy(RuleDmarcPolicy value);
} // namespace RuleDmarcPolicyMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
