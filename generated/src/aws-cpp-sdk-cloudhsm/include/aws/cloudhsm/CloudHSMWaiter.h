/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSMClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudHSM {

template <typename DerivedClient = CloudHSMClient>
class CloudHSMWaiter {
 public:
};
}  // namespace CloudHSM
}  // namespace Aws
