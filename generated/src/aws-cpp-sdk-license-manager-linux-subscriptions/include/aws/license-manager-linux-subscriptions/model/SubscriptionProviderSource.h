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
  enum class SubscriptionProviderSource
  {
    NOT_SET,
    RedHat
  };

namespace SubscriptionProviderSourceMapper
{
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API SubscriptionProviderSource GetSubscriptionProviderSourceForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForSubscriptionProviderSource(SubscriptionProviderSource value);
} // namespace SubscriptionProviderSourceMapper
} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
