/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class SubscriptionStatus
  {
    NOT_SET,
    ACTIVE,
    DEACTIVATED,
    PENDING,
    READY
  };

namespace SubscriptionStatusMapper
{
AWS_SECURITYLAKE_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
} // namespace SubscriptionStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
