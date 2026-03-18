/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/m2/MainframeModernizationClient.h>

#include <algorithm>

namespace Aws {
namespace MainframeModernization {

template <typename DerivedClient = MainframeModernizationClient>
class MainframeModernizationWaiter {
 public:
};
}  // namespace MainframeModernization
}  // namespace Aws
