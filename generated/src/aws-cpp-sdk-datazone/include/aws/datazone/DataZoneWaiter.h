/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/datazone/DataZoneClient.h>

#include <algorithm>

namespace Aws {
namespace DataZone {

template <typename DerivedClient = DataZoneClient>
class DataZoneWaiter {
 public:
};
}  // namespace DataZone
}  // namespace Aws
