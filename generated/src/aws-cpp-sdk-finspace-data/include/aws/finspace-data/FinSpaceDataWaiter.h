/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/finspace-data/FinSpaceDataClient.h>

#include <algorithm>

namespace Aws {
namespace FinSpaceData {

template <typename DerivedClient = FinSpaceDataClient>
class FinSpaceDataWaiter {
 public:
};
}  // namespace FinSpaceData
}  // namespace Aws
