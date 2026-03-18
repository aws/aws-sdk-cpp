/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/events/CloudWatchEventsClient.h>

#include <algorithm>

namespace Aws {
namespace CloudWatchEvents {

template <typename DerivedClient = CloudWatchEventsClient>
class CloudWatchEventsWaiter {
 public:
};
}  // namespace CloudWatchEvents
}  // namespace Aws
