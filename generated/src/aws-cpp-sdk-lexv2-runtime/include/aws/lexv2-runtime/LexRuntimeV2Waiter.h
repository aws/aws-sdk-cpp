/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lexv2-runtime/LexRuntimeV2Client.h>

#include <algorithm>

namespace Aws {
namespace LexRuntimeV2 {

template <typename DerivedClient = LexRuntimeV2Client>
class LexRuntimeV2Waiter {
 public:
};
}  // namespace LexRuntimeV2
}  // namespace Aws
