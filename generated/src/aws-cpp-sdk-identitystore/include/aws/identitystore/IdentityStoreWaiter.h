/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/identitystore/IdentityStoreClient.h>

#include <algorithm>

namespace Aws {
namespace IdentityStore {

template <typename DerivedClient = IdentityStoreClient>
class IdentityStoreWaiter {
 public:
};
}  // namespace IdentityStore
}  // namespace Aws
