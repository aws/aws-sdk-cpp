/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kendra-ranking/KendraRankingClient.h>

#include <algorithm>

namespace Aws {
namespace KendraRanking {

template <typename DerivedClient = KendraRankingClient>
class KendraRankingWaiter {
 public:
};
}  // namespace KendraRanking
}  // namespace Aws
