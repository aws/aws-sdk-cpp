/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectSchedulingClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectScheduling {

template <typename DerivedClient = ConnectSchedulingClient>
class ConnectSchedulingWaiter {
 public:
};
}  // namespace ConnectScheduling
}  // namespace Aws
