/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimeClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AccountAccessRuntime {

template <typename DerivedClient = AccountAccessRuntimeClient>
class AccountAccessRuntimeWaiter {
 public:
};
}  // namespace AccountAccessRuntime
}  // namespace Aws
