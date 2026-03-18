/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockDataAutomation {

template <typename DerivedClient = BedrockDataAutomationClient>
class BedrockDataAutomationWaiter {
 public:
};
}  // namespace BedrockDataAutomation
}  // namespace Aws
