/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/cur/CostandUsageReportServiceClient.h>

#include <algorithm>

namespace Aws {
namespace CostandUsageReportService {

template <typename DerivedClient = CostandUsageReportServiceClient>
class CostandUsageReportServiceWaiter {
 public:
};
}  // namespace CostandUsageReportService
}  // namespace Aws
