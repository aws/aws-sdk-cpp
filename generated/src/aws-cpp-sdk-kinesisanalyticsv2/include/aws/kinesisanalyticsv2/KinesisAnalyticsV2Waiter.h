/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Client.h>

#include <algorithm>

namespace Aws {
namespace KinesisAnalyticsV2 {

template <typename DerivedClient = KinesisAnalyticsV2Client>
class KinesisAnalyticsV2Waiter {
 public:
};
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
