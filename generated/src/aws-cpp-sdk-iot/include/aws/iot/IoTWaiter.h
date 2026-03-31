/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iot/IoTClient.h>

#include <algorithm>

namespace Aws {
namespace IoT {

template <typename DerivedClient = IoTClient>
class IoTWaiter {
 public:
};
}  // namespace IoT
}  // namespace Aws
