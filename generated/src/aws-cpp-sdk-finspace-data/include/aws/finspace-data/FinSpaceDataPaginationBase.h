/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace FinSpaceData {

class FinSpaceDataClient;

template <typename DerivedClient>
class FinSpaceDataPaginationBase {
 public:
  virtual ~FinSpaceDataPaginationBase() = default;
};
}  // namespace FinSpaceData
}  // namespace Aws
