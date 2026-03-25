/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfilerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ApplicationCostProfiler {

template <typename DerivedClient = ApplicationCostProfilerClient>
class ApplicationCostProfilerWaiter {
 public:
};
}  // namespace ApplicationCostProfiler
}  // namespace Aws
