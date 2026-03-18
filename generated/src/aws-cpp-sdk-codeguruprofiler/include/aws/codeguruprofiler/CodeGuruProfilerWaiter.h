/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeGuruProfiler {

template <typename DerivedClient = CodeGuruProfilerClient>
class CodeGuruProfilerWaiter {
 public:
};
}  // namespace CodeGuruProfiler
}  // namespace Aws
