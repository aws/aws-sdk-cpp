/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/inspector/InspectorClient.h>

#include <algorithm>

namespace Aws {
namespace Inspector {

template <typename DerivedClient = InspectorClient>
class InspectorWaiter {
 public:
};
}  // namespace Inspector
}  // namespace Aws
