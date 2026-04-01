/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/devops-agent/DevOpsAgentClient.h>

#include <algorithm>

namespace Aws {
namespace DevOpsAgent {

template <typename DerivedClient = DevOpsAgentClient>
class DevOpsAgentWaiter {
 public:
};
}  // namespace DevOpsAgent
}  // namespace Aws
