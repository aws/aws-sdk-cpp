/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>

#include <algorithm>

namespace Aws {
namespace IoTDeviceAdvisor {

template <typename DerivedClient = IoTDeviceAdvisorClient>
class IoTDeviceAdvisorWaiter {
 public:
};
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
