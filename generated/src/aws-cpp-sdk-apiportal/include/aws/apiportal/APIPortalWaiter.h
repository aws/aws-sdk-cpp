/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace APIPortal {

template <typename DerivedClient = APIPortalClient>
class APIPortalWaiter {
 public:
};
}  // namespace APIPortal
}  // namespace Aws
