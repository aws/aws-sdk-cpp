/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BCMDataExports {

template <typename DerivedClient = BCMDataExportsClient>
class BCMDataExportsWaiter {
 public:
};
}  // namespace BCMDataExports
}  // namespace Aws
