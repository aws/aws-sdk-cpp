/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ApplicationSignals {

template <typename DerivedClient = ApplicationSignalsClient>
class ApplicationSignalsWaiter {
 public:
};
}  // namespace ApplicationSignals
}  // namespace Aws
