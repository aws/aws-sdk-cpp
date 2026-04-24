/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/grafana/ManagedGrafanaClient.h>

#include <algorithm>

namespace Aws {
namespace ManagedGrafana {

template <typename DerivedClient = ManagedGrafanaClient>
class ManagedGrafanaWaiter {
 public:
};
}  // namespace ManagedGrafana
}  // namespace Aws
