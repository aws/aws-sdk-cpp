/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/drs/DrsClient.h>

#include <algorithm>

namespace Aws {
namespace drs {

template <typename DerivedClient = DrsClient>
class DrsWaiter {
 public:
};
}  // namespace drs
}  // namespace Aws
