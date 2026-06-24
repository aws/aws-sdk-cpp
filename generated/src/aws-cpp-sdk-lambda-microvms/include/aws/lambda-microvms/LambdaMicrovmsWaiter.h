/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lambda-microvms/LambdaMicrovmsClient.h>

#include <algorithm>

namespace Aws {
namespace LambdaMicrovms {

template <typename DerivedClient = LambdaMicrovmsClient>
class LambdaMicrovmsWaiter {
 public:
};
}  // namespace LambdaMicrovms
}  // namespace Aws
