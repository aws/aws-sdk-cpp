/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/health/HealthClient.h>

#include <algorithm>

namespace Aws {
namespace Health {

template <typename DerivedClient = HealthClient>
class HealthWaiter {
 public:
};
}  // namespace Health
}  // namespace Aws
