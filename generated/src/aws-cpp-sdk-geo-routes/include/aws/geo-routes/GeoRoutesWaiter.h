/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/geo-routes/GeoRoutesClient.h>

#include <algorithm>

namespace Aws {
namespace GeoRoutes {

template <typename DerivedClient = GeoRoutesClient>
class GeoRoutesWaiter {
 public:
};
}  // namespace GeoRoutes
}  // namespace Aws
