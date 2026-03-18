/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/location/LocationServiceClient.h>

#include <algorithm>

namespace Aws {
namespace LocationService {

template <typename DerivedClient = LocationServiceClient>
class LocationServiceWaiter {
 public:
};
}  // namespace LocationService
}  // namespace Aws
