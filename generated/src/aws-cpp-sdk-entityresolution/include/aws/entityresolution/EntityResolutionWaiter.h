/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/entityresolution/EntityResolutionClient.h>

#include <algorithm>

namespace Aws {
namespace EntityResolution {

template <typename DerivedClient = EntityResolutionClient>
class EntityResolutionWaiter {
 public:
};
}  // namespace EntityResolution
}  // namespace Aws
