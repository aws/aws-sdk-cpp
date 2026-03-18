/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/globalaccelerator/GlobalAcceleratorClient.h>

#include <algorithm>

namespace Aws {
namespace GlobalAccelerator {

template <typename DerivedClient = GlobalAcceleratorClient>
class GlobalAcceleratorWaiter {
 public:
};
}  // namespace GlobalAccelerator
}  // namespace Aws
