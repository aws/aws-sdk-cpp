/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BCMDashboards {

template <typename DerivedClient = BCMDashboardsClient>
class BCMDashboardsWaiter {
 public:
};
}  // namespace BCMDashboards
}  // namespace Aws
