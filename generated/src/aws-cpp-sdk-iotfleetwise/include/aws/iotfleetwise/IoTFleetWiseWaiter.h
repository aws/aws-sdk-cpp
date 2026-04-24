/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iotfleetwise/IoTFleetWiseClient.h>

#include <algorithm>

namespace Aws {
namespace IoTFleetWise {

template <typename DerivedClient = IoTFleetWiseClient>
class IoTFleetWiseWaiter {
 public:
};
}  // namespace IoTFleetWise
}  // namespace Aws
