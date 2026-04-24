/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTowerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ControlTower {

template <typename DerivedClient = ControlTowerClient>
class ControlTowerWaiter {
 public:
};
}  // namespace ControlTower
}  // namespace Aws
