/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2Client.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudHSMV2 {

template <typename DerivedClient = CloudHSMV2Client>
class CloudHSMV2Waiter {
 public:
};
}  // namespace CloudHSMV2
}  // namespace Aws
