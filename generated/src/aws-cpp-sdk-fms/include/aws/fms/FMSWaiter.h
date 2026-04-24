/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/fms/FMSClient.h>

#include <algorithm>

namespace Aws {
namespace FMS {

template <typename DerivedClient = FMSClient>
class FMSWaiter {
 public:
};
}  // namespace FMS
}  // namespace Aws
