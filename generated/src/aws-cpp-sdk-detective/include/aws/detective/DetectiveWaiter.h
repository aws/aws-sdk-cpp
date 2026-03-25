/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/detective/DetectiveClient.h>

#include <algorithm>

namespace Aws {
namespace Detective {

template <typename DerivedClient = DetectiveClient>
class DetectiveWaiter {
 public:
};
}  // namespace Detective
}  // namespace Aws
