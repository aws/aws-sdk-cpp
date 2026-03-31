/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CleanRooms {

template <typename DerivedClient = CleanRoomsClient>
class CleanRoomsWaiter {
 public:
};
}  // namespace CleanRooms
}  // namespace Aws
