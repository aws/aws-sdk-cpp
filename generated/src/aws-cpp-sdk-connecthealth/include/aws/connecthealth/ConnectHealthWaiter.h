/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ConnectHealth {

template <typename DerivedClient = ConnectHealthClient>
class ConnectHealthWaiter {
 public:
};
}  // namespace ConnectHealth
}  // namespace Aws
