/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace LicenseManager {

class LicenseManagerClient;

template <typename DerivedClient>
class LicenseManagerPaginationBase {
 public:
  virtual ~LicenseManagerPaginationBase() = default;
};
}  // namespace LicenseManager
}  // namespace Aws
