/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/evs/EVSClient.h>

#include <algorithm>

namespace Aws {
namespace EVS {

template <typename DerivedClient = EVSClient>
class EVSWaiter {
 public:
};
}  // namespace EVS
}  // namespace Aws
