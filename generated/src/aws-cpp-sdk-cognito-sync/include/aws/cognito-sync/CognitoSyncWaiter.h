/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CognitoSync {

template <typename DerivedClient = CognitoSyncClient>
class CognitoSyncWaiter {
 public:
};
}  // namespace CognitoSync
}  // namespace Aws
