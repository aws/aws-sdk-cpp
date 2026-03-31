/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/emr-serverless/EMRServerlessClient.h>

#include <algorithm>

namespace Aws {
namespace EMRServerless {

template <typename DerivedClient = EMRServerlessClient>
class EMRServerlessWaiter {
 public:
};
}  // namespace EMRServerless
}  // namespace Aws
