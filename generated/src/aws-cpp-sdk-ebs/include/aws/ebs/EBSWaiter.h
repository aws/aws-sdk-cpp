/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ebs/EBSClient.h>

#include <algorithm>

namespace Aws {
namespace EBS {

template <typename DerivedClient = EBSClient>
class EBSWaiter {
 public:
};
}  // namespace EBS
}  // namespace Aws
