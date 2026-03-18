/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/datasync/DataSyncClient.h>

#include <algorithm>

namespace Aws {
namespace DataSync {

template <typename DerivedClient = DataSyncClient>
class DataSyncWaiter {
 public:
};
}  // namespace DataSync
}  // namespace Aws
