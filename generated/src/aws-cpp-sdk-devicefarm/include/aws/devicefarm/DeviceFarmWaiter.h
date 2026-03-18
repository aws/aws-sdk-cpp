/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/devicefarm/DeviceFarmClient.h>

#include <algorithm>

namespace Aws {
namespace DeviceFarm {

template <typename DerivedClient = DeviceFarmClient>
class DeviceFarmWaiter {
 public:
};
}  // namespace DeviceFarm
}  // namespace Aws
