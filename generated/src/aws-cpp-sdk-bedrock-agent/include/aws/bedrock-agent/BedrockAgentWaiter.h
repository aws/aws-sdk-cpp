/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockAgent {

template <typename DerivedClient = BedrockAgentClient>
class BedrockAgentWaiter {
 public:
};
}  // namespace BedrockAgent
}  // namespace Aws
