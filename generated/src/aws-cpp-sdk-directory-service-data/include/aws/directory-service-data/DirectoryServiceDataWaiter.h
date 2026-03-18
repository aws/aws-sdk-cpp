/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/directory-service-data/DirectoryServiceDataClient.h>

#include <algorithm>

namespace Aws {
namespace DirectoryServiceData {

template <typename DerivedClient = DirectoryServiceDataClient>
class DirectoryServiceDataWaiter {
 public:
};
}  // namespace DirectoryServiceData
}  // namespace Aws
