/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/inspector2/Inspector2Client.h>

#include <algorithm>

namespace Aws {
namespace Inspector2 {

template <typename DerivedClient = Inspector2Client>
class Inspector2Waiter {
 public:
};
}  // namespace Inspector2
}  // namespace Aws
