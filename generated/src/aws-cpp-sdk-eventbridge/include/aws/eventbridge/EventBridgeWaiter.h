/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/eventbridge/EventBridgeClient.h>

#include <algorithm>

namespace Aws {
namespace EventBridge {

template <typename DerivedClient = EventBridgeClient>
class EventBridgeWaiter {
 public:
};
}  // namespace EventBridge
}  // namespace Aws
