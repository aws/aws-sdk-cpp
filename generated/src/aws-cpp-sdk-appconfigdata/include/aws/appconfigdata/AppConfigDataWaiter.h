/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigDataClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppConfigData {

template <typename DerivedClient = AppConfigDataClient>
class AppConfigDataWaiter {
 public:
};
}  // namespace AppConfigData
}  // namespace Aws
