/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/devops-guru/DevOpsGuruClient.h>

#include <algorithm>

namespace Aws {
namespace DevOpsGuru {

template <typename DerivedClient = DevOpsGuruClient>
class DevOpsGuruWaiter {
 public:
};
}  // namespace DevOpsGuru
}  // namespace Aws
