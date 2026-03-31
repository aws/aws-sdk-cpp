/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneClient.h>

#include <algorithm>

namespace Aws {
namespace IoTJobsDataPlane {

template <typename DerivedClient = IoTJobsDataPlaneClient>
class IoTJobsDataPlaneWaiter {
 public:
};
}  // namespace IoTJobsDataPlane
}  // namespace Aws
