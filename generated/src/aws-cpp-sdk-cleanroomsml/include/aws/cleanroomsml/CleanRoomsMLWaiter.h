/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CleanRoomsML {

template <typename DerivedClient = CleanRoomsMLClient>
class CleanRoomsMLWaiter {
 public:
};
}  // namespace CleanRoomsML
}  // namespace Aws
