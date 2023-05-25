/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class SubscriptionType
  {
    NOT_SET,
    SNS,
    EMAIL
  };

namespace SubscriptionTypeMapper
{
AWS_BUDGETS_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
} // namespace SubscriptionTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
