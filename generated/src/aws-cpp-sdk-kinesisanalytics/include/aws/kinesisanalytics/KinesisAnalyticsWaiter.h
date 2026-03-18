/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesisanalytics/KinesisAnalyticsClient.h>

#include <algorithm>

namespace Aws {
namespace KinesisAnalytics {

template <typename DerivedClient = KinesisAnalyticsClient>
class KinesisAnalyticsWaiter {
 public:
};
}  // namespace KinesisAnalytics
}  // namespace Aws
