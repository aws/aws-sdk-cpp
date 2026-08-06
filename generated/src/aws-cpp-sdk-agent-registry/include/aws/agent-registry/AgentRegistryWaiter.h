/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AgentRegistry {

template <typename DerivedClient = AgentRegistryClient>
class AgentRegistryWaiter {
 public:
};
}  // namespace AgentRegistry
}  // namespace Aws
