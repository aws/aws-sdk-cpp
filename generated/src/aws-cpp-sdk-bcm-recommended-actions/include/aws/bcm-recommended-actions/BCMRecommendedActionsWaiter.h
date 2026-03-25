/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActionsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BCMRecommendedActions {

template <typename DerivedClient = BCMRecommendedActionsClient>
class BCMRecommendedActionsWaiter {
 public:
};
}  // namespace BCMRecommendedActions
}  // namespace Aws
