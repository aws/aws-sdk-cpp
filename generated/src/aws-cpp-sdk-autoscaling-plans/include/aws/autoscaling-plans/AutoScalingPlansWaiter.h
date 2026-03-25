/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlansClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AutoScalingPlans {

template <typename DerivedClient = AutoScalingPlansClient>
class AutoScalingPlansWaiter {
 public:
};
}  // namespace AutoScalingPlans
}  // namespace Aws
