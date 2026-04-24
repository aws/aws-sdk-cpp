/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClient.h>

#include <algorithm>

namespace Aws {
namespace LicenseManagerUserSubscriptions {

template <typename DerivedClient = LicenseManagerUserSubscriptionsClient>
class LicenseManagerUserSubscriptionsWaiter {
 public:
};
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
