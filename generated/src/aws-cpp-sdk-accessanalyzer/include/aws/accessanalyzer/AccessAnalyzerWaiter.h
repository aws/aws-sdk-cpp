/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AccessAnalyzer {

template <typename DerivedClient = AccessAnalyzerClient>
class AccessAnalyzerWaiter {
 public:
};
}  // namespace AccessAnalyzer
}  // namespace Aws
