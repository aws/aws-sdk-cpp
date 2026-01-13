/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace DAX {

class DAXClient;

template <typename DerivedClient>
class DAXPaginationBase {
 public:
  virtual ~DAXPaginationBase() = default;
};
}  // namespace DAX
}  // namespace Aws
