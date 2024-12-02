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
  enum class EventTriggerLogicalOperator
  {
    NOT_SET,
    ANY,
    ALL,
    NONE
  };

namespace EventTriggerLogicalOperatorMapper
{
AWS_CUSTOMERPROFILES_API EventTriggerLogicalOperator GetEventTriggerLogicalOperatorForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForEventTriggerLogicalOperator(EventTriggerLogicalOperator value);
} // namespace EventTriggerLogicalOperatorMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
