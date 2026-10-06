/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lambda-web/LambdaWebClient.h>

#include <algorithm>

namespace Aws {
namespace LambdaWeb {

template <typename DerivedClient = LambdaWebClient>
class LambdaWebWaiter {
 public:
};
}  // namespace LambdaWeb
}  // namespace Aws
