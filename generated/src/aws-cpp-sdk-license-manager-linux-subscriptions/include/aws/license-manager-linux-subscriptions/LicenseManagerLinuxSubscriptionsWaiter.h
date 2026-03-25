/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClient.h>

#include <algorithm>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {

template <typename DerivedClient = LicenseManagerLinuxSubscriptionsClient>
class LicenseManagerLinuxSubscriptionsWaiter {
 public:
};
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
