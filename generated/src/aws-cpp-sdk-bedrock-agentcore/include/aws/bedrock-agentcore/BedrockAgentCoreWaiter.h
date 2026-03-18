/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockAgentCore {

template <typename DerivedClient = BedrockAgentCoreClient>
class BedrockAgentCoreWaiter {
 public:
};
}  // namespace BedrockAgentCore
}  // namespace Aws
