/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppConfigData {

template <typename DerivedClient>
class AppConfigDataPaginationBase {
 public:
  virtual ~AppConfigDataPaginationBase() = default;
};
}  // namespace AppConfigData
}  // namespace Aws
