/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kendra/KendraClient.h>

#include <algorithm>

namespace Aws {
namespace kendra {

template <typename DerivedClient = KendraClient>
class KendraWaiter {
 public:
};
}  // namespace kendra
}  // namespace Aws
