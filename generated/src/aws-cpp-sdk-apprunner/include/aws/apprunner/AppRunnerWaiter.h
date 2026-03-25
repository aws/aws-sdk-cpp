/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppRunner {

template <typename DerivedClient = AppRunnerClient>
class AppRunnerWaiter {
 public:
};
}  // namespace AppRunner
}  // namespace Aws
