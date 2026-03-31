/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ivs-realtime/IvsrealtimeClient.h>

#include <algorithm>

namespace Aws {
namespace ivsrealtime {

template <typename DerivedClient = IvsrealtimeClient>
class IvsrealtimeWaiter {
 public:
};
}  // namespace ivsrealtime
}  // namespace Aws
