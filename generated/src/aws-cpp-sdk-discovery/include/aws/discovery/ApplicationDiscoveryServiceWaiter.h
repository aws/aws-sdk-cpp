/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/discovery/ApplicationDiscoveryServiceClient.h>

#include <algorithm>

namespace Aws {
namespace ApplicationDiscoveryService {

template <typename DerivedClient = ApplicationDiscoveryServiceClient>
class ApplicationDiscoveryServiceWaiter {
 public:
};
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
