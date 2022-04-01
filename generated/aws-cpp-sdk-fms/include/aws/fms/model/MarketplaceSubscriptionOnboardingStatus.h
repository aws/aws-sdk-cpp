/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class MarketplaceSubscriptionOnboardingStatus
  {
    NOT_SET,
    NO_SUBSCRIPTION,
    NOT_COMPLETE,
    COMPLETE
  };

namespace MarketplaceSubscriptionOnboardingStatusMapper
{
AWS_FMS_API MarketplaceSubscriptionOnboardingStatus GetMarketplaceSubscriptionOnboardingStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForMarketplaceSubscriptionOnboardingStatus(MarketplaceSubscriptionOnboardingStatus value);
} // namespace MarketplaceSubscriptionOnboardingStatusMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
