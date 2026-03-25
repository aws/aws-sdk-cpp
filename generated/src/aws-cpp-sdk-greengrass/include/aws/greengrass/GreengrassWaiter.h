/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/greengrass/GreengrassClient.h>

#include <algorithm>

namespace Aws {
namespace Greengrass {

template <typename DerivedClient = GreengrassClient>
class GreengrassWaiter {
 public:
};
}  // namespace Greengrass
}  // namespace Aws
