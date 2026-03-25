/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/dataexchange/DataExchangeClient.h>

#include <algorithm>

namespace Aws {
namespace DataExchange {

template <typename DerivedClient = DataExchangeClient>
class DataExchangeWaiter {
 public:
};
}  // namespace DataExchange
}  // namespace Aws
