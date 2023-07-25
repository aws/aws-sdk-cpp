/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class RuleBasedMatchingStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    ACTIVE
  };

namespace RuleBasedMatchingStatusMapper
{
AWS_CUSTOMERPROFILES_API RuleBasedMatchingStatus GetRuleBasedMatchingStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForRuleBasedMatchingStatus(RuleBasedMatchingStatus value);
} // namespace RuleBasedMatchingStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
