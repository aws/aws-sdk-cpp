/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/forecastquery/ForecastQueryServiceClient.h>

#include <algorithm>

namespace Aws {
namespace ForecastQueryService {

template <typename DerivedClient = ForecastQueryServiceClient>
class ForecastQueryServiceWaiter {
 public:
};
}  // namespace ForecastQueryService
}  // namespace Aws
