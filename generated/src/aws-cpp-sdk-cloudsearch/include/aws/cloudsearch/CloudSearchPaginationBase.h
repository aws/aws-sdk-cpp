/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudSearch {

class CloudSearchClient;

template <typename DerivedClient>
class CloudSearchPaginationBase {
 public:
  virtual ~CloudSearchPaginationBase() = default;
};
}  // namespace CloudSearch
}  // namespace Aws
