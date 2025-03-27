/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class RuleAction
  {
    NOT_SET,
    CREATE_LISTING_CHANGE_SET,
    CREATE_SUBSCRIPTION_REQUEST
  };

namespace RuleActionMapper
{
AWS_DATAZONE_API RuleAction GetRuleActionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRuleAction(RuleAction value);
} // namespace RuleActionMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
