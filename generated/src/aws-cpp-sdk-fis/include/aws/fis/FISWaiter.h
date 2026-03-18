/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/fis/FISClient.h>

#include <algorithm>

namespace Aws {
namespace FIS {

template <typename DerivedClient = FISClient>
class FISWaiter {
 public:
};
}  // namespace FIS
}  // namespace Aws
