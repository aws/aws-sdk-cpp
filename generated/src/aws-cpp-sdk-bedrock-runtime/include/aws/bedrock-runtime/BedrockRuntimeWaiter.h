/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntimeClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BedrockRuntime {

template <typename DerivedClient = BedrockRuntimeClient>
class BedrockRuntimeWaiter {
 public:
};
}  // namespace BedrockRuntime
}  // namespace Aws
