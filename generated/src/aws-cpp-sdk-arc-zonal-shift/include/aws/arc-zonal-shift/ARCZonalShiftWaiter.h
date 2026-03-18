/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ARCZonalShift {

template <typename DerivedClient = ARCZonalShiftClient>
class ARCZonalShiftWaiter {
 public:
};
}  // namespace ARCZonalShift
}  // namespace Aws
