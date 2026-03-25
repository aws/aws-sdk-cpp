/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeCatalyst {

template <typename DerivedClient = CodeCatalystClient>
class CodeCatalystWaiter {
 public:
};
}  // namespace CodeCatalyst
}  // namespace Aws
