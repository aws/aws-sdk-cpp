/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/greengrassv2/GreengrassV2Client.h>

#include <algorithm>

namespace Aws {
namespace GreengrassV2 {

template <typename DerivedClient = GreengrassV2Client>
class GreengrassV2Waiter {
 public:
};
}  // namespace GreengrassV2
}  // namespace Aws
