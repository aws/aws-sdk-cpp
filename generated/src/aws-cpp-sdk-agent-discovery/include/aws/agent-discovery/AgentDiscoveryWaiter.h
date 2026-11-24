/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscoveryClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AgentDiscovery {

template <typename DerivedClient = AgentDiscoveryClient>
class AgentDiscoveryWaiter {
 public:
};
}  // namespace AgentDiscovery
}  // namespace Aws
