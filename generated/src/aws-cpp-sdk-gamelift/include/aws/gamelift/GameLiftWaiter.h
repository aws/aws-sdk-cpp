/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/gamelift/GameLiftClient.h>

#include <algorithm>

namespace Aws {
namespace GameLift {

template <typename DerivedClient = GameLiftClient>
class GameLiftWaiter {
 public:
};
}  // namespace GameLift
}  // namespace Aws
