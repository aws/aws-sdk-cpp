/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CostExplorer {

template <typename DerivedClient = CostExplorerClient>
class CostExplorerWaiter {
 public:
};
}  // namespace CostExplorer
}  // namespace Aws
