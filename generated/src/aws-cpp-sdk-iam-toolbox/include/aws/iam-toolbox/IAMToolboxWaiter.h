/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iam-toolbox/IAMToolboxClient.h>

#include <algorithm>

namespace Aws {
namespace IAMToolbox {

template <typename DerivedClient = IAMToolboxClient>
class IAMToolboxWaiter {
 public:
};
}  // namespace IAMToolbox
}  // namespace Aws
