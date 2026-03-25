/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace Bedrock {

template <typename DerivedClient = BedrockClient>
class BedrockWaiter {
 public:
};
}  // namespace Bedrock
}  // namespace Aws
