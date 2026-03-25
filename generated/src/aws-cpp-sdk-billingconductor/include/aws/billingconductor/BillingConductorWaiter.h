/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BillingConductor {

template <typename DerivedClient = BillingConductorClient>
class BillingConductorWaiter {
 public:
};
}  // namespace BillingConductor
}  // namespace Aws
