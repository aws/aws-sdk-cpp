/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearchClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BackupSearch {

template <typename DerivedClient = BackupSearchClient>
class BackupSearchWaiter {
 public:
};
}  // namespace BackupSearch
}  // namespace Aws
