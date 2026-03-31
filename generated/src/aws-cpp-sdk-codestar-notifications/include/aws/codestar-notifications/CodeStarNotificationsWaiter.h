/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotificationsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeStarNotifications {

template <typename DerivedClient = CodeStarNotificationsClient>
class CodeStarNotificationsWaiter {
 public:
};
}  // namespace CodeStarNotifications
}  // namespace Aws
