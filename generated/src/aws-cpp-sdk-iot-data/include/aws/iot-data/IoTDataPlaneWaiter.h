/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iot-data/IoTDataPlaneClient.h>

#include <algorithm>

namespace Aws {
namespace IoTDataPlane {

template <typename DerivedClient = IoTDataPlaneClient>
class IoTDataPlaneWaiter {
 public:
};
}  // namespace IoTDataPlane
}  // namespace Aws
