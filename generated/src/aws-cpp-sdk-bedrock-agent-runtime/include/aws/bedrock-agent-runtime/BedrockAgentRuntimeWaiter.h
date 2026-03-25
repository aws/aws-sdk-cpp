/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockAgentRuntime {

template <typename DerivedClient = BedrockAgentRuntimeClient>
class BedrockAgentRuntimeWaiter {
 public:
};
}  // namespace BedrockAgentRuntime
}  // namespace Aws
