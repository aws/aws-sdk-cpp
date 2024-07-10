/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  enum class SubscriptionProviderStatus
  {
    NOT_SET,
    ACTIVE,
    INVALID,
    PENDING
  };

namespace SubscriptionProviderStatusMapper
{
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API SubscriptionProviderStatus GetSubscriptionProviderStatusForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForSubscriptionProviderStatus(SubscriptionProviderStatus value);
} // namespace SubscriptionProviderStatusMapper
} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
