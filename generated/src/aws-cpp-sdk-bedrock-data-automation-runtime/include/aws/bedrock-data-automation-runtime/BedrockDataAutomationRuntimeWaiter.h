/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockDataAutomationRuntime {

template <typename DerivedClient = BedrockDataAutomationRuntimeClient>
class BedrockDataAutomationRuntimeWaiter {
 public:
};
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
