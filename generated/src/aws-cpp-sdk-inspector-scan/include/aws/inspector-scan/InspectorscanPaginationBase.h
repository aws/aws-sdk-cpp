/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace inspectorscan {

class InspectorscanClient;

template <typename DerivedClient>
class InspectorscanPaginationBase {
 public:
  virtual ~InspectorscanPaginationBase() = default;
};
}  // namespace inspectorscan
}  // namespace Aws
