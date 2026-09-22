/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudWatchOmni {

template <typename DerivedClient = CloudWatchOmniClient>
class CloudWatchOmniWaiter {
 public:
};
}  // namespace CloudWatchOmni
}  // namespace Aws
