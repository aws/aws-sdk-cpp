/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace MigrationHub {

template <typename DerivedClient = MigrationHubClient>
class MigrationHubWaiter {
 public:
};
}  // namespace MigrationHub
}  // namespace Aws
