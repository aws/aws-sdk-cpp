/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/dlm/DLMClient.h>

#include <algorithm>

namespace Aws {
namespace DLM {

template <typename DerivedClient = DLMClient>
class DLMWaiter {
 public:
};
}  // namespace DLM
}  // namespace Aws
