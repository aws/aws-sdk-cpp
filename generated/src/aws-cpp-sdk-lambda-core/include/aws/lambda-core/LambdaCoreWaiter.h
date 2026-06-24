/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lambda-core/LambdaCoreClient.h>

#include <algorithm>

namespace Aws {
namespace LambdaCore {

template <typename DerivedClient = LambdaCoreClient>
class LambdaCoreWaiter {
 public:
};
}  // namespace LambdaCore
}  // namespace Aws
