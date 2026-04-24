/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/guardduty/GuardDutyClient.h>

#include <algorithm>

namespace Aws {
namespace GuardDuty {

template <typename DerivedClient = GuardDutyClient>
class GuardDutyWaiter {
 public:
};
}  // namespace GuardDuty
}  // namespace Aws
