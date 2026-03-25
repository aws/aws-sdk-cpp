/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace Budgets {

template <typename DerivedClient = BudgetsClient>
class BudgetsWaiter {
 public:
};
}  // namespace Budgets
}  // namespace Aws
