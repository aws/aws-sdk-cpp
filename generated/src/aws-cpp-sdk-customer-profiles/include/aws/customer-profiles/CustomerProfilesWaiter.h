/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/customer-profiles/CustomerProfilesClient.h>

#include <algorithm>

namespace Aws {
namespace CustomerProfiles {

template <typename DerivedClient = CustomerProfilesClient>
class CustomerProfilesWaiter {
 public:
};
}  // namespace CustomerProfiles
}  // namespace Aws
