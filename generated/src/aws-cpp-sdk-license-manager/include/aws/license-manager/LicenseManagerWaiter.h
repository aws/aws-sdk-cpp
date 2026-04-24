/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/license-manager/LicenseManagerClient.h>

#include <algorithm>

namespace Aws {
namespace LicenseManager {

template <typename DerivedClient = LicenseManagerClient>
class LicenseManagerWaiter {
 public:
};
}  // namespace LicenseManager
}  // namespace Aws
