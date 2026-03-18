/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iotthingsgraph/IoTThingsGraphClient.h>

#include <algorithm>

namespace Aws {
namespace IoTThingsGraph {

template <typename DerivedClient = IoTThingsGraphClient>
class IoTThingsGraphWaiter {
 public:
};
}  // namespace IoTThingsGraph
}  // namespace Aws
