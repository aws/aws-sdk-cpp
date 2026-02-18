/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppConfigData {

class AppConfigDataClient;

template <typename DerivedClient>
class AppConfigDataPaginationBase {
 public:
  virtual ~AppConfigDataPaginationBase() = default;
};
}  // namespace AppConfigData
}  // namespace Aws
