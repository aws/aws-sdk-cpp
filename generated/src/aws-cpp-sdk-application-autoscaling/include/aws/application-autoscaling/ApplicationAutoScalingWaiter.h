/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ApplicationAutoScaling {

template <typename DerivedClient = ApplicationAutoScalingClient>
class ApplicationAutoScalingWaiter {
 public:
};
}  // namespace ApplicationAutoScaling
}  // namespace Aws
