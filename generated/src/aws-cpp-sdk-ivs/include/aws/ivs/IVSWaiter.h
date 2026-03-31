/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ivs/IVSClient.h>

#include <algorithm>

namespace Aws {
namespace IVS {

template <typename DerivedClient = IVSClient>
class IVSWaiter {
 public:
};
}  // namespace IVS
}  // namespace Aws
