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
  enum class MatchType
  {
    NOT_SET,
    RULE_BASED_MATCHING,
    ML_BASED_MATCHING
  };

namespace MatchTypeMapper
{
AWS_CUSTOMERPROFILES_API MatchType GetMatchTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForMatchType(MatchType value);
} // namespace MatchTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
