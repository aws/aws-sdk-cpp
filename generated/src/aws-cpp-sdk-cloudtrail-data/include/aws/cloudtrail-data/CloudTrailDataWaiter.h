/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailDataClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudTrailData {

template <typename DerivedClient = CloudTrailDataClient>
class CloudTrailDataWaiter {
 public:
};
}  // namespace CloudTrailData
}  // namespace Aws
