/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ControlCatalog {

template <typename DerivedClient = ControlCatalogClient>
class ControlCatalogWaiter {
 public:
};
}  // namespace ControlCatalog
}  // namespace Aws
