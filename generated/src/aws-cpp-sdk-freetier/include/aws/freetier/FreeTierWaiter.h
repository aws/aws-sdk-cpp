/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/freetier/FreeTierClient.h>

#include <algorithm>

namespace Aws {
namespace FreeTier {

template <typename DerivedClient = FreeTierClient>
class FreeTierWaiter {
 public:
};
}  // namespace FreeTier
}  // namespace Aws
